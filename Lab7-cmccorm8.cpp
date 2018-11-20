//Chance McCormick 
//Lab7.cpp
//COSC 2030	
//11/12/2018

#include "Lab7-cmccorm8.h"
#include "winTimer.h"
#include "VectorDriver.h"
#include "RandomUtilities.h"

using std::cin;
using std::cout;
using std::endl;

vector<double> getNums(size_t listSize, double minNum, double maxNum)
{
	vector<double> theList;
	for (size_t i = 0; i < listSize; ++i)
	{
		theList.push_back(randReal(minNum, maxNum));
	}

	//sort(begin(theList), end(theList));

	return theList;
}

int main()
{
	
	vector<double> numbers;
	while (true)
	{
		cout << "Enter size for numbers: ";
		int n = 0;
		cin >> n;
		if (n <= 0)
			break;
		

		// Construct a sorted list of numbers
		Timer get;
		get.start();
		numbers = getNums(n, -n, n);
		get.stop();
		cout << "Constructed in " << get() << " seconds"
			<< endl;
		break;
	}
	/*cout << " \nfor the STL::sort" << endl;
	Timer Sort;
	Sort.start();
	std::sort(numbers.begin(), numbers.end());
	Sort.stop();
	cout << "Constructed in " << Sort() << " seconds" << endl;*/

	cout << " \nfor the Quick sort" << endl;
	Timer Quick;
	Quick.start();
	quicksort(numbers.begin(), numbers.end());
	Quick.stop();
	cout << "Constructed in " << Quick() << " seconds" << endl;

	/*cout << " \nfor the bubble sort" << endl;
	Timer Bubble;
	Bubble.start();
	bubble_sort(numbers.begin(), numbers.end());
	Bubble.stop();
	cout << "Constructed in " << Bubble() << " seconds" << endl;
	
	cout << " \nfor the insertion sort" << endl;
	Timer Insertion;
	Insertion.start();
	insertion_sort(numbers.begin(), numbers.end()); 
	Insertion.stop();
	cout << "Constructed in " << Insertion() << " seconds" << endl;*/

	/*cout << " \nfor the Selection sort" << endl;
	Timer Selection;
	Selection.start();
	selection_sort(numbers.begin(), numbers.end());
	Selection.stop();
	cout << "Constructed in " << Selection() << " seconds" << endl;

	cout << " \nfor the Merge sort" << endl;
	Timer Merge;
	Merge.start();
	selection_sort(numbers.begin(), numbers.end());
	Merge.stop();
	cout << "Constructed in " << Merge() << " seconds" << endl;*/


	
	system("pause");
	return 0;
}