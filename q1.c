#include <stdio.h>
#include <string.h>



struct department{
    char name[50];
};

struct employee{
    int id;
    char name[50];
    float salary;
    struct department d1;
   
};

int main() {
    struct department d1;
    struct employee e1;
    struct employee e2;
    struct employee e3;
   
    e1.d1=d1;
    e2.d1=d1;
    e3.d1=d1;
   
    e1.id=e1.id + 7124;
    strcpy(d1.name,"\nTechCuber");
    printf("%s\nID: %d\n",d1.name,e1.id);
    strcpy(e1.name,"Asad\n");
    printf("%s",e1.name);
   
    printf("Enter Salary: ");
    scanf("%f",&e1.salary);
   
    e2.id=e2.id + 9724;
    //strcpy(d1.name,"\nTechCuber");
    printf("%s\nID: %d\n",d1.name,e2.id);
    strcpy(e2.name,"Talha\n");
    printf("%s",e2.name);
   
    printf("Enter Salary: ");
    scanf("%f",&e2.salary);
   
    e3.id=e3.id + 4567;
    //strcpy(d1.name,"\nTechCuber");
    printf("%s\nID: %d\n",d1.name,e3.id);
    strcpy(e3.name,"Ramisha\n");
    printf("%s",e3.name);
   
    printf("Enter Salary: ");
    scanf("%f",&e3.salary);
   
    float total_salary=e1.salary+e2.salary+e3.salary;
    printf("Total Salary is: %.2f",total_salary);
   

    return 0;
}
