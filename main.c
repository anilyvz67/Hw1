#include <stdio.h>
#include <math.h>

int main()
{
   int homeValue,popularity,size;

   printf("Enter popularity:");
   scanf("%d",&popularity); //Wants popularity value

   printf("Enter size:");
   scanf("%d",&size); //Wants size value

   homeValue=(pow(popularity,3)+pow(size,2))*10000; //calculates inputted values

    printf("Home value is:%d",homeValue); //shows home value


    return 0;
}
