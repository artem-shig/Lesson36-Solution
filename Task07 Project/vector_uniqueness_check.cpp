bool vector_uniqueness_check(int* arr, int size) {

	int count = 0;

	for(int dig = 0; dig < size; dig++){

		for (int i = 1; i < size; i++)
		{
			if (arr[dig] == arr[i]) {
				count++;
			}
		}

	}

	return count <= size;
}
/* ������ ��������, � ����. ����� ����������� � ���, ���, ���� ���������� �� �������,
   �� arr[dig] ����� ����� arr[i], ������� ���, ������� �� ������� � size. ���� ��
   �����-�� ����� �� ������� ����� �����������, �� count ��� ����� ������ size.

   ����� ������ �, ���, �� ����.
 */