#include <stdio.h>
#include <stdlib.h>

void doFunc()
{
	void* p1 = malloc( 1 );
	printf("\np1 : %u", p1 );

	int* p2 = (int*) malloc( sizeof( int ) );
	*p2 = 5;
	printf("\np2 : %u : %i", p2, *p2 );
	
	void* p3 = malloc( 10 + sizeof( int ) );
	printf("\np3 : %u", p3);

	void* p4 = malloc( 1 );
	printf("\np4 : %u", p4);

	int int1 = 17;
	int* pInt1 = &int1;
	printf( "\npint1 : %u : %i", pInt1, *pInt1);
}


int main()
{

	doFunc();

	return 0;
}
