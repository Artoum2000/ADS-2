int countPairs1(int* arr, int len, int value)
{	int k = 0;
	for (int i = 0; i < len-1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] + arr[j] == value)
				k++; 
		}
	}
	return k;

}

int countPairs2(int* arr, int len, int value) {
	int k = 0;
	for (int i = 0; i < len - 1; i++) {
		for (int j = len-1; j > 0; j--) {
			if (arr[i] + arr[j] == value && j>i) {
					k++;
				}
			}
		}
	return k;
}

int countPairs3(int* arr, int len, int value) {
	int k = 0;
		int l = 0;
		int r = len - 1;
		while (l < r) {
			int sum = arr[l] + arr[r];
			if (sum == value) { k++; r--;  }
			if (sum < value) { l++; }
			else if (sum > value) { r--; }
	}
	return k;
}
