#include <stdio.h>
#include <stdlib.h>

int main()
{char op;
int a,b;
   printf("Enter your number?:");
   scanf("%d",&a);
   printf("Enter your operature?:");
   scanf(" %c",&op);
   printf("Enter your number?:");
   scanf("%d",&b);
   switch(op){
   case '+':printf("a+b=%d",a+b);
   break;
   case '*':printf("a*b=%d",a*b);
   break;
   case '-':printf("a-b=%d",a-b);
   break;
   case '/':if(b!=0)printf("a/b=%d",a/b);
   else printf("you cant device on zero");
   break;
   default: printf("invalid ope");
   }
    return 0;
}
