#include "person.h"

int createPerson(Person *p){

    printf("이름은?");
    scanf("%d",&p->name);

    printf("생년월일은? ");
    scanf("%4d%2d%2d",&p->dob.year,&p->dob.month,&p->dob.day);
   
    
    printf("전화번호는?");
    scanf("%d",&p->phone);

    printf("사는 도시는?");
    scanf("%d",&p->city);

    return 1;
}

int readPerson(Person p){
    printf("%s %4d%2d%2d %s %s" ,p.name, p.dob.year, p.dob.month, p.dob.day, p.phone, p.city);

    return 1;
}

int updateProduct(Product *p){

    printf("이름은?");
    scanf("%d",&p->name);

    printf("생년월일은? ");
    scanf("%d",&p->dob);
    
    printf("전화번호는?");
    scanf("%d",&p->phone);

    printf("사는 도시는?");
    scanf("%d",&p->city);

    printf("주소록 수정 완료\n");
    return 1;
}

int deleteProduct(Product *p){
    p->dob.day = -1;
    printf("주소록 삭제됨!");
}

void listPerson(Person *p, int count){
    printf("이름  생년월일  전화번호  사는도시\n");
    printf("----------------------------------\n");

for(int i=0;i<count;i++){
	if(p[i].dob.day != -1){
		printf("%d",i+1);
		readPerson(p[i]);
	}
	printf("\n");
}
