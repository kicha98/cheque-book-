/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int num,count=0,temp,firstnum,digit,result;
int main()
{printf("Enter the cash in cheque \n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    
    {
        num=num/10;
        count++;
    }

result=temp;

while(count!=0)

{digit = pow(10,(count-1));
    
    firstnum=temp/(digit);
    //printf("%d ",digit);
switch(firstnum)
{
    case 1: if(digit==10)
    
            { firstnum=temp%digit;
                switch(firstnum)
            {
                case 1: printf("eleven"); count--;
                break;
                case 2: printf("tweleve"); count--;
                break;
                case 3: printf("thirteen"); count--;
                break;
                case 4: printf("fourteen"); count--;
                break;
                case 5: printf("fifteen"); count--;
                break;
                case 6: printf("sixteen"); count--;
                break;
                case 7: printf("seventeen"); count--;
                break;
                case 8: printf("eighteen"); count--;
                break;
                case 9: printf("nineteen"); count--;
                break;
               
            }
                }
                else
                printf("one ");break;
    case 2: if(digit==10)
          { printf("twenty ");}
           else
           printf("two ");break;
  case 3: if(digit==10)
          { printf("thirty ");}
           else
          printf("three ");break; 
 case 4: if(digit==10)
          { printf("fourty ");}
           else
          printf("four ");break;  
  case 5: if(digit==10)
          { printf("fivety ");}
           else
          printf("five "); break; 
 case 6: if(digit==10)
          { printf("sixty ");}
           else
          printf("six "); break; 
 case 7: if(digit==10)
          { printf("seventy ");}
           else
          printf("seven ");break; 
  case 8: if(digit==10)
          { printf("eighty  ");}
           else
          printf("eight ");break; 
    case 9: if(digit==10)
          { printf("ninety ");}
           else
          printf("nine ");break; 
          
}
if(digit ==100)
{
    printf("hundred ");
}
if(digit ==1000)
{
    printf("thousand ");
}
if(digit ==10000)
{
    printf("ten thousand ");
}
if(digit ==100000)
{
    printf("lakh ");
}
if(digit ==1000000)
{
    printf("crore ");
}
 count--;
 temp=temp%digit;
}
 printf(" Rs%d -/",result);

return 0;

}