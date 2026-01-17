
#include<stdio.h>
int main()
{
	char id[10], pass[10];
	
	printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t\t\t\t\t~~~~ WELCOME TO ONLINE VOTING SYSTEM ~~~~");
	printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	
	printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~ ELECTION ~~~~~~~~~~~~~~~\n");
	printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	
    printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t\t\t|~~~~~~~~~1.PARTY A  | 2.PARTY B~~~~~~~~~|\n");
    printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t\t\t|~~~~~~~~~3.PARTY C  | 4.PARTY D~~~~~~~~~|\n");
    printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	
     	
     	

	while(1)
	{
	printf("\n\n\n\t\t\t\t\t\t\tId = ");
	scanf("%s",id);
	printf("\n\t\t\t\t\t\t\tPassword = ");
	scanf("%s",&pass);
	if(strcmp(id,"admin")==0 )
	{
		if(strcmp(pass,"12345")==0)
		{
			printf("\n\t\t\t\t\t~~~~ You have successfully loged in ~~~~\n");
			break;
		}
		else
	    {
	    		
		    printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~ Try Again ~~~~~~~~~~~~~~~");
	
		}
		
	}
	else 
	    {
	    	printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~ Try Again ~~~~~~~~~~~~~~~");
		    
		}	
	
	}
	
	
	
	
	
	int info();
	int voting;
	voting=info();
}
int info()
{		
	int age;
	long  cnic;
	char fname[10], lname[10], city[10];
		
	printf("\n\t\t\t\t\tEnter your First Name = ");
	scanf("%s",&fname);
	printf("\n\t\t\t\t\tEnter your Last Name  = ");
	scanf("%s",&lname);
	printf("\n\t\t\t\t\tEnter your CNIC # ");
	scanf("%d",&cnic);
	printf("\n\t\t\t\t\tEnter your City       = ");
	scanf("%s",&city);
	printf("\n\t\t\t\t\tEnter your Age        = ");
	scanf("%d",&age);
	
	if( age >= 18 && age <= 100)
	{
		printf("\n\t\t\t\t\t~~~~   You are eligible to vote     ~~~~");
	}
	else
	{
		printf("\n\t\t\t\t\t~~~~ You are NOT eligible to vote ~~~~");
		printf("\n\t\t\t\t\t~~~~            SORRY!            ~~~~");
		return 0;
	}
	int choose();
	int choice;
	choice= choose();
	
}





int choose()	
{
	int choice;
	
	printf("\n\n\n\t\t\t\t\t\t~~~~~~~~~~ PARTIES ~~~~~~~~~~");
	
	printf("\n\t\t\t\t\t\t Enter 1 to vote for Party A");
	printf("\n\t\t\t\t\t\t Enter 2 to vote for Party B");
	printf("\n\t\t\t\t\t\t Enter 3 to vote for Party c");	
	printf("\n\t\t\t\t\t\t Enter 4 to vote for Party D");	
	
	printf("\n\n\t\t\t\t\t\t Enter your choice here: ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
		 printf("\n\n\t\t\t\t\t\t    You voted for Party A");
		break;
		case 2:
		 printf("\n\n\t\t\t\t\t\t    You voted for Party B");
		break;
		case 3:
		 printf("\n\n\t\t\t\t\t\t    You voted for Party C");
		break;
		case 4:
		printf("\n\n\t\t\t\t\t\t     You voted for party D"); 
		break;
		default: 
		printf("\n\n\t\t\t\t\t\t     You did not vote yet");
		printf("\n\n\t\t\t\t\t\t     vote again ");
			return choose();
		
	}
	
	return choice;
}
