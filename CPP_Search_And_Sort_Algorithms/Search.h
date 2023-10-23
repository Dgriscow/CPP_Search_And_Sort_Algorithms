#pragma once

class Search {

private:

	int findMidPoint(int min, int max);


public:
	
	int linear_Search_Int(int key, int* toSearch, int arraySize);

	int binary_Search_Int(int key, int * toSearch, int min,int max);







};