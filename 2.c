#include <stdio.h>
#include <stdlib.h>
int lar(int * a, int n);

int main()
{
int response;
float *prices;
int average;
int x, i, total, high, low;


printf("How many prices will you be entering: ");
scanf("%d", &response);


 /* allocate enough memory to hold prices. */
prices = (int *)malloc(sizeof(int));
 if ( prices == NULL ) 
  {

    printf("\nOut of Memory!\n");
    return;

   }  // end if
//loop x times to get prices
 for ( x = 0; x < response; x++ ) 
 {
	printf("Enter prices: ");
	scanf("%2.2lf", &prices[x]);

total+=prices[x];
	
 }//end of for loop

average = total/response;
printf("The average is %d\n", average);
printf("The largest is %d\n", lar(prices,x));
printf("The smallest is %d\n", small(prices,x));


free(prices);
}//end of main

int lar(int * a, int n)
{
int i; 
int lar=a[0];

for(i=1; i < n ; i++)
if(a[i] > lar) lar= a[i];
//printf("Largest number is %d\n", lar);
return lar;
 }
 
 int small(int * b, int n)
{
int i; 
int small=b[0];

for(i=1; i > n ; i++)
if(b[i] < small) small= b[i];
//printf("Largest number is %d\n", lar);
return small;
 }


