#include <stdio.h>
/*verifie that getchar()!=EOF is 0 or 1*/
int main ()
{
	char  c;
	
	printf("%d\n",((c=getchar()) != EOF));
}
