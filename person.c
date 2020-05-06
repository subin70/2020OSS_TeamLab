#include "person.h"

int createPerson(Person *p){

    printf("이름은?");
    scanf("%s",p->name);

    printf("생년월일은? ");
    scanf("%4d%2d%2d",&p->dob.year,&p->dob.month,&p->dob.day);
   
    
    printf("전화번호는?");
    scanf("%s",p->phone);

    printf("사는 도시는?");
    scanf("%s",p->city);

    return 1;
}

int readPerson(Person p){
    printf("%-8s %-4d%02d%02d %-4s %s" ,p.name, p.dob.year, p.dob.month, p.dob.day, p.phone, p.city);

    return 0;
}

int updatePerson(Person *p){

    printf("이름은?");
    scanf("%s",p->name);

    printf("생년월일은? ");
    scanf("%4d%2d%2d",&p->dob.year, &p->dob.month, &p->dob.day);
    
    printf("전화번호는?");
    scanf("%s",p->phone);

    printf("사는 도시는?");
    scanf("%s",p->city);

    printf("주소록 수정 완료\n");
    return 1;
}

int deletePerson(Person *p){
    p->dob.day = -1;
    printf("주소록 삭제됨!\n");
}

void listPerson(Person *p, int count){
    printf("이름\t생년월일\t 전화번호\t 사는도시\n");
    printf("----------------------------------\n");

	for(int i=0;i<count;i++){
		if(p[i].dob.day != -1){
			printf("%-2d. ",i+1);
			readPerson(p[i]);
		}
	printf("\n");
	}
}	
