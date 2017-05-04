#include <iostream>
#include <cstdlib>
#include <ctime>
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
		LinkedList();
		void insertAwal();
		void insertAkhir();
		void display();
		void removeAwal();
		void removeAkhir();
};

LinkedList::LinkedList() {
	awal=NULL;
	akhir=NULL;
	int i;
	for(i=0;i<10;i++) {
		DATA *temp;
		if(i==0) {
			temp=new DATA;
			temp->nilai=rand()%100;
			temp->pointer=NULL;
			awal=temp;
			akhir=temp;
		}
		else {
			temp=new DATA;
			temp->nilai=rand()%100;
			temp->pointer=NULL;
			akhir->pointer=temp;
			akhir=temp;
		}
	}
}

void LinkedList::display() {
	DATA *temp=new DATA;
	temp=awal;
	while(temp!=NULL) {
		cout << temp->nilai;
		temp=temp->pointer;
		if(temp!=NULL) {
			cout << ", ";
		}		
		else {
			cout << endl;
			delete temp;
		}
	}
}

void LinkedList::insertAwal() {
	DATA *temp=new DATA;
	temp->nilai=rand()%100;
	temp->pointer=awal;
	awal=temp;
}

void LinkedList::insertAkhir() {
	DATA *temp=new DATA;
	temp->nilai=rand()%100;
	temp->pointer=NULL;
	akhir->pointer=temp;
	akhir=temp;
}

void LinkedList::removeAwal() {
	if(awal==NULL && akhir==NULL) {
		cout << "Linked list kosong\n";
	}
	else {
		DATA *temp=new DATA;
		temp=awal->pointer;
		awal=temp;
	}
}

void LinkedList::removeAkhir() {
	if(awal==NULL && akhir==NULL) {
		cout << "Linked list kosong\n";
	}
	else {
		DATA *temp=new DATA;
		temp=awal;
		while(temp->pointer!=akhir) {
			temp=temp->pointer;
		}
		temp->pointer=NULL;
		akhir=temp;
	}
}

int main() {
	LinkedList list;
	srand (time(NULL));
	list.display();
	list.insertAwal();
	list.display();
	list.insertAkhir();
	list.display();
	list.removeAwal();
	list.display();
	list.removeAkhir();
	list.display();
	return 0;
}
