//Implementation of NFA for string accepting L={0,01,11} over input alphabet {0,1}

#include<stdio.h>
void q0(char);
void q1(char);
void q2(char);

int current = 0;

void q0(char c)
{
	if(c=='0')
	current=2;
	else if(c=='1'||c=='0')
	current=1;
	else 
	current=-1;
}

void q1(char c)
{
	if(c=='1')
	current=2;
	
	else 
	current=-1;
}
void q2(char c)
{
	if(c=='1')
	current=2;
	else if(c=='0')
	current=2;
	else 
	current=-1;
}




int main()
{
	char input[20],c;
	int i=0;
	printf("\n enter an input string:");
	gets(input);
	c=input[i];
	while(c!='\0')
	{
		switch(current)
		{
			case 0:q0(c);
			break;	
			case 1:q1(c);
			break;
			case 2:q2(c);
			break;
		}
		c=input[++i];
	}
	if(current==2)
	{
		printf("\n Accepted by a given NFA");
	}
	else
	{
		printf("\n Rejected by a given NFA");
	}
	return 0;
}


