#include "address.h"

int selectMenu(){
        int menu;

        printf("\n=======전화번호부=======\n");
        printf("(1) 전화번호부 목록 조회\n");
        printf("(2) 전화번호부 목록 추가\n");
        printf("(3) 전화번호부 목록 수정\n");
        printf("(4) 전화번호부 목록 삭제\n");
        printf("(5) 이름으로 검색\n");
        printf("(6) 전화번호로 검색\n");
        printf("(7) 생일로 검색\n");
	printf("(8) 파일 저장\n");
        printf("(0) 프로그램 종료\n");
        printf("\n=> 메뉴 입력: ");
        scanf("%d",&menu);

        return menu;
}

int main(void){

	Person plist[10];
	int menu, count, curCount;
	count = loadData(plist);
	curCount = count;

	while(1){
		menu = selectMenu();
		if(menu == 0)	break;
		if(menu == 1){
			if(count > 0) 
				listPerson(plist, curCount);
			else
				printf("=> 데이터없음.\n");
		}
		else if(menu == 2){
			count += createPerson(&plist[curCount++]);
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
				updatePerson(&plist[num-1]);
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
				deletePerson(&plist[num-1]);
				count--;
			}
		}

		else if(menu == 5){
			if(count <= 0){
				printf("=> 데이터없음.\n");
				continue;
			}
			searchName(plist, curCount);
		}

		else if(menu == 6){
			if(count <= 0){
				printf("=>데이터 없음.\n");
				continue;
			}
			seacrhPhone(plist, curCount);
		}	

		else if(menu == 7){
			int opt; //생일 검색 옵션(1. 생년, 2. 생일)
			printf("1. 출생년도 검색\n");
			printf("2. 생일 검색(월일)\n");
			scanf("%d",&opt);
			if(opt == 1)
				searchYob(plist, curCount);
			else if(opt == 2)
				searchDob(plist, curCount);
			else
				printf("잘못입력하셨습니다.\n");
		}
		else if(menu == 8){
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
