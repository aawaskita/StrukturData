#include <iostream>
using namespace std;

int byValue(int x) {
	x=x*2;
	return x;
}

int byReference1(int &x) {
	x=x*2;
	return x;
}

int byReference2(int *x) {
	*x=*x*2;
	return *x;
}

void tukar1(int a, int b) {
	cout << "Nilai awal di fungsi tukar1: a=" << a << ", b=" << b << endl;
	int i;
	i=a;
	a=b;
	b=i;
	cout << "Nilai akhir di fungsi tukar1: a=" << a << ", b=" << b << endl;
}

void tukar2(int &a, int &b) {
cout << "Nilai awal di fungsi tukar2: a=" << a << ", b=" << b << endl;
	int i;
	i=a;
	a=b;
	b=i;
	cout << "Nilai akhir di fungsi tukar2: a=" << a << ", b=" << b << endl;
}

int main() {
	int a,b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	tukar1(a,b);
	cout << "Nilai di fungsi main: a=" << a << ", b=" << b << endl;
	tukar2(a,b);
	cout << "Nilai di fungsi main: a=" << a << ", b=" << b << endl;

	int *p1,*p2;
	b=byValue(a);
	cout << "(a,b)=" << "(" << a << "," << b << ")" << endl;
	b=byReference1(a);
	cout << "(a,b)=" << "(" << a << "," << b << ")" << endl;
	p1=&a;
	b=byReference2(p1);
	cout << "(a,b)=" << "(" << a << "," << b << ")" << endl;
	cout << "*p1=" << *p1 << endl;
	p2=p1;
	cout << "*p2=" << *p2 << endl;
	 
	return 0;
}
