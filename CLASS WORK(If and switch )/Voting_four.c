#include<stdio.h>
void main( )
{
	int age;

	printf ("Enter your age: ");
	scanf("%d",&age);

	if (age >= 18)
	{
		printf("\nYou can vote.");
		printf("\nPlease vote wisely.");
	}
	else
    {
		printf("\nYou are too young to vote.");
		printf("\nDont worry,you will vote another day.");
    }


	printf("\n\n");
}
