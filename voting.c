#include<stdio.h>
int main()
{
    int age;
    int voterID;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Do you have voterID(1=yes,0=no)");
        scanf("%d",&voterID);
        if (voterID==1)
        {
            printf("you are eligible for vote");
        }
        else
        {
            printf("please apply for voterID");
        }
    }
    else
    {
        printf("you are not eligible for vote");
    }
}
