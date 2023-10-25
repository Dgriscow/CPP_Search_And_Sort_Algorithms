#include "Search.h"
#include <iostream>
using namespace std;



int Search::findMidPoint(int min, int max)
{
	return (min + max) / 2;
}


int Search::linear_Search_Int(int key, int *toSearch, int arraySize)
{
	//Length Given
	for (int i = 0; i < arraySize; i++) {
		
		if ( *(toSearch + i) == key) {
			return i;
		}

	}

	return -1;
}

int Search::binary_Search_Int(int key, int* toSearch, int min, int max)
{
	if (max < min) {
		//Could not find the Value
		return -1;
	}
	else {

		//get midPoint 
		int midPoint = findMidPoint(min, max);

		cout << midPoint << endl;
		cout << midPoint - 1 << "," << midPoint << "," << midPoint + 1 << endl;
		//preform the binary check:

		//if midpoint is smaller than the key, remove the smaller half 
		
		if ( *(toSearch + midPoint) < key) {
			//recall the search with a new min, but the same max
			binary_Search_Int(key, toSearch, midPoint + 1, max);
		}
		else if ( *(toSearch + midPoint) > key){
			//if the midpoint is larger than the key, recursively recall,
			//This time the minimum is the name but the max is the midpoint + 1
			binary_Search_Int(key, toSearch, min, midPoint - 1);

		}
		else
		{
			return midPoint;
		}




		}




}

