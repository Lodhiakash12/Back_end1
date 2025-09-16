#include <stdio.h>
#include <conio.h>

int main()
{
   int s1, s2, sum;
   double per;

   printf("\nEnter S1:");
   scanf("%d", &s1);

   printf("\nEnter s2:");
   scanf("%d", &s2);

   sum = s1 + s2;
   printf("\nSum:%d", sum);

   per = sum / 2;
   printf("\nPercentage:%lf", per);

   if (per > 90)
   {

      printf("\nDistinction");
   }

   else if (per > 60)
   {

      printf("\nPass");
   }

   else
   {
      printf("\nFail");
   }
   getch();
}
