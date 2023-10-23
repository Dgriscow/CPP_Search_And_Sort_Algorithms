#include "Search.h"
#include <iostream>
using namespace std;



int main() {
	Search s;
	const int ASIZE = 9;
	int demoArray[ASIZE] = {1,2,3,4,5,6,7,8,9};

	int g = 0;
	cout << "Enter a num to find: ";
	cin >> g;


	//int n = s.linear_Search_Int(g, demoArray, ASIZE);
	
	//min and max are the highestID in the list and the startingID's of the list 

	int n = s.binary_Search_Int(g, demoArray, 0, 9);
	
	//before running, print out the whole loop

	for (int i = 0; i < ASIZE; i++) {
		cout << i << ": " << demoArray[i] << endl;
	}

	if (n != -1) {
		cout << "Index of " << demoArray[n] << " Found at : " << n << endl;
	}
	else {
		cout << g << " Not Found In The Array\n";
	}



	return 1;



}