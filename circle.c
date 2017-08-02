#include<stdio.h>
#include<string.h>

int count(int people[])				//Count the number of people alive
{
	int c=0, i;
	for(i=1; i<101; i++)
		if(people[i]==0)
			c++;
	return c;
}

int who(int people[])				//Find the first alive person starting from 1
{
	int i;
	for(i=1; i<101 && people[i]!=0; i++);
	return i;
}

int main(void)
{
	int people[101], i=2, j, to_be_killed;
	memset(people, 0, sizeof(people)); 	//Alive - 0; Dead - 1
	while(count(people)!=1)			//If only one is alive loop breaks
	{
		people[i] = 1;			//Killing the person
		to_be_killed = 0;		//Finding whom to kill next
		j = i;				
		while(to_be_killed!=2)		//Break the loop, when you find him
		{
			j++;
			j = j==101?1:j; 	//Resetting the circle's iteration
			if(people[j]==0)	//If he is alive
				to_be_killed++;	//Finding the second nearnest alive person
		}
		i = j;				//To kill him
	}
	printf("%d\n", who(people));		//Print the hero
	return 0;
}
