#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
			while (arr[j] > pivot)
				j--;

			if (i <= j) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
				i++;
				j--;
		}
	};

      /* recursion */
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}

void print (int temp_ar[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << temp_ar[i] << " ";
	}
	cout << endl;
}

int main() {
	int ar[10];
	int i;
	srand(time(NULL));
	for(i=0;i<10;i++) {
		ar[i]=rand()%100;
	}
	cout << "Array awal : ";
	print (ar, 10);
	quickSort (ar, 0,9);
	cout << "Array akhir : ";
	print (ar, 10);
}
