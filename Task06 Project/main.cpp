#include "util.h"
#include "check_array_mirror.h"
#define BUF 20

int main() {

	cout << "The Mirror Vector.\n";

	int arr[BUF]{1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
	int size = 10;

	cout << "Array: " << convert(arr, size) << endl;

	string msg = check_array_mirror(arr, size) ? "Yes." : "No.";

	cout << "Is the array mirrored? " << msg << endl;

	return 0;
}