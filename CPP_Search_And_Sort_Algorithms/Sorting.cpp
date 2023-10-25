#include "Sorting.h"
void Sorting::swap_Ints(int &swapThis, int &forThis)
{
	int temp = -1;

	temp = swapThis;

	swapThis = forThis;

	forThis = temp;
}
void Sorting::selection_sort_Int(int* unsorted, int size)
{
	//outer check: first it decides on a number to check, 
	//then loops through the whole array again in the second loop

	int min = -1;

	for (int toCheck = 0; toCheck < size - 1; toCheck++) {

		min = toCheck;

		for (int check = toCheck + 1; check < size; check++) {

			/*check if the check value is less than the minimum,
			if it is set min to that value 
			*/
			
			if ( *(unsorted + check) < *(unsorted + min) ) {

				min = check;

			}







		}

		//once the inner loop is done with its check, 
		//Check IF minimum is NOT the toCheck, if it isint then swap
		if (min != toCheck) {
			//swap the checked values 
			
			swap_Ints( *(unsorted + min) , *(unsorted + toCheck) );
		}

	}
}