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
   } Person;  


//함수 prototype
//Crud
int createPerson(Person *p);
int readPerson(Person p); 
int updatePerson(Person *p);
int deletePerson(Person *p);
void listPerson(Person *p, int count);
