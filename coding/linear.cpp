#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct data {
	int nilai;
	struct data *pointer;
}DATA;

class LinkedList {
	private:
		DATA *awal;
		DATA *akhir;
	public:
		LinkedList(int x);
		int cari(int x);
};

LinkedList::LinkedList(int x) {
	awal=NULL;
	akhir=NULL;
	int i,y;
	cout << "Data: [";
	for(i=0;i<x;i++) {
		DATA *temp;
		if(i==0) {
			temp=new DATA;
			y=rand()%100;
			temp->nilai=y;
			temp->pointer=NULL;
			awal=temp;
			akhir=temp;
			cout << y << ", ";
		}
		else {
			temp=new DATA;
			y=rand()%100;
			temp->nilai=y;
			temp->pointer=NULL;
			akhir->pointer=temp;
			akhir=temp;
			if(i==x-1) {
				cout << y << "]" << endl;
			}
			else {
				cout << y << ", ";
			}
		}
	}
}

int LinkedList::cari(int x) {
	DATA *temp=new DATA;
	temp=awal;
	int i=0;
	while(temp->pointer!=akhir) {
		if(temp->nilai==x) {
			return i;
			break;
		}
		else {
			i=i+1;
			temp=temp->pointer;
		}
	}
	return -1;
}

int main() {
	LinkedList list(10);
	int x=list.cari(15);
	if(x==-1) {
		cout << "Data tidak ditemukan\n";
	}
	else {
		cout << "Data ditemukan sebagai elemen ke-" << x+1 << ".\n";
	}
	return 0;
}
