#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,day=0,d,x;
    hari:
    printf("\n 1 SUNDAY \n 2 MONDAY \n 3 TUESDAY \n 4 WEDNESDAY \n 5 THURSDAY \n 6 FRIDAY \n 7 SATURDAY \n");
    printf("\n Enter your preferred day : ");
    scanf("%d",&day);
    if(day<=7)
    {
    int sunday=1,monday=2,tuesday=3,wednesday=4,thursday=5,friday=6,saturday=7;
    printf("Enter the your preferred increment days :");
    scanf("%d",&i);
    i=day+i;
    d=i%7;
    }
    switch(d)
    {
    case 1:
        printf("Your preferred day is SUNDAY");
        break;
    case 2:
        printf("Your preferred day is MONDAY \n");
        break;
    case 3:
        printf("Your preferred day is TUESDAY \n");
        break;
    case 4:
        printf("Your preferred day is WEDNESDAY \n");
        break;
    case 5:
        printf("Your preferred day is THURSDAY \n");
        break;
    case 6:
        printf("Your preferred day is FRIDAY \n");
        break;
    case 7:
        printf("Your preferred day is SATURDAY \n");
        break;
    default:
        printf("Enter the valid day \n");
        break;
    }
    printf("\n Do you want to continue press any number  : ");
    scanf("%d",&x);
    if (x<=0||x>=0)
    {
    goto hari;
    }
    return 0;
}
