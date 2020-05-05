#include "address.h"
int selectDataNum(Person *p, int count){
        listPerson(p, count);
        int index;      // index번호 저장
        printf("선택할 번호 입력: ");
        scanf("%d", &index);
        return index;
}
void saveData(Person *p, int count){
        FILE *fp = fopen("person.txt", "wt");
        for(int i = 0; i < count; i++){
                //이름 생년월일 전화번호 사는도시
                if(p[i].dob.day != -1){
                        fprintf(fp, "%s %4d%02d%02d %s %s\n", p[i].name, p[i].dob.year, p[i].dob.month, p[i].dob.day, p[i].phone, p[i].city);
                }
        }
        fclose(fp);
        printf("=> 파일저장완료!\n");
}
int loadData(Person *p){
        int count = 0;
        FILE *fp = fopen("person.txt", "rt");
        if(fp == NULL){
                printf("=> 파일없음. \n");
                return 0;
        }
        while(!feof(fp)){
                fscanf(fp, "%s %4d%2d%2d %s %s", p[count].name, &p[count].dob.year, &p[count].dob.month, &p[count].dob.day, p[count].phone, p[count].city);
                count++;
        }
        fclose(fp);
	printf("=> 파일로드 성공!");
        return count;
}
int selectMenu(){
	int menu;

	printf("=======전화번호부=======\n");
	printf("(1) 전화번호부 목록 조회\n");
	printf("(2) 전화번호부 목록 추가\n");
	printf("(3) 전화번호부 목록 수정\n");
	printf("(4) 전화번호부 목록 삭제\n");
	printf("(5) 파일 저장\n");
	printf("(0) 프로그램 종료\n");
	printf("=> 메뉴 입력: ");
	scanf("%d",&menu);

	return menu;
}
int main(void){

	Peron plist[10];
	int menu, count, curCount;
	count = loadData(plist);
	curCount = count;

	while(1){
		menu = selectMenu();
		if(menu == 0)	break;
		if(menu == 1){
			if(count > 0) 
				listPerson(plist, curCount);
			ele
				printf("=> 데이터없음.\n");
		}
		else if(menu == 2){
			count += createPerson(&plist[curCount++]);
			printf("'%s' 의 정보가 추가됨!\n");
		}
		else if(menu == 3){
			if(count <= 0){
				printf("=> 데이터없음.\n");
				continue;
			}else{
				int num = selectDataNum(plist, count);
				if(num == 0){
					printf("=> 취소됨!\n");
					continue;
				}
				updatePerson(&plist[curCount]);
				printf("=> '%s' 의 정보가 수정됨!\n");
			}
		}
		else if(menu == 4){
			if(count <= 0){
				printf("=>데이터없음.\n");
				continue;
			}else{
				int num = selectDataNum(plist, count);
				if(num == 0){
					printf("=> 취소됨!\n");
					continue;
				}
				deletePerson(&plist[curCount]);
				printf("=> '%s' 의 정보가 삭제됨!\n");
				count--;
			}
		}
		else if(menu == 5){
			if(count <= 0){
				printf("=> 데이터없음.\n");
				continue;
			}
			saveData(plist, curCount);
		}
	}
	printf("=> 프로그램 종료\n");
	return 0;
}
