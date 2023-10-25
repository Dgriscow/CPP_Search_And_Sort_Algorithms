#include "Search.h"
#include "Sorting.h"
#include <iostream>
using namespace std;

//Global print array function
void displayArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << i << ": " << *(array + i) << endl;
	}
};

int main() {
	Search s;
	Sorting sort;
	const int ASIZE = 9;
	int* demoArray = new int[ASIZE];
	//int demoArray[ASIZE] = {6,2,1,100,5,12,7,8,6};
	*(demoArray + 0) = 12;
	*(demoArray + 1) = 100;
	*(demoArray + 2) = 267;
	*(demoArray + 3) = 1;
	*(demoArray + 4) = 76;
	*(demoArray + 5) = -212;
	*(demoArray + 6) = 36;
	*(demoArray + 7) = 14;
	*(demoArray + 8) = 55;


	//int g = 0;

	cout << "Unsorted\n";
	displayArray(demoArray, ASIZE);

	//cout << "Enter a num to find: ";
	//cin >> g;


	//int n = s.linear_Search_Int(g, demoArray, ASIZE);
	
	//min and max are the highestID in the list and the startingID's of the list 

	//int n = s.binary_Search_Int(g, demoArray, 0, 9);
	
	//Sort the Demo Array
	sort.selection_sort_Int(demoArray, ASIZE);


	//before running, print out the whole loop


	cout << "Sorted\n";
	displayArray(demoArray, ASIZE);


	/*
	if (n != -1) {
		cout << "Index of " << demoArray[n] << " Found at : " << n << endl;
	}
	else {
		cout << g << " Not Found In The Array\n";
	}
	*/


	return 1;



}