#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int a[10];
	int i;
	srand (time(NULL));
	for (i=0;i<10;i++){
		a[i]=rand()%100;
	}
	for (i=0;i<10;i++){
		cout << "a[" << i << "]=" << a[i];
		if(i<10-1) {
			cout << ", ";
		}
		else {
			cout << endl;
		}
	}
	return 0;
}
