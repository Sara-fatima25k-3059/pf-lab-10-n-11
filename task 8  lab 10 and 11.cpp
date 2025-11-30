#include<stdio.h>
#define metertokm 0.001
void meterstokm(float meters){
	static int callcount=0;
	callcount++;
	
	float kilometer=meters*metertokm;
	printf("the meters %.2f=is %.3f kilometers\n", meters, kilometer);
	printf("the function call itself %d time\n", callcount);
}
int main(){
	float meters;
	  printf("Enter distance in meters (0 to exit): ");
	while(scanf("%f", &meters)&&meters!=0){
		meterstokm(meters);
		  printf("Enter distance in meters (0 to exit): ");
		 
	}
	
    printf("Program exited.\n");
	
	
}

