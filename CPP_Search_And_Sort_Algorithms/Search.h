#pragma once

class Search {

private:

	int findMidPoint(int min, int max);


public:

	/*
	Searching Vs Sorting Algorithms Resource Intensities 

	Searching Algorithms are less CPU intensive, just searching for a key

	Sorting Algorithms are more intensive, it has to do both comparing keys AND swapping values

	Swapping Values are more Intense 

	*/
	
	int linear_Search_Int(int key, int* toSearch, int arraySize);

	int binary_Search_Int(int key, int *toSearch, int min,int max);

	







};