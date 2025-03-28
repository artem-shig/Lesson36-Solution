bool vector_uniqueness_check(int* arr, int size) {

	int count = 0;

	// 1 2 3 4 5 6
		
	for(int dig = 0; dig < size - 1; dig++){

		for (int i = dig + 1; i < size; i++)
		{
			if (arr[dig] == arr[i]) {
				return false;
			}
		}

	}

	return true;
}
/* логика странная, я знаю. смысл заключается в том, что, если посмотреть по отладке,
   то arr[dig] будет равно arr[i], столько раз, сколько мы указали в size. если же
   какое-то число из массива будет повторяться, то count уже будет больше size.

   иного выхода я, увы, не вижу.
 */
