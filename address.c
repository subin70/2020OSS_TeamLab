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
        return count;
}

