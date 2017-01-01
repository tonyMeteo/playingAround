#include <stdio.h>

/*basically the same temperature converter using for*/

int  main ()
{
float  tempc =0;
int  tempf =0;



	for (tempf = 0;tempf <= 300 ;tempf+=20)
	{
		tempc = (5.0/9.0)*(tempf-32);
		/* tempf max out at 300 so we only need to sace a 3 digit wide number and i strench the output of tempc  to 2 digit after the . */	
		printf("%3.0d\t%.2f\n", tempf, tempc);
	} 
}
