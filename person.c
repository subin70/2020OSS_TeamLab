#include "person.h"

int createPerson(Person *p){

<<<<<<< HEAD
    printf("이름은? ");
    scanf("%s",p->name);

    printf("생년월일은?(8자리) ");
    scanf("%4d%2d%2d",&p->dob.year,&p->dob.month,&p->dob.day);
   
    
    printf("전화번호는? ");
    scanf("%s",p->phone);

    printf("사는 도시는? ");
=======
    printf("이름은?");
    scanf("%s",p->name);

    printf("생년월일은? ");
    scanf("%4d%2d%2d",&p->dob.year,&p->dob.month,&p->dob.day);
   
    
    printf("전화번호는?");
    scanf("%s",p->phone);

    printf("사는 도시는?");
>>>>>>> f95555970d09d885066b12c61bfaad1f3faa03f1
    scanf("%s",p->city);

    return 1;
}

int readPerson(Person p){
<<<<<<< HEAD
    printf("%8s %4d%02d%02d  %-15s %4s" ,p.name, p.dob.year, p.dob.month, p.dob.day, p.phone, p.city);
=======
    printf("%-8s %-4d%02d%02d %-4s %s" ,p.name, p.dob.year, p.dob.month, p.dob.day, p.phone, p.city);
>>>>>>> f95555970d09d885066b12c61bfaad1f3faa03f1

    return 0;
}

int updatePerson(Person *p){

<<<<<<< HEAD
    printf("이름은? ");
    scanf("%s",p->name);

    printf("생년월일은?(8자리) ");
    scanf("%4d%2d%2d",&p->dob.year, &p->dob.month, &p->dob.day);
    
    printf("전화번호는? ");
    scanf("%s",p->phone);

    printf("사는 도시는? ");
    scanf("%s",p->city);

    printf("=> 주소록 수정 완료\n");
=======
    printf("이름은?");
    scanf("%s",p->name);

    printf("생년월일은? ");
    scanf("%4d%2d%2d",&p->dob.year, &p->dob.month, &p->dob.day);
    
    printf("전화번호는?");
    scanf("%s",p->phone);

    printf("사는 도시는?");
    scanf("%s",p->city);

    printf("주소록 수정 완료\n");
>>>>>>> f95555970d09d885066b12c61bfaad1f3faa03f1
    return 1;
}

int deletePerson(Person *p){
	p->dob.day = -1;
<<<<<<< HEAD
	printf("=> 주소록 삭제됨!\n");
=======
	printf("주소록 삭제됨!\n");
>>>>>>> f95555970d09d885066b12c61bfaad1f3faa03f1
	return 1;
}

void listPerson(Person *p, int count){
<<<<<<< HEAD
    printf("No.  이름  생년월일\t전화번호   사는도시\n");
    printf("------------------------------------------\n");

	for(int i=0;i<count;i++){
		if(p[i].dob.day != -1){
			printf("%02d. ",i+1);
			readPerson(p[i]);
			printf("\n");
		}
=======
    printf("이름\t생년월일\t 전화번호\t 사는도시\n");
    printf("----------------------------------\n");

	for(int i=0;i<count;i++){
		if(p[i].dob.day != -1){
			printf("%-2d. ",i+1);
			readPerson(p[i]);
		}
	printf("\n");
>>>>>>> f95555970d09d885066b12c61bfaad1f3faa03f1
	}
}	
