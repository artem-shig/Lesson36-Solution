#include "util.h"
#include "checking_array_values.h"
#define BUF 20

int main() {

	cout << "The Quantity.\n";

	int arr[BUF];

	int size;
	cout << "\nEnter size of array: ";
	cin >> size;

	init(arr, size, -20, 20);

	cout << " Array: " << convert(arr, size) << endl;

	cout << " Number of positive values in an array: "
		<< find_positive_value(arr, size) << endl;

	cout << " Number of negative values in an array: "
		<< find_negative_value(arr, size) << endl;

	cout << " Number of zeros in an array: "
		<< find_zeros(arr, size) << endl;

	return 0;
}