#include<stdio.h>
 int searchlinear(int arr[], int n,int target, int index){
 	if(index==n){
 		return-1;
	 }
	 if(arr[index]==target){
	 	return index;
	 	
	 }
	 return searchlinear(arr, n,target,index+1);
 }
 int main(){
 	int searchlinear(int arr[], int n, int target,int index );
 	int arr[]={1,2,3,4};
 	int n=4;
 	int target=5;
 	int result=searchlinear(arr,4,5,1);
 	if(result==-1){
 		printf("no found:\n");
 		
	 }else{
	 	printf("the found result is :%d\n", result);
	 }
	 return 0;
 }


