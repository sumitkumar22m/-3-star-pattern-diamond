#include<stdio.h>
#include<conio.h>
int main()
{
    int j=1,k=1,m=9,a=1,b=1,c=5,d=4;
    while(a<=5)
    {
              while(b<=c)
              {
                  if(b<=d)
                  {
                      printf(" ");
                  }
                  else
                  {
                     printf("*");
                   }
                  b++;
              }
              c++;
              if(c==10)
              {
                  break;
              }
              a++;
              b=1;
              printf("\n");
              d--;
              if(d==-1)
              {
                  break;
              }
    }

    printf("\n");
    while(j<=5)
    {
           while(k<=m)
           {
               if(j==2 && k==1)
               {
                   printf(" ");
               }else if(j==3 && k==1)
               {
                   printf(" ");
               }else if(j==3 && k==2)
               {
                   printf(" ");
               }else if(j==4 && k==1)
               {
                   printf(" ");
               }else if(j==4 && k==2)
               {
                   printf(" ");
               }else if(j==4 && k==3)
               {
                   printf(" ");
               }else if(j==5 && k==1)
               {
                   printf(" ");
               }else if(j==5 && k==2)
               {
                   printf(" ");
               }else if(j==5 && k==3)
               {
                   printf(" ");
               }else if(j==5 && k==4)
               {
                   printf(" ");
               }else
               {
                   printf("*");
               }
               k++;

           }
           printf("\n");
           j++;
           k=1;
           m--;
           if(m==4)
           {
               break;
           }
    }
    getch();


}
