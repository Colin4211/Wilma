/*
*  Wilma.cpp
*
*/

#include <stdio.h>

int  main( int argC, const char * argV[] )
{
	printf( "--==>Wilma<==--\n" );
	for ( int nIndex = 0; nIndex < argC; nIndex++ )
	{
		printf( "argV[%d] -->%s<--\n", nIndex, argV[nIndex] );
	}
	return (0);
}


