#include<stdio.h>
main(){
	
	int s1, s2, s3, s4, s5, total;
	float per;
	
	printf("Enter Marks Of Physics : ");
	scanf("%d", &s1);
	
	printf("Enter Marks Of Chemistry : ");
	scanf("%d", &s2);
	
	printf("Enter Marks Of Biology : ");
	scanf("%d", &s3);
	
	printf("Enter Marks Of Mathematics : ");
	scanf("%d", &s4);
	
	printf("Enter Marks Of Computer : ");
	scanf("%d", &s5);
	
	total = s1 + s2 + s3 + s4 + s5;
	
	printf("Your Marks Is : %d", total);
	
	per = total / 5;
	
	printf("\nYour Percentage Is : %.2f", per);
	
	if(per >= 90){
		printf("\n Grade A");
	}else if(per >= 80){
		printf("\n Grade B");
	}else if(per >= 70){
		printf("\n Grade C");
	}else if(per >= 60){
		printf("\n Grade D");
	}else if(per >= 50){
		printf("\n Grade E");
	}else if(per >= 40){
		printf("\n Grade F");
	}else{
		printf("\n Fail");
	}
	
}
