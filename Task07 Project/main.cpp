#include "util.h"
#include "vector_uniqueness_check.h"
#define BUF 20

int main() {

	cout << "The Unique Vector.\n";

	int arr[BUF];

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	init(arr, size, -10, 10);

	cout << "Array: " << convert(arr, size) << endl;

	string msg = vector_uniqueness_check(arr, size)
		? "The vector is unique." : "The vector is not unique.";

	cout << "Result: " << msg << endl;

	return 0;
}