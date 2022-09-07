#include <stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char name[20];
int questions();
int x;
char choice1;
void score1();
void read_score();
char cont;




int name_register(){
  system("cls");
  printf("\n\n\n\n\n\n\t\t\t\tRegister your name:  ");
  scanf("%[^\n]s",name);
  
}
int rules(){
	char b;
	
    printf("\t\t\tHello %s! Here are the rules for the test.\n",name);
    printf("\nYou will have 10 questions each carrying 10 marks.\n Your grading will be given by the marks you will obtain.");
    printf("\nYou will have four options to choose the correct answer for the question.\nThe options being A B C and D.");
    printf("\n Please enter option A, B, C or D from keyboard.");
}

int main(void)
{   int count,icounter,i,r;  
 	char a;
	char b;
	char choice;
	
    printf("                    ****************************************\n");
    
    printf("                    Welcome to INTELLIGENT QUOTIENT(IQ) test\n");
    
    printf("                    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
  
    printf("\n\n\nPress ENTER key to Continue\n");
    printf("\n\n\nPress ESC key to Exit\n");
    a = getchar();
    if(a==10){
        name_register();
    }
    while(a==27){
      printf("Exiing...");
      exit(1);
    }
    if(a!=10){
      printf("Sorry! You entered a wrong key.");
    }
    system("cls");
    rules();
	printf("\n\nPress ENTER to continue");	
    getchar();
    b=getchar();
    if(b==10){
      questions();
    }
    else{
        printf("Sorry! You entered a wrong key.");
    }

    

}
int questions(){
	system("cls");
	int i,r;
	int countr;

    countr=0;
    for(i=1;i<=10;i++)
    {
     	r=i;

     	switch(r)
		{
			case 1:
			printf("\n\n 1. What is the plural of appendix? ");
			printf("\n\nA.Appenda\t\tB.Appendixes\n\nC.Appendices\t\tD.Appndix");
			if (toupper(getch())=='C')
			{
				countr++;
			 	system("cls");
			 	break;}
			else
		    {	system("cls");
		      	break;
			}

			case 2:
			printf("\n\n 2. What is the meaning of the saying,'A leopard cannot change its spots'?");
			printf("\n\nA.The notion that things cannot \nchange their innate nature.\tB.Do not compare apples with pears.\n\nC.Not everything that is shiny and \nsuperficially attractive is valuable\tD.Nothing lasts forever.");
			if (toupper(getch())=='A')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 3:
			printf("\n\n 3. Which number should be on the dots?\t 27 9 18 6 12 4 ....");
			printf("\n\nA.5\t\tB.6\n\nC.7\t\tD.8");
			if (toupper(getch())=='D')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 4:
			printf("\n\n 4. Tommorrow is Tuesday. Which day was it in 15 days, but 3 weeks ago? ");
			printf("\n\nA.Monday\t\tB.Tuesday\n\nC.Wednesday\t\tD.Thursday");
			if (toupper(getch())=='B')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 5:
			printf("\n\n 5.What's the result of this sum? 16 x 63 - 1214 ");
			printf("\n\nA.206\t\tB.-206\n\nC.306\t\tD.-18416");
			if (toupper(getch())=='B')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 6:
			printf("\n\n6. Which one of the following sentences is grammatically correct?");
			printf("\n\nA.I wishes you the best of luck\t\tB.Our holiday as been postponed.\n\nC.The Government is \nimplememting a new law today.\t\tD.It is difficult to\n understood my teacher.");
			if (toupper(getch())=='C')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 7:
			printf("\n\n 7. Which of the following is not an anagram(word formed by rearranging the letters of a different word) of a colour?");
			printf("\n\nA.Genre\t\tB.Sore\n\nC.Cheap\t\tD.Hatred");
			if (toupper(getch())=='D')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 8:
			printf("\n\n8. A charity arranges a bike race. 120 people take part. 1/3 of the people finished the race in under half an hour. How many people finished the race in 30 minutes or more? ");
			printf("\n\nA.80\t\tB.20\n\nC.120\t\tD.50");
			if (toupper(getch())=='A')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 9:
			printf("\n\n 9.The probability of picking a lottery winning ticket in a national lottery is 1 in 14 million. If 36 million tickets are sold weekly, how many jackpot winners, on average, would you expect in one week?");
			printf("\n\nA.2,000,000\t\tB.2\n\nC.20\t\t\tD.1");
			if (toupper(getch())=='B')
			{
				countr++;
				system("cls");
			 	break;
			}
			else
		    {  
			   system("cls");
		       break;
		    }
		    
		    case 10:
			printf("\n\n 10. A boy increases his speed to 9/5 times of his original speed. By this he reaches his school 30 minutes before the usual time. How much time does he takes usually?");
			printf("\n\nA.21 minutes\t\tB.67 minutes\n\nC.30 minutes\t\tD.49 minutes");
			if (toupper(getch())=='B')
			{
				countr++;
				system("cls");
				goto score;
			 	break;
			}
			else
		    {  
			   system("cls");
			   goto score;
		       break;
		    }
		    
		}
    }
    

    score:
    	x=(countr*10);	
    
    	
   score1();
   
   printf("\nPress R or r to view score here.");
   
   if(getch()=='R'||getch()=='r'){
   	 read_score();
	}
	else{
		exit(1);
	}
	
	while(1)
    {
      printf("\n\n\n\nIf you want to work out your brain again or pass it to your friend sitting right beside you, \nthen you can start by registering your name again: ");
	  printf("\nPress Y for registering your name and N for exiting. ");	
      printf("\nContinue [YN]? ");
      cont = toupper(getch());
      getch();
      if (cont == 'Y')
          return main();
      else if (cont == 'N')
          return EXIT_SUCCESS;   
    }	
	
	
}
void score1()
{
	system("cls");
	FILE *fp;
	fp=fopen("score1.txt","w");
	if(fp==NULL){
		fprintf(stderr,"Cant open the file.");
		exit(1);
	}
	fprintf(fp,"\nNAME\t\t\t\t\t\t\tSCORE\n");
	fprintf(fp,"%s\t\t\t\t\t\t%d",name,x);
	printf("\nThe score you have obtained are written in the file.");
	
	
	fclose(fp);
}

void read_score()
{
    FILE *fp = fopen("score1.txt", "r");

    if (fp == NULL)
    {
        printf("Error: could not open file ");
        exit(1);
    }

    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, fp)){
        printf("%s\n", buffer);
	}
    fclose(fp);
}



