#include<stdio.h>
main(){
	
	int a, b, c, d;
	
	printf("Enter value of A : ");
	scanf("%d", &a);
	
	printf("Enter value of B : ");
	scanf("%d", &b);
	
	printf("Enter value of C : ");
	scanf("%d", &c);
	
	printf("Enter value of D : ");
	scanf("%d", &d);
	
	if(a>b){
		//A is max
		if(a>c){
			//A is max
			if(a>d){
				//A is max
				printf("A is max");
				
			}else{
				//D is max
				printf("D is max");
				
			}
		}else{
			//C is max
			if(c>d){
				//C is max
				printf("C is max");
				
			}else{
				//D is max
				printf("D is max");
				
			}
		}
	}else{
		//B is max
		if(b>c){
			//B is max
			if(b>d){
				//B is max
				printf("B is max");
				
			}else{
				//D is max
				printf("D is max");
				
			}
		}else{
			//C is max
			if(c>d){
				//C is max
				printf("C is max");
				
			}else{
				//D is max
				printf("D is max");
				
			}
		}
	}
	
}