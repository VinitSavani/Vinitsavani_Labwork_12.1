#include<stdio.h>

struct std
{
    int std_id;
    char std_name[50];
    int std_age;
    char std_course[50];
    char std_city[50];
    int std_standard;
    char std_school[50];
}

void main()
{
    int i;
    
    struct std s[3];
    
    for(i=0;i<=2;i++)
    {
        printf("Enter ID :- ");
        scanf("%d",&s[i].std_id);
        printf("Enter Name :- ");
        scanf("%s",&s[i].std_name);
        printf("Enter Age :- ");
        scanf("%d",&s[i].std_age);
        printf("Enter Course :- ");
        scanf("%s",&s[i].std_course);
        printf("Enter City :- ");
        scanf("%s",&s[i].std_city);
        printf("Enter Standard :- ");
        scanf("%d",&s[i].std_standard);
        printf("Enter School name :- ");
        scanf("%s",&s[i].std_school);
    }
    
    for(i=0;i<=2;i++)
    {
       printf("ID")
    }
}
