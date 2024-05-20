#include<stdio.h>
main(){
	
	char ch;
	
	printf("\t Choice List \n");
	printf("\nPress M for Monday");
	printf("\nPress T for Tuesday");
	printf("\nPress W for Wednesday");
	printf("\nPress TH for Thursday");
	printf("\nPress F for Friday");
	printf("\nPress S for Saturday");
	printf("\nPress SU for Sunday");
	
	
	printf("\n\nEnter Your Choice : ");
	scanf("%c", &ch);
	
	switch(ch){
		
		case 'M' :
			printf("Monday");
			break;
		case 'T' :
			printf("Tuesday");
			break;
		case 'W' :
			printf("Wednesday");
			break;
		case 'TH' :
			printf("Thursday");
			break;
		case 'F' :
			printf("Friday");
			break;
		case 'S' :
			printf("Saturday");
			break;
		case 'SU' :
			printf("Sunday");
			break;
		default :
			printf("Enter Valid Choice");
			break;
	}
	
}
