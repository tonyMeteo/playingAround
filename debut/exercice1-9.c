#include <stdio.h> 
int main ()
{
int i = 0;
char word[120];
printf("start typing, use \\ to exit\n");
while ((word[i]= getchar()) != '\\')
{
	if ( (i >= 1) && (word[i] ==' ' )&&(word[(i-1)]==word[i]))
		{
			--i;
		}		
	++i;
}
printf("%s", word);
}
