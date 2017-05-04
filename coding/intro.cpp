#include <iostream>
using namespace std;

typedef struct data {
	int nilai;
	struct data *pointer;
}DATA;

int main() {
	int a;
	a=10;
	int *p;
	p=&a;
	DATA x;
	x.nilai=7;
	x.pointer=NULL;
	
	cout << "Nilai variabel a adalah " << a << " dan berlokasi di alamat " << &a << endl;
	cout << "Nilai variabel *p adalah " << *p << " dan berlokasi di alamat " << p << endl;
	cout << "x.nilai=" << x.nilai << ", x.pointer merujuk ke alamat " << x.pointer << endl;
	return 0;
}
