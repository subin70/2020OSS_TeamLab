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
                fscanf(fp, "%s %4d%2d%2d %s %s\n", p[count].name, &p[count].dob.year, &p[count].dob.month, &p[count].dob.day, p[count].phone, p[count].city);
                count++;
        }
        fclose(fp);
	printf("=> 파일로드 성공!\n");
        return count;
}
int selectMenu(){
	int menu;

	printf("\n=======전화번호부=======\n");
	printf("(1) 전화번호부 목록 조회\n");
	printf("(2) 전화번호부 목록 추가\n");
	printf("(3) 전화번호부 목록 수정\n");
	printf("(4) 전화번호부 목록 삭제\n");
	printf("(5) 파일 저장\n");
	printf("(0) 프로그램 종료\n");
	printf("\n=> 메뉴 입력: ");
	scanf("%d",&menu);

	return menu;
}

void searchName(Person *p, int count){
	int scount =0 ;
	char search[64];
	printf("찾는 이름은? ");
	scanf("%s", search);

	printf("\n=======전화번호부=======\n");
	for(int i=0; i<count;i++){
		if(p[i].age != -1)
			if(strstr(p[i].name,search)){
				readPerson(p[i]);
				scount++;
			}
		}
	}
	if(scount==0)printf("검색결과 없음\n");
	printf("\n");
}

//void searchPhone(Person *p, int count);
