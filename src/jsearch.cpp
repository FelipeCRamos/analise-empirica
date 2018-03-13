#include "jsearch.h"
#include <iostream>
#include <cmath> 

// Preciso me interar a cerca de como iremos parametrizar
int jsearch( int[] A, int x )
{
// Tamanho do arrey (?) - reavaliar	
	int n = A.length;
//	int n = sizeof(A)

// Variaveis de corrida. right é o pulo do gato
	int right = (int)Math.floor(Math.sqrt(n));
	int left = 0;

// Procurando  o bloco onde o x pode estar
	while ( A[Math.min(right, n) -1] < x )
	{
		left = right;
		right += (int)Math.floor(Math.sqrt(n));
		if( left >= n ) return -1;
	}

	while ( A[left] < x )
	{
		left++;

		if( left == Math.min(right, n) ) return -1;
	}

	if( A[left] == x ) return left;

	return -1;	
}
