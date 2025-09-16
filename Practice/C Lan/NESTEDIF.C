#include <stdio.h>
#include <conio.h>

int main()
{
   int s1, s2, s3, sum;
   double per;

   printf("\nEnter S1:");
   scanf("%d", &s1);

   printf("\nEnter s2:");
   scanf("%d", &s2);

   printf("\nEnter s3:");
   scanf("%d", &s3);

   sum = s1 + s2 + s3;
   printf("\nSum:%d", sum);

   per = sum / 3;
   printf("\nPercentage:%lf", per);

   if (s1 > s2)
   {

      if (s1 > s3)
      {
         printf("\ns1 in max");
      }
      else
      {
         printf("\ns3 is max");
      }
   }

   else if (s2 > s3)
   {

      printf("\ns2 is max");
   }

   else
   {
      printf("\ns3 is max");
   }

   getch();
}