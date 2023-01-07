#include <stdio.h>
#include <math.h>
int main()
{
char k;
float total  = 0, all = 0;

	while(scanf("%c", &k ) == 1 )

	{
		all++; 
		if( k == 'c' || k == 'C' || k== 'g' || k == 'G' )
		{
			total++;
		}

	}
	printf("Total CG percentage : %f\n", (100*total)/all );

}

