bool check_array_order_in_ascending_order(int* arr, int size) { //�� �����������

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}

	return true;
}

bool check_array_order_in_descending_order(int* arr, int size) { //�� ��������
	
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] < arr[i + 1]) {
			return false;
		}
	}

	return true;
}





