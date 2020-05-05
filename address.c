#include "address.h"
int selectDataNum(Person *p, int count){
        listPerson(p, count);
        int index;      // index번호 저장
        printf("선택할 번호 입력: ");
        scanf("%d", &index);
        return index;
}
