#include<stdio.h>
#include<string.h>
int main(){
char word[5][20]={
 	"sara",
 	"noman",
 	"manal",
 	"kulsoom",
 	"bisma",
 };
 char input[20];
 int found=0;
 printf("enter a input:\n");
 scanf("%s",input);
 for(int i=0; i<5; i++){
 	if(strcmp(word[i],input)==0){
 		found=1;
 		break;
	 }
 }
 if(found){
 	printf("found");
 }else{
 	printf("not found");
 }
}
 
 

