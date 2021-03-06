#include "jsearch.h"

long int *jsearch( long int *first, long int *last, long int value, long int *counter ) 
{
	// vector size  
	long int n = last - first;
	long int m = sqrt(n);
	long int *last_backup = last;
	long int k;
	
	for( k = 1; (k * m) < n; k++ )
	{
		*counter += 1;
		if( value == *(first + k * m) ){
			*counter += 1;
			return first + k * m;
		}
		if ( *(first + k * m) > value ) {
			*counter += 2;

			auto result = ssearch( (first + (k - 1) * m), ((first + k * m)), value, counter);
		
			if( result != (first + k * m) ){
				*counter += 1;
				return result;
			} else {
				*counter += 1;
				return last;
			}
		}
	}

	auto result = ssearch( (first + (k - 1) * m) + 1, last_backup, value, counter);

	if( result != (first + k * m) ){
		*counter += 1;
		return result;
	} else {
		*counter += 1;
		return last_backup;
	}
}
