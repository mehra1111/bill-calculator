#include <stdio.h>

	int low(int unit,int subs)
	{
		
		return 5*unit-subs;
	}
	int mid(int unit,int subs)
	{
		
		return 10*unit-subs;
	}
	int high(int unit,int subs)
	{
		
		return 13*unit-subs;
	}
	int rich(int unit,int subs)
	{
		//no subsidies given
		return 15*unit-subs;
	}
	int companies(int unit, int subs)
	{
		return 22*unit;
	}
int main()
{
int unit;
int subs;
printf("Enter unit form electricity meter :");
scanf("%d", &unit);
printf("enter extra subsidies :");
scanf("%d", &subs);
printf("congratulation you's bill is genrated ->\n");
printf("\n");

//all 5 function's 
int val1=low(unit,subs);
int val2=mid(unit, subs);
int val3=high(unit,subs);
int val4=rich(unit, subs);
int val5=companies(unit,subs);

//if unit is  less than 100 than this case will run
if(unit<100)
{
	printf("value of electricity bill is :");
	printf("%d", val1);
	printf(" rupee\n" );
	printf("and extra subsidies given is :");
	printf("%d", subs);
}

//if unit is  less than 300 and more than 100 than
// this case will run
if(unit>100 && unit<=300)
{
	printf("value of electricity bill is :");
	printf("%d", val2);
	printf(" rupee\n" );
	printf("and extra subsidies given is :");
	printf("%d", subs);
}

//if unit is  less than 500 and more than 300 than
// this case will run
if(unit>300 && unit<=500)
{
	printf("value of electricity bill is :");
	printf("%d", val3);
	printf(" rupee\n" );
	printf("and extra subsidies given is :");
	printf("%d", subs);
}

//if unit is more than 500 
//then this case will run
if(unit>500 && unit<=1000)
{
	printf("value of electricity bill is :");
	printf("%d", val4);
	printf(" rupee" );
	printf("\n");
	printf("and extra subsidies given is :");
	printf("%d", subs);
}

//if unit is more than 1000 
//then this case will run
//and no subsidies will be given
if(unit>1000)
{
	printf("value of electricity bill for you'r companies :");
	printf("%d", val5);
	printf("rupees");
	printf("\n");
	printf(" no subsidies is given for private companies");
}
}
