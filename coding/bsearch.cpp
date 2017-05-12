#include <iostream>
#include <cstdlib>
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
	int i, arr[10], search, first, last, middle;
	for (i=0; i<10; i++) {
		arr[i]=rand()%100;
	}
	print(arr, 10);
	quickSort (arr, 0, 9);
	print(arr,10);
	cout<<"Nilai yang dicari :";
	cin>>search;
	first = 0;
	last = 9;
	middle = (first+last)/2;
	while (first <= last) {
		if(arr[middle] < search) {
			first = middle + 1;
		}
		else if(arr[middle] == search) {
			cout<<search<<" found at location "<<middle+1<<"\n";
			break;
		}
		else {
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last) {
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
	return 0;
}
