#include<stdio.h>
#include<string.h>
struct student 
{
	int roll_no,mar;
	long int mob;
	char name[20],pro[20],fac[20];
};
void Modify(struct student S[],int size,int roll_no);
void DisplayAll(struct student S[],int size);
void main()
{
	struct student S[200];
	int i,roll_no,size,ope;
	printf("\n Insert number of students:- ");
	scanf(" %d",&size);
	printf("\n \n Enter the information of students:- \n");
	printf("\n Enrollment No.\t Name\t Mobile No.\t Project Name\t Faculty Assigned\t Marks\n \n");
 
	for(i=0;i<size;i++)
	{
	scanf(" %d %s %ld %s %s %d",&S[i].roll_no,S[i].name,&S[i].mob,S[i].pro,S[i].fac,&S[i].mar);
	}
	do{
	printf("\n \n \t ***** Menu *****");
	printf("\n 1.Modify");
	printf("\n 2.Display all student information");
	printf("\n 3.Exit \n \n");
	printf("\n Enter Your Choice:- ");
	scanf(" %d",&ope);
	switch(ope)
	{
	case 1:
	printf("\n Enter enrollment no. to modify the details:- ");
	scanf(" %d",&roll_no);
	Modify(S,size,roll_no);
	break; 
	case 2:
	DisplayAll(S,size);
	break;
	}}while(ope!=3);
}
// Modify Function
void Modify(struct student S[],int size,int roll_no)
{
	char name[20],pro[20],fac[20]; 
	int i,update,newData;
	long int newd;
	do{
	printf("\n What do you want to update:- 1.Enrollment No. \n \t\t\t      2.Name \n \t\t\t      3.Mobile No. \n \t\t\t      4.Project Name \n \t\t\t      5.Faculty Assigned \n \t\t\t      6.Marks \n");
	scanf(" %d",&update);
	if(update==6)
	{
	printf("\n Enter new marks:- ");
	scanf("%d",&newData);
	}
	else if(update==1)
	{
	printf("\n Enter new enrollment no.:- ");
	scanf(" %d",&newData);
	}
	else if(update==2)
	{
	printf("\n Enter new name:- ");
	scanf(" %s",name);
	}
	else if(update==3)
	{
	printf("\n Enter new mobile no.:- ");
	scanf(" %ld",&newd);
	}
	else if(update==4)
	{
	printf("\n Enter new project name:- ");
	scanf(" %s",pro);
	}
	else if(update==5)
	{
	printf("\n Enter new faculty assigned:- ");
	scanf(" %s",fac);
	}	
	else 
	{
	printf("\n Please make a valid choice \n \n"); 
	}
 
	}while(update<1 || update>6);
	for(i=0;i<size;i++)
	{
		if(S[i].roll_no==roll_no)
		{
			if(update==1)
			{
			S[i].roll_no=newData;
			break;
			}   
			else if(update==3)
			{
			S[i].mob=newd;
			break;
			} 
 			else if(update==4)
			{
			strcpy(S[i].pro,pro);
			break;
			}
			else if(update==5)
			{
			strcpy(S[i].fac,fac);
			break;
			}			
			else if(update==6)
			{
			S[i].mar=newData;
			break;
			}
			else
			{
			strcpy(S[i].name,name);
			break; 
			} 
		}
	}
 
	printf("\n \n Modified details of students are as follows:- \n");
	printf("\n Enrollment No.\t Name \t Mobile No. \t Project Name \t Faculty Assigned \t Marks \n \n");
	for(i=0;i<size;i++)
	{ 
	printf("\n %d \t\t %s \t %ld \t %s \t\t %s \t\t %d \n",S[i].roll_no,S[i].name,S[i].mob,S[i].pro,S[i].fac,S[i].mar); 
	}
}
// DisplayAll Function
void DisplayAll(struct student S[200],int size)
{
	int i;
	printf("\n \n The Information of students is as follow:- \n");
	printf("\n Enrollment No.\t Name \t Mobile No. \t Project Name \t Faculty Assigned \t Marks \n \n"); 
 
	for(i=0;i<size;i++)
	printf("\n %d \t\t %s \t %ld \t %s \t\t %s \t\t %d \n",S[i].roll_no,S[i].name,S[i].mob,S[i].pro,S[i].fac,S[i].mar);
}
