//Implementation of DFA for string accepting 011 as substring over input alphabet {0,1}

#include<stdio.h>
void q0(char);
void q1(char);
void q2(char);
void q3(char);
int current = 0;

void q0(char c)
{
	if(c=='0')
	current=1;
	else if(c=='1')
	current=0;
	else 
	current=-1;
}

void q1(char c)
{
	if(c=='0')
	current=1;
	else if(c=='1')
	current=2;
	else 
	current=-1;
}

void q2(char c)
{
	if(c=='0')
	current=1;
	else if(c=='1')
	current=3;
	else 
	current=-1;
}

void q3(char c)
{
	if(c=='0')
	current=3;
	else if(c=='1')
	current=3;
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
			case 3:q3(c);
			break;	
		}
		c=input[++i];
	}
	if(current==3)
	{
		printf("\n Accepted by a given DFA");
	}
	else
	{
		printf("\n Rejected by a given DFA");
	}
	return 0;
}

