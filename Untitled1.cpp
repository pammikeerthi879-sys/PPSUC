#include<stdio.h>
#include<math.h>
 int main()
 { int a,b,c,i;
   float x,y;
   printf("enter a,b,c");
   scanf("%d %d %d",&a,&b,&c);
   i=(b*b)-4*a*c;
   x=(-b+sqrt(i))/2*a;
   y=(-b-sqrt(i))/2*a;
   if(i==0)
   {printf("Roots are equal");
   }
   else if(i>0)
   {printf("Roots are distinct");
   }
   else if(i<0)
   {printf("Roots are imaginary");
   }
   else
   {printf("Roots does not exist");
   }
   return 0;
 }
