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
/* логика странная, я знаю. смысл заключается в том, что, если посмотреть по отладке,
   то arr[dig] будет равно arr[i], столько раз, сколько мы указали в size. если же
   какое-то число из массива будет повторяться, то count уже будет больше size.

   иного выхода я, увы, не вижу.
 */