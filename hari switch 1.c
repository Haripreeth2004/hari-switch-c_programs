#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,day=0,d,x;
    hari:
    printf("\n 0 SUNDAY \n 1 MONDAY \n 2 TUESDAY \n 3 WEDNESDAY \n 4 THURSDAY \n 5 FRIDAY \n 6 SATURDAY \n");
    printf("\n Enter your preferred day in given above number : ");
    scanf("%d",&day);
    if(day>=0&&day<=6)
    {
    printf("\n Enter the your preferred increment days :");
    scanf("%d",&i);
    i=day+i;
    d=i%7;
    switch(d)
    {
    case 0:
        printf("\n Your preferred day is SUNDAY");
        break;
    case 1:
        printf("\n Your preferred day is MONDAY ");
        break;
    case 2:
        printf("\nYour preferred day is TUESDAY");
        break;
    case 3:
        printf("\n Your preferred day is WEDNESDAY");
        break;
    case 4:
        printf("\n Your preferred day is THURSDAY");
        break;
    case 5:
        printf("\n Your preferred day is FRIDAY");
        break;
    case 6:
        printf("\n Your preferred day is SATURDAY");
        break;
    //default:
        //printf("\n Enter the valid day ");
        //break;
    }
    }
    else
    {
        printf("\n Enter the valid day ");
    }
    // printf("\n Do you want to continue press any number  : ");
    printf("\n Do you want to continue press 1 : ");
    scanf("%d",&x);
    //if (x<=0||x>=0)
    if (x==1)
    {
    goto hari;
    }
    else
    {
        printf("\n Thank you Visit again");
    }
    return 0;
}
