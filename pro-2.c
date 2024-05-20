#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter any number to check it Even or Not : ");
	scanf("%d", &a);
	
	if(a%2 == 0){
		printf("Number is Even.");
	}else{
		printf("Number is Odd.");
	}
	
}