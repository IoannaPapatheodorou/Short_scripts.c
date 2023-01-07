#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{

int i, length;


char seq[5000];

float GCcontent= 0;

scanf("%s", seq);

	length = strlen( seq );

	for( i=0; i < length; i++)
	{
		if( seq[i] == 'G' || seq[i] == 'C' )
			{ GCcontent++;
			}
	}

printf("GC content is %f\n", 100*GCcontent/length );
}

