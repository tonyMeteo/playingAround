/* write a program to count blanks, tabs, and new lines*/
#include <stdio.h>

int main () 
{
printf("start typing\n");
int c=0;
char x[2];
while ((x[0]=getchar()) != '\\')
 if (x[0] == ' ' || x[0]== '\t' || x[0] == '\n')
{
	++c;
	printf("you typed %d new line, blank space and new line total\n", c);
} 

}
