#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter any Character : ");
	scanf("%d", &a);
	
	if(a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z'){
		printf("You Have Entered Alphabet.");
	}else if(a >= 0 && a <= 9){
		printf("You Have Entered Digit.");
	}else{
		printf("You Have Entered Special Character.");
	}
	
	
}