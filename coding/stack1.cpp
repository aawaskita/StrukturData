#include <iostream>
using namespace std;

typedef struct data {
	int nilai;
	struct data *pointer;
}DATA;

void push(DATA *top) {
	if(top==NULL) {
		cout << "Stack masih kosong\n";
		DATA *temp=new DATA;
		cout << "Masukkan nilai ke stack: \n";
		cin >> temp->nilai;
		temp->pointer=NULL;
		top=temp;
	}
	else {
		DATA *temp=new DATA;
		cout << "Masukkan nilai ke stack: \n";
		cin >> temp->nilai;
		temp->pointer=top;
		top=temp;
	}
}

void display(DATA *top) {
	if (top==NULL) {
		cout << "Stack masih kosong\n";
	}
	else {
		cout << "Stack ada isinya\n";
		DATA *temp=new DATA;
		int i=1;
		temp=top;
		while(temp!=NULL) {
			cout << i <<". " << temp->nilai << "\n";
			temp=temp->pointer;
			i=i+1;
		}
	}
}

int main() {
	DATA *top=new DATA;
	top=NULL;
	push(top);

	//display(top);
	return 0;
}
