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
	int choice = 0;
	do {
		cout << "what alg Do you want to do? \n1:selection sort\n2:Bubble Sort\n 3:binary search\n 4 linear search\n 9 quit\n:";
		
		cin >> choice;

		if (choice == 1) {
			sort.selection_sort_Int(demoArray, ASIZE);
		}
		else if (choice == 2) {
			sort.bubble_sort_Int(demoArray, ASIZE);
		}
		else if (choice == 3) {
			int u_search = 0;
			cout << "what do you want to search by?";
			cin >> u_search;
			int x = s.binary_Search_Int(u_search, demoArray, 0, ASIZE);
			cout << "Found The Key: " << x << endl;
		}
		else if (choice == 4) {
			int u_search2 = 0;

			cout << "what do you want to search to?";

			cin >> u_search2;

			int y = s.linear_Search_Int(u_search2, demoArray, ASIZE);
			cout << "Found The Key: " << y << endl;
		}
		


		displayArray(demoArray, ASIZE);


	} while (choice != 9);
	



	//before running, print out the whole loop




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