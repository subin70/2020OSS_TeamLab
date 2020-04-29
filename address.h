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

createPerson(Person *p); 
readPerson(Person p);
updatePerson(Person *p, int count);
deletePerson(Person *p);
listPerson(Person *p);
selectDataNum(Person *p, int count);
