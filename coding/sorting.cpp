#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int n=10;
	int a[n];
	int i,j,temp;
	srand(time(NULL));
	for(i=0;i<n;i++) {
		a[i]=rand()%100;
	}
	cout << "Array awal:{";
	for(i=0;i<n;i++) {
		cout << a[i] << ", ";
	}
	cout << "}" << endl << endl;
	for(i=0;i<n;i++) {
		temp=0;
		for(j=0;j<n-1;j++) {
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout << "Sorted array:{";
	for(i=0;i<n;i++) {
		cout << a[i] << ", ";
	}
	cout << "}" << endl;
	return 0;
}
