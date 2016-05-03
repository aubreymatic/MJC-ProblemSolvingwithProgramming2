/*
	Program solution for Program 12 in Chapter 18 of the textbook.
	The problem is several modifications of the quicksort algorithm that include
	1. Make the pivot of quicksort the median point of the list.
	2. Change how quicksort sorts when sublists are less than 20 elements (use insertion sort).
	3. Combine the two changes into the quicksort algorithm

	Please note that quickSort simple

	After implementing these changes, test the timing of the quicksort algorithm and the three modified
	versions of quicksort on an array of 10000 elements. Using clock_t objects to keep track of the
	time it takes to sort the list with all for versions of quicksort.
*/

#include <iostream> // standard io stream library
#include <ctime> // library that includes class clock_t
#include "searchSortAlgorithms.h" // search and sort algorithms from Malik
/* this version of sort algorithms also includes several additional algorithms
quickSortMedianPivot(intlist, SIZE)
This version of quicksort makes the pivot the median position of list.

quickSortWithInsertionSort(intlist, SIZE)
This version of quicksort changes the sorting the method to insertion sort when the list size
reachs 20 elements or less.

quickSortMedianWithInsertionSort(intlist, SIZE)
This version of quicksort changes makes the pivot the median position of list and 
changes the sorting the method to insertion sort when the list size reachs 20 elements or less.

*/
  
using namespace std; // scope resolution for std
 
const int SIZE = 30000; // size of array

// function fill is a helper function to fill an array with data
// Pass an array of type int and its size to the array
void fill(int list[], int size);

// copy the contents from one array to another array
// copies the contents of list into temp
void copyList(int list[], int temp[], int length);

int main()
{
	int intlist[SIZE]; // the original array to be used for sorting using quicksort
	int temp[SIZE];    // temporary array to hold original order of the items in intlist
	
	clock_t startTime1, endTime1; // start and end time when testing quickSort
	clock_t startTime2, endTime2; // start and end time when testing quickSortMedianPivot
	clock_t startTime3, endTime3; // start and end time when testing quickSortWithInsertionSort
	clock_t startTime4, endTime4; // start and end time when testing quickSortMedianWithInsertionSort
	
	fill(intlist, SIZE); // fill intlist with random integers

	copyList(intlist, temp, SIZE); // copy intlist into temp, retain original order of intlist in temp


	//Quick sort: The pivot is the middle element
	startTime1 = clock(); // time of CPU before calling quickSort
	quickSort(intlist, SIZE); // sort intlist with quickSort
	endTime1 = clock(); // time of CPU after sorting intlist with quickSort

	//Quick sort: The pivot is the median element
	copyList(temp, intlist, SIZE); // restore intlist to original order
	startTime2 = clock(); // time of CPU before calling quickSortMedianPivot
	quickSortMedianPivot(intlist, SIZE); // sort intlist with quickSortMedianPivot
	endTime2 = clock(); // time of CPU after calling quickSortMedianPivot

	//Quick sort with insertion sort 
	//The pivot is the middle element
	copyList(temp, intlist, SIZE);// restore intlist to original order
	startTime3 = clock(); // time of CPU before calling quickSortWithInsertionSort
	quickSortWithInsertionSort(intlist, SIZE); // sort intlist with quickSortWithInsertionSort		 
	endTime3 = clock(); // time of CPU after calling quickSortWithInsertionSort

	//Quick sort with insertion sort 
	//The pivot is the median element
	copyList(temp, intlist, SIZE);// restore intlist to original order
	startTime4 = clock(); // time of CPU before calling quickSortMedianWithInsertionSort
	quickSortMedianWithInsertionSort(intlist, SIZE); // sort intlist with quickSortMedianWithInsertionSort		 
	endTime4 = clock(); // time of CPU after calling quickSortMedianWithInsertionSort

	// subtract startTimeN from endTimeN to calculate total time to sort
	// (N is 1, 2, 3, or 4)

	cout << "Quick sort time, with pivot middle element: "
		 << endTime1 - startTime1 << endl;
	cout << "Quick sort time, with pivot median element: "
		 << endTime2 - startTime2 << endl;
	cout << "Quick sort and insertion sort time, with pivot "
		 << "middle element: " << endTime3 - startTime3 << endl;
	cout << "Quick sort and insertion sort time, with pivot "
		 << "median element: " << endTime4 - startTime4 << endl;
	
	return 0;
}

void fill(int list[], int size)
{
	// this is an example of how to create a pseudo random number
	// this example provides a view into the seed of a random number generator
	// because of the memory size of int, the algorithm uses this fact to 
	// generate large positive and negative numbers that are of int size.

	int seed = 47;

	int multiplier = 2743;

	int addOn = 5923;

    int index = 0;

	while (index < size)
	{
	   list[index++] = seed;
	   seed = int(seed * multiplier + addOn); // ensure result is of size int
	}

	cout << endl;
}

void copyList(int list[], int temp[], int length)
{
    for (int i = 0; i < length; i++) // simple loop to copy list into temp
        temp[i] = list[i];
}