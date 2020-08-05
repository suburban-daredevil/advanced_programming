#include<stdio.h>
struct bank{
	char n[20];
	int rn;
	char t;
	float amt;

}b[100];

int count=0;

int add( int count)
{
	int ct=count,i;

	char j='y',u;
	i=count;
	do
	{

		printf("Enter customer details: \n");
		printf("\n Name:");
		scanf("%s",&b[i].n);
		printf("\n Account number:");
		scanf("%d",&b[i].rn);
		printf("\n Account type:");
		scanf("%s",&b[i].t);
		printf("\n Amount:");
		scanf("%f",&b[i].amt);
		printf("\n\n Do you want to continue adding? (y/n");
		scanf("%s",&j);
		i++;
	}while((j=='y')||(j=='Y'));
	count=i-1;
	return count;
};

int ad(int count)
{
	int cnt=count,i=0;
 	printf("Name \t a/c no. \t Acc. type \t Amount \n");
	for(i=0;i<=cnt;i++)
 	{

		printf("%s\t%d\t%c\t%f",b[i].n,b[i].rn,b[i].t,b[i].amt);
 	}
};

int withdraw(int count)
{
	int cnt=count,anum,i;
	float am;
	printf("\n Enter the account number:");
	scanf("%d",&anum);
	printf("\n Enter the amount:");
	scanf("%f",&am);
	for(i=0;i<=cnt;i++)
	{
		if(b[i].rn==anum)
		{
			if(b[i].amt>=am)
			{
				b[i].amt=b[i].amt-am;
	    	}
			else
			printf("\n Insufficient balance.");
		}
	}
}


int deposit(int count)
{
	int cnt=count,anum,i;
	float am;
	printf("\n enter the account number:");
	scanf("%d",&anum);
	printf("\n enter the amount:");
	scanf("%f",&am);
	for(i=0;i<=cnt;i++)
	{
		if(b[i].rn==anum)
		{
			b[i].amt=b[i].amt+am;
		}
	}
}


int bal(int count)
{
	int cnt=count,anum,i;
	printf("\n Enter the account number:");
	scanf("%d",&anum);
	for(i=0;i<=cnt;i++)
	{
		if(b[i].rn==anum)
		{

			printf("Your balance amount is: %f",b[i].amt);
			printf("\n");
		}

	}
}



int main()
{
	int a=0;
	do{

		printf("\n 1. ADD NEW ACCOUNT\n 2. VIEW DETAILS OF ACCOUNT \n 3.WITHDRAW \n 4.DEPOSIT \n5.CHECK BALANCE\n6.EXIT \n");
		printf("Your choice: ");
		scanf("%d",&a);
		if(a==1)
		{
			count=add(count);
		}

	if(a==2)
	{
 		ad(count);
	}
	if(a==3)
	{
		withdraw(count);
	}

	if(a==4)
	{
		deposit(count);
	}
	if(a==5)
	{
		bal(count);
	}
}while(a!=6);
}
