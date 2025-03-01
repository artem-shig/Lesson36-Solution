#include "util.h"
#define BUF 20

int main() {

	cout << "The Mirror Vector.\n";

	int arr[BUF];

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	init(arr, size, -10, 10);



	return 0;
}