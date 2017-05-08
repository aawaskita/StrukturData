#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print (int temp_ar[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << temp_ar[i] << " ";
	}
	cout << endl;
}

void selection_sort (int ar[], int size) {
	int min_ele_loc;
	for (int i = 0; i < 9; ++i) {
		min_ele_loc = i;
		for (int j = i + 1; j < 10; ++j) {
			if (ar[j] < ar[min_ele_loc]) {
				min_ele_loc = j;
			}
		}
		swap (ar[i], ar[min_ele_loc]);
	}	
}
 
int main () {
	int i;
	int ar[10];
	srand(time(NULL));
	for(i=0;i<10;i++) {
		ar[i]=rand()%100;
	}
	cout << "Array awal : ";
	print (ar, 10);
	selection_sort (ar, 10);
	cout << "Array akhir : ";
	print (ar, 10);
	return 0;
}
