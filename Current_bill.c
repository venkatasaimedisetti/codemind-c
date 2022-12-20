#include<stdio.h>
int main()
{
    int unit;
    float bill,sur;
    scanf("%d",&unit);
    if (unit<200)
    {
        bill=unit*1.20;
        if (bill>400 && bill>100)
        {
        	sur=bill*15/100;
            printf("%.2f",bill+sur);
        } 
        else
        {
            printf("%.2f",bill+100);
        }
    }
    else if (unit>=200 && unit<400)
    {
        bill=unit*1.50;
        if (bill>400 && bill>100)
        {
        	sur=bill*15/100;
            printf("%.2f",bill+sur);
        } 
        else
        {
            printf("%.2f",bill+100);
        }
    }
    else if (unit>=400 && unit<600)
    {
        bill=unit*1.80;
        if (bill>400 && bill>100)
        {
        	sur=bill*15/100;
            printf("%.2f",bill+sur);
        } 
        else 
        {
            printf("%.2f",bill+100);
        }
    } 
    else if (unit>=600)
    {
        bill=unit*2.00;
        if (bill>400 && bill>100) 
        {
        	sur=bill*15/100;
            printf("%.2f",bill+sur);
        }
        else 
        {
            printf("%.2f",bill+100);
        }
    }
    return 0;
}