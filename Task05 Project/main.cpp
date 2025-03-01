#include "util.h"
#include "checking_array_ordering.h"
#define BUF 5

int main() {

	cout << "The Ordered Vector.\n";

	int arr[BUF];

	int size;
	cout << "Enter size of array: ";
	cin >> size;
	
	init(arr, size, -5, 5);

	cout << "Array: " << convert(arr, size) << endl;

	bool msgAscend = check_array_order_in_ascending_order(arr, size);
	bool msgDescend = check_array_order_in_descending_order(arr, size);

	string msg = msgAscend || msgDescend ? "is present." : "is absent.";

	cout << "Array ordering " << msg << endl;

	return 0;
}