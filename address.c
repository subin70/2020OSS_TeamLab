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
