#include<stdio.h>

typedef union person_detail
{
    int age;
    char name[30];
    struct date
    {
        int date;
        int month;
        int year;
    }d;
}per; 

int main () {

    per p[10];
    int i;

    for( i=0 ; i<10 ; i++)
    {
        printf("Enter the deatil of the person no %d\n",i+1);
        printf("Enter the name of the person\n");
        scanf(" %[^\n]",&p[i].name);
        printf("NAME :- %s\n",p[i].name);
        printf("Enter the age of the person\n");
        scanf(" %d",&p[i].age);
        printf("AGE :- %d\n",p[i].age);
        printf("Enter the date of birth\n");
        scanf("%d",&p[i].d.date);
        printf("Enter the month of the birth\n");
        scanf("%d",&p[i].d.month);
        printf("Enter the year of birth\n");
        scanf("%d",&p[i].d.year);
        int y;
        y = (2025-p[i].d.year);
        
        if(y<=18)
        {
            printf("%d-%d-%d\n",p[i].d.date,p[i].d.month,p[i].d.year);
        }

        else if(y<=45)
        {
            printf("%d\n",y);
        }

        else{
            printf("Old person\n");
        }

    }



    return 0;
}
