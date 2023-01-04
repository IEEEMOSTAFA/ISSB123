/*#include<stdio.h>
int leap(int y)
{
    if( (y%400==0)||(y%4==0  && y%100!=0)   )
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
   int year= leap(n);
   if(year==1)
    printf("leap year");
   else
      printf("Not a leap year");

    return 0;
}
*/
// A programme to print leapyear and distinct
#include<stdio.h>
int is_leap(int y)
{
    if( (y%400==0)||(y%4==0  && y%100!=0)   )
        return 1;
    else
        return 0;
}

int is_distinct(int n)
{
    int count_digit[10]={0,0,0,0,0,0,0,0,0,0};
    int ld;
    while(n>0)
    {
        ld=n%10;
        count_digit[ld]++;
        n/=10;
    }
    int i;
    for(i=0;i<10;i++)
    {
      if(count_digit[i]>1)
        return 0;
    }
    return 1;
}
int main()
{
   int year;
   scanf("%d",&year);
   if(is_leap(year)==1 && is_distinct(year)==1)
    printf("Beautiful\n");
   else
    printf("Ugly\n");
    return 0;
}
