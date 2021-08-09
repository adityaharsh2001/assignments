//HEADER FILES**
#include<stdio.h>//Use for standard I/O Operation
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include<ctype.h>
char tune_in=0;
int verify;
int b, check=0;
//FUNCTION DECLERATION
void WelcomeScreen();//WelcomeScreen function decleration
void Title();//Title function decleration
void MainMenu();//MainMenu function decleration
void LoginScreen();//LoginScreen function decleration
void Add_rec();//Add_rec function declaration
void func_list();//function to list the volunteer details
void Search_rec();//Search_rec function declaration
void Dlt_rec();//Dlt_rec function declaration
void ex_it();//close_portal function declaration
// Defines gotoxy() for ANSI C compilers.

COORD coord={0,0}; // this is global variable                                     /*center of axis is set to the top left cornor of the screen*/ 
void gotoxy(int x,int y) 
{ 
    coord.X=x; 
    coord.Y=y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord); 
} 
struct volunteer//list of global variable
{
	int age;
	int age_priority;
	char Gender;
	char First_Name[20];
	char Last_Name[20];
	char Contact_no[15];
	char Address[30];
	int add_priority;
	char health_status[20];
	int health_priority;
	char profession[30];
	int profession_priority;
	int priority_score;
};

struct volunteer  p,temp_c;



int main()
{

    WelcomeScreen();//Use to call WelcomeScreen function
	Title();//Use to call Title function
	LoginScreen();//Use to call Menu function
	return 0;



}
/* ************************************************* Welcome Screen ********************************************* */
void WelcomeScreen(void) //function for welcome screen
{

	printf("\n\n\n\n\n\n\n\t\t\t\t#########################################");
	printf("\n\t\t\t\t#   AGRA COVID VACCINE PORTAL   #");
	printf("\n\t\t\t\t#########################################");
	printf("\n\n\n\n\n Press any key to continue......\n");
	system("pause");//Use to holds screen for some seconds
	system("cls");//Use to clear screen

}
/* ************************************************* Title Screen ********************************************* */
void Title(void)//function for title screen
{
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t    VACCINATION PORTAL           ");
	printf("\n\t\t----------------------------------------------------------------------------------");
}
/* ************************************************* Main Menu ********************************************* */
void MainMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. Add volunteers details\n");
	printf("\n\t\t\t\t2. List Of volunteers \n");
	printf("\n\t\t\t\t3. Search volunteer\n");
	printf("\n\t\t\t\t4. Delete volunteer detalis \n");
	printf("\n\t\t\t\t5. close_portal\n");
	printf("\n\n\n \n\t\t\t\t choose from 1 to 5:");
	scanf("%i", &choose);

	switch(choose)//switch to differeht case
	{

	case 1:
	Add_rec();//Add_rec function is called
    	break;
    case 2:
    	func_list();
    	break;
	case 3:
	Search_rec();//View_rec function is call
    	break;
	case 4:
		Dlt_rec();//Dlt_rec function is call
		break;
	case 5:
		ex_it();//ex_it function is call
    	break;

	default:
		printf("\t\t\tIncorrect entry. Please enter option from given range :)");
		system("pause");//holds screen
	}//end of switch


}
/* ************************************************* close_portal Screen ********************************************* */
void ex_it(void)//function to close_portal
{
	system("cls");
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t MADE BY - PALAK GUPTA 2K20/B5/45 ----THANKYOU! HOPE LIFE NEVER BRINGS YOU HERE AGAIN !!!");
	system("pause");//holds screen

}
/* ************************************************* Login Screen ********************************************* */
void LoginScreen(void)//function for login screen
{
//list of variables
int e=0	;
char Username[15];
char Password[15];
char original_Username[25]="staysafe";
char original_Password[15]="health";

do
{
	printf("\n\n\n\n\t\t\t\tEnter your Username and Password ");
	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",&Username);

	printf("\n\n\t\t\t\t\tPASSWORD:");
	scanf("%s",&Password);

	if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
	{
		printf("\n\n\n\t\t\t\t\t...you are being logged in!!...");


		system("pause");
		MainMenu();//call MainMenu function
		break;
	}
	else
	{
		printf("\n\t\t\t Password failed , Retry!!! ");
		e++;
		system("pause");
	}

}
while(e<=2);
	if(e>2)
	{
	printf("You have cross the limit. You cannot login. :( :(");
	system("pause");
    ex_it();
	}

system("cls");
}
/* **************************************ADD RECORD*******************************************/

void Add_rec(void)
{
	system("cls");
	Title();// call Title function
	//list of variables
	char tune_in;
	FILE*ek;//file pointer
	ek=fopen("Record2.dat","a");//open file in write mode
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Add volunteers Record !!!!!!!!!!!!!\n");

	/* **************************First Name*********************************** */

	printf("\n\t\t\tFirst Name: ");
	scanf("%s",p.First_Name);





	/* ********************************************** Last name ************************************************ */

	printf("\n\t\t\tLast Name: ");
    scanf("%s",p.Last_Name);



/* ******************************************* Gender ************************************************************** */
	do
	{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&p.Gender);
		if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
		{
			verify =1;
		}
		else
		{
		verify =0;
		}
        if(!verify)
	    {
	    	printf("\n\t\t Incorrect !! Write either F or M !! :)");
    	}
	 }	while(!verify);
/* ***************************************** Age ********************************************************************** */
    printf("\n\t\t\tAge:");
    scanf(" %i",&p.age);
    if(p.age >= 60)
        p.age_priority = 10;
    else if(p.age >= 35 && p.age <= 59)
        p.age_priority = 8;
    else if(p.age >= 18 && p.age <= 34)
        p.age_priority = 6;
    else {
        p.age_priority = 4;
    }


/* **************************************** Address ******************************************************************* */


    printf("\n\t\t\tAddress: ");
    scanf("%s",p.Address);
    m:
    printf("\n\t\t\tCovid cases in your area are in range of-");

    printf("\n\t\t\tA. =< 200");
    printf("\n\t\t\tB. 201-400");
    printf("\n\t\t\tC. 401-600");
    printf("\n\t\t\tD. 601-800");
    printf("\n\t\t\tE. 801-1000 ");
    printf("\n\t\t\tF. >1000 ");
    printf("\n\t\t\tEnter A-F according to covid cases range");

    switch(system("pause"))
{
case 'A':
p.add_priority = 1;
break;
case 'B':
p.add_priority = 2;
break;
case 'C':
p.add_priority = 4;
break;
case 'D':
p.add_priority = 6;
break;
case 'E':
p.add_priority = 8;
break;
case 'F':
p.add_priority = 10;
break;
default:
{

printf("\n\t\t\t Wrong Entry!!Please re-enter from the choice given");
goto m;
}
}
    /* ******************************************* Contact no. ***************************************** */

    printf("\n\t\t\tContact no: ");
    scanf("%s",p.Contact_no);




/* ********************************************************* health_status *********************************************** */

    printf("\n\t\t\thealth_status: ");
    scanf("%s",p.health_status);

    printf("\n\t\t\tIn which of the following category you health status falls?");
    printf("\n\t\t\tA. Breathing problem");
    printf("\n\t\t\tB. Neurological problem");
    printf("\n\t\t\tC. COVID");
    printf("\n\t\t\tD. Fever");
    printf("\n\t\t\tE. Infection");
    printf("\n\t\t\tF. Body pain");
    printf("\n\t\t\tG. Have past major health problem but now healthy");
    printf("\n\t\t\tH. Immunity issues");
    printf("\n\t\t\tI. I am healthy! perfect for vaccination");
    printf("\n\t\t\tEnter A-F according to covid cases range");

    switch(system("pause"))
{
case 'A':
p.health_priority = 0;
break;
case 'B':
p.health_priority = 0;
break;
case 'C':
p.health_priority = 3;
break;
case 'D':
p.health_priority = 4;
break;
case 'E':
p.health_priority = 3;
break;
case 'F':
p.health_priority = 7;
break;
case 'G':
p.health_priority = 0;
break;
case 'H':
p.health_priority = 0;
break;
case 'I':
p.health_priority = 10;
break;
default:
{

printf("\n\t\t\tWrong Entry!!Please re-entered correct option");
}
}

/* ********************************************** profession**************************************** */

    printf("\n\t\t\tProfession");
    scanf("%s",p.profession);

    printf("\n\t\t\tUnder which of the following category your profession falls?");
    printf("\n\t\t\tA. Health and medical related");
    printf("\n\t\t\tB. Govt employee-WFH is difficult");
    printf("\n\t\t\tC. Govt employee-WFH is not difficult");
    printf("\n\t\t\tD. Private employee-WFH is difficult");
    printf("\n\t\t\tE. Private employee-WFH is not difficult");
    printf("\n\t\t\tF. College going");
    printf("\n\t\t\tG. Student");
    printf("\n\t\t\tH. Homemaker");
    printf("\n\t\t\tEnter A-H according to your profession");

    switch(system("pause"))
{
case 'A':
p.profession_priority = 10;
break;
case 'B':
p.profession_priority = 9;
break;
case 'C':
p.profession_priority = 3;
break;
case 'D':
p.profession_priority = 5;
break;
case 'E':
p.profession_priority = 0;
break;
case 'F':
p.profession_priority = 5;
break;
case 'G':
p.profession_priority = 3;
break;
case 'H':
p.profession_priority = 0;
break;

default:
{

printf("\n\t\t\tWrong Entry!!Please re-entered correct option");
}
}
/* ********************************************** priority score**************************************** */

p.priority_score = p.age_priority + p.health_priority + p.add_priority + p.profession_priority;
printf(" \n PRIORITY SCORE - %d",p.priority_score);

    fprintf(ek," %s %s %c %d %s %s %s %s %d \n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.profession, p.health_status, p.priority_score);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    system("pause");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&tune_in);
    if (toupper(tune_in)=='Y')
	{
    	Add_rec();
	}
    else if(toupper(tune_in)=='N')
	{
		printf("\n\t\t Thank you for making agra safer!!");
    	system("pause");
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
/* **************************************VIEW RECORD*******************************************/
void func_list()
{

	system("cls");
	Title();
	FILE *ek;
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List volunteers Record !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("Full Name");
		gotoxy(20,15);
		printf("Gender");
		gotoxy(32,15);
		printf("Age");
		gotoxy(37,15);
		printf("Address");
		gotoxy(49,15);
		printf("Contact No.");
		gotoxy(64,15);
		printf("profession");
		gotoxy(88,15);
		printf("health");
		gotoxy(98,15);
		printf("Priority_score\n");
		printf("=================================================================================================================");
        int row=17;
		while(fscanf(ek,"%s %s %c %d %s %s %s %s %d\n", p.First_Name, p.Last_Name,
					&p.Gender, &p.age, p.Address, p.Contact_no, p.profession, p.health_status, &p.priority_score)!=EOF)
		{
			gotoxy(1,row);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(20,row);
			printf("%c",p.Gender);
			gotoxy(32,row);
			printf("%i",p.age);
			gotoxy(37,row);
			printf("%s",p.Address);
			gotoxy(49,row);
			printf("%s",p.Contact_no);
			gotoxy(64,row);
			printf("%s",p.profession);
			gotoxy(88,row);
			printf("%s",p.health_status);
			gotoxy(98,row);
			printf("%d",p.priority_score);
            row++;
		}
		fclose(ek);
		system("pause");
		MainMenu();
}
void Search_rec(void)
{
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search volunteers Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter volunteer Name to be viewed:");
	scanf("%s",name);
	fflush(stdin);

	while(fscanf(ek,"%s %s %c %d %s %s %s %s %d\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.profession, p.health_status, &p.priority_score)!=EOF)
	{
		if(strcmp(p.First_Name,name)==0)
		{
			gotoxy(1,15);
			printf("Full Name");
			gotoxy(25,15);
			printf("Gender");
			gotoxy(32,15);
			printf("Age");
			gotoxy(37,15);
			printf("Address");
			gotoxy(52,15);
			printf("Contact No.");
			gotoxy(64,15);
			printf("Profession");
			gotoxy(80,15);
			printf("Health Status");
			gotoxy(95,15);
			printf("Priority Score\n");
			printf("=================================================================================================================");
			gotoxy(1,18);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(25,18);
			printf("%c",p.Gender);
			gotoxy(32,18);
			printf("%i",p.age);
			gotoxy(37,18);
			printf("%s",p.Address);
			gotoxy(52,18);
			printf("%s",p.Contact_no);
			gotoxy(64,18);
			printf("%s",p.profession);
			gotoxy(80,18);
			printf("%s",p.health_status);
			gotoxy(95,18);
			printf("%d",p.priority_score);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.First_Name,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		system("pause");
	   }
	fclose(ek);
	L:
	system("pause");
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&tune_in);
    if (toupper(tune_in)=='Y')
    {
        Search_rec();
    }
	else if(toupper(tune_in)=='N')
	{
		printf("\n\t\t Thank you ! Well we all should stay updated");
    	system("pause");
		MainMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}


void Dlt_rec()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp_file2.dat","w+");
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete volunteers Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter volunteer Name to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);

	while (fscanf(ek,"%s %s %c %d %s %s %s %s %d", p.First_Name, p.Last_Name, &p.Gender,
			 &p.age, p.Address, p.Contact_no, p.profession, p.health_status, &p.priority_score)!=EOF)
	{
		if (strcmp(p.First_Name,name)!=0)
		fprintf(ft,"%s %s %c %d %s %s %s %s %d\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.profession, p.health_status, p.priority_score);
		else
		{
			printf("%s %s %c %d %s %s %s %s %d\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.profession, p.health_status, p.priority_score);
			found=1;
		}
	}
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		system("pause");
		MainMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("Record2.dat");
		rename("temp_file2.dat","Record2.dat");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		system("pause");
		MainMenu();
	}
}
