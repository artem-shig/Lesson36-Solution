


void reverse(int* array, int length) {

	int n = length / 2;

	for (int i = 0; i < length; i++)
	{
		int t = array[i];
		array[length - 1 - i] = t;
	}
	


}