#include <stdio.h>
#include <string.h>

typedef struct {
  int year;
  int month;
  int day;
} Date;

typedef struct {
  char name[64];
  Date dob;
  char phone[14];
  char city[50];
} Person;

int createPerson(Person *p); 
void readPerson(Person p);
int updatePerson(Person *p, int count);
int deletePerson(Person *p);
void listPerson(Person *p);
int selectDataNum(Person *p, int count);
void saveData(Person *p, int count);
int loadData(Person *p);
void searchName(Person *p, int count);
void searchPhone(Person *p, int count);
void searchDob(Person *p, int count);
