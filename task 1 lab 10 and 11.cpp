#include <stdio.h> 
int sumDigits(int n)
 { 
    int sum;
    if (n == 0)return 0;
   sum= (n % 10) + sumDigits(n / 10);
   return sum;
}
	 
int main() 
{ 
   int n;
    printf("Enter number: ");
	scanf("%d", &n);  
    printf("Sum of digits = %d", sumDigits(n));
	 return 0; 
} 
