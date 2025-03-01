

int find_positive_value(int* arr, int size) {

	int posValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) {
			posValue++;
		}
	}

	return posValue;
}

int find_negative_value(int* arr, int size) {

	int negValue = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			negValue++;
		}
	}

	return negValue;
}

int find_zeros(int* arr, int size) {

	int zeros = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			zeros++;
		}
	}

	return zeros;
}