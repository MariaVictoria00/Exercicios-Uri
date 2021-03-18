#include <stdio.h>
 
int main() {
  
   double A, B, MEDIA;
   scanf("%lf",&A);
   scanf("%lf",&B);
   
   MEDIA = ((A*3.5) + (B*7.5))/ 11;
   
   if (MEDIA > 10 ) {
   printf("MEDIA = 10.0\n");
       
   }
   else{
   printf("MEDIA = %.5lf\n",MEDIA);
   
   }

    return 0;
}