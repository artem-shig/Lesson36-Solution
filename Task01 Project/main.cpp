#include "util.h"
#include "algorithm.h"
#define SIZE 10

int main() {

	int array[SIZE]{};

	//cout << "Before array: " << convert(array, SIZE) << endl;

	init(array, SIZE, -10, 10);
	cout << "Array: " << convert(array, SIZE) << endl;

	int max = get_max(array, SIZE);
	cout << "Max value: " << max << endl;

	int min = get_min(array, SIZE);
	cout << "Min value: " << min << endl;

	double arithmeticalAvg = calc_arithmetical_avg(array, SIZE);
	cout << "Arithmetical average: " << arithmeticalAvg << endl;

	double geometricalAvg = calc_geometrical_avg(array, SIZE);
	cout << "Geometrical average: " << geometricalAvg << endl;


	cin.ignore();
	return 0;
}