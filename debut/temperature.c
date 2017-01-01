/*in respect for section 1.2 of the book, I will write a program that output in celcius and their faranhet equivalent
right beside*/
#include <stdio.h>
int main ()
{
 int min = 0;
 int max = 300;
 int  step = 20;
 int x= 0;
 double tempc , tempf = 0.0;
  tempf = min;
 while ( tempf <=  max)
 {
	tempc = (5.0/9.0)*(tempf-32);
	
	printf("%f    %f \n",tempf, tempc);
	tempf += step;
}
}
