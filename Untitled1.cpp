#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *fp;
int ans[10][5],scard[20],z;
int medium(int i);
int hard(int i);
int menu(int i);
int easy(int i);
int result(int score);
int check(int j,int ans[][5]);
int login();
int instructions();
int write();
 struct g
{
int i;
char name[20];
int age;
char school[30];
int rollno;
char gender[11];
char address[50];
}students[5];
int ch;
int login()
{
int a;
int i;

printf("Enter the number of candidates : ");
scanf("%d",&z);
for (i=0;i<z;i++)
{
system("cls");
printf("\nEnter your name : ");
scanf(" %[^\n]",students[i].name);
printf("\nEnter your age : ");
scanf("%d",&students[i].age);
if((students[i].age<16)||(students[i].age>30)){
	printf("error in input\n");
return 0;}
printf("\nEnter your school : ");
scanf(" %[^\n]",students[i].school);
printf("\nEnter your roll number : ");
scanf("%d",&students[i].rollno);
printf("\nEnter your gender : ");
scanf("%s",students[i].gender);
if(strcmp("m",students[i].gender)==0)
printf("\nEnter your address : ");
scanf(" %[^\n]",students[i].address);
menu(i);
}
}
int menu(int i)
{
printf("\nEnter your exam mode :");
printf("\n1.Easy");
printf("\n2.Medium");
printf("\n3.Difficult");
printf("\n4.Return");
printf("\nEnter your choice : ");
scanf("%d",&ch);
printf("\n");
switch(ch)
{
case 1: easy(i);
break;
case 2:medium(i);
break;
case 3:hard(i);
break;
default:
login();
}
}

int easy(int i)
{ int j=0;
system("cls");
printf("\n1)In 1610,Galileo Galilei discovered four moons of which planet?\n");
printf("\n1.Mars\n2.Jupiter\n3.Venus\nEnter your option : ");
scanf("%d",&ans[i][j]);
printf("\n2)By which ministry is economic survey published?\nEnter your option : ");
printf("\n");
printf("1.Ministry of agriculture\n2.Ministry of education\n3.Ministry of finance\nEnter your option : ");
scanf("%d",&ans[i][j+1]);
printf("\n3)Which state rank first in milk procurement in India?\nEnter your option : ");
printf("\n");
printf("1.Gujarat\n2.Bihar\n3.Karnataka\nEnter your option : ");
scanf("%d",&ans[i][j+2]);
printf("\n4)Which state has lowest literary rate?\nEnter your option : ");
printf("1.Karnataka\n2.Assam \n3.Bihar\nEnter the correct option :");
scanf("%d",&ans[i][j+3]);
printf("\n5)Which metal is non-toxic?\nEnter your option : ");
printf("1.Mercury\n2.Gold\n3.Lead\nEnter the correct option : ");
scanf("%d",&ans[i][j+4]);
check(i,ans);
}
int medium(int i)
{
	int j=0;
	system("cls");
printf("\n6)Which  was the first indian women  to scale Mount Everest?");
printf("\n1.Junko Tabei\n2.Bachendri Pa\n3.Sri Edmund Hillary\nEnter your option : ");
scanf("%d",&ans[i][j]);
printf("\n7)Which was India's first-ever tactical missile?\n");
printf("1.Agni \n2.K 15 \n3.Prithvi-1\nEnter your option : ");
scanf("%d",&ans[i][j+1]);
printf("\n8)What is approximate circumference of the Earth?\n");
printf("1.20,000 km \n2.40,000 km  \n3.30,000 km\nEnter your option : ");
scanf("%d",&ans[i][j+2]);
printf("\n9)The salivary gland secrete saliva that contains which enzyme?\n");
printf("\n1.Pepsinogen \n2.Ptyalin  \n3.Lipase\nEnter your option : ");
scanf("%d",&ans[i][j+3]);
printf("\n10)Which is the first indian woman to reach Olumpic finals in individual track events?\n");
printf("\n1.P.T.Usha  \n2.Sania Mirza \n3.Anju Bobby George\nEnter your option : ");
scanf("%d",&ans[i][j+4]);
check(i,ans);
}
int hard(int i)
{
int j=0;
system("cls");
printf("\n11)Who is the first Asian Winner of Nobel prize?\n");
printf("1.Chandrasekar Venkataraman \n2.Rabindranath Tagore \n3.Mother Teresa\nEnter your option : ");
scanf("%d",&ans[i][j]);
printf("\n12)Where is Indian Institute of petroleum located?\n");
printf("1.Kolkata \n2.New Delhi \n3.Dehradun\nEnter your option : ");
scanf("%d",&ans[i][j+1]);
printf("\n13)Which first Bank was established in India?\n");
printf("1.Bank of hindusthan \n2.State Bank \n3.Indian bank\nEnter your option : ");
scanf("%d",&ans[i][j+2]);
printf("\n14)Which remains constant while throwing a ball upward?");
printf("\n1.Distance \n2.Velocity \n3.Acceleration\nEnter your option : ");
scanf("%d",&ans[i][j+3]);
printf("\n15)Which is used as the logo of the World Wide Fund for nature?\n");
printf("1.Panda \n2.Monkey \n3.Tiger\nEnter your option : ");
scanf("%d",&ans[i][j+4]);
check(i,ans);
}

int check(int j,int arr[10][5])
{
int e[5]={2,3,1,3,2};
int m[5]={2,1,3,2,1};
int d[5]={2,3,1,3,1};
int i,score=0;
static int p=0;

if(ch==1)
{
for(i=0;i<5;i++)
{
if(arr[j][i]==e[i])
score=score+4;
scard[p]=score;
}
printf("The Total Score is : %d",score);
}
else if(ch==2)
{
for(i=0;i<5;i++){
if(arr[j][i]==m[i])
score=score+4;
scard[p]=score;
}
printf("The Total Score is : %d",score);
}else 
{
for(i=0;i<5;i++){
if(arr[j][i]==d[i])
score=score+4;
scard[p]=score;
}
printf("The Total Score is : %d",score);
}
result(score);
p=p+1;
}
int result(int final)
{
static int k=0;
if(final==20)
{
printf("\nYou are a Born Genius");
}
else if(final>16)
{
printf("\nGood");
}
else if(final>12)
printf("\nBetter");
else if(final<8)
printf("\nPractice well and Try Again");
if(k==z-1)
write();
k=k+1;
return 0;
}
int instructions()
{
printf("		WELCOME TO ONLINE TEST\n"		);
printf("\nHERE ARE SOME OF THE INSTRUCTIONS TO COMPLETE YOUR ONLINE TEST\n");
printf("\n1.Fill in the details properly\n") ;
printf("\n2.There are 3 levels of examination\nEnter 1 for easy mode and 2 for moderate level and 3 for veteran level\n");
printf("\n3.Check your internet connection before taking up the examination\n");
printf("\n4.Each correct answer will be awarded with 4 marks\n");
printf("\n5.All the questions must be answered compulsorily\n");
printf("\n6.Don't try to copy in the examination\n");
printf("	\n	ALL THE BEST FOR YOUR EXAMINATION\n"	);
login();
}
int write(){
fp=fopen("scorecard.txt","a");
for(int o=0;o<z;o++)
{
fprintf(fp,"\nRoll number : %d\tName : ",students[o].rollno);	
fputs(students[o].name,fp);
fprintf(fp,"\tScore : %d",scard[o]);
}
fclose(fp);
printf("\n");
system("type scorecard.txt");
printf("\n");
system("pause");
return 0;
}
main()
{
instructions();
}

