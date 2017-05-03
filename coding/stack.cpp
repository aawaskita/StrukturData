#include <iostream>
#include<cstdlib>
using namespace std;

struct data {
	int nilai;
	struct data *pointer;
};

class Stack {
	private:
		data *top;
		
	public:
		Stack();
		void push();
		void pop();
		void display();
};

Stack::Stack() {
	top=NULL;
}

void Stack::push(){
    if(top == NULL){
		int i;
        cout << "Stack masih kosong\n";
        data *temp=new data;
        cout << "Masukkan nilai ke stack:";
        cin >> i;
        temp->nilai=i;
        temp->pointer=NULL;
        top=temp;
    }    
    else{
        data *temp=new data;
        cout << "Masukkan nilai ke stack:";
        cin >> temp->nilai;
        temp->pointer=top;
        top=temp;
    }
}

void Stack::pop() {
	if(top==NULL) {
		cout << "Stack masih kosong\n";
	}
	else {
		data *temp=new data;
		temp=top;
		top=temp->pointer;
		cout << temp->nilai << " keluar\n";
		delete temp;
	}
}

void Stack::display() {
	if (top==NULL) {
		cout << "Stack masih kosong\n";
	}
	else {
		cout << "Stack ada isinya\n";
		data *temp=new data;
		int i=1;
		temp=top;
		while(temp!=NULL) {
			cout << temp->nilai << "\n";
			temp=temp->pointer;
			i=i+1;
		}
	}
}

int main() {
	Stack stack;
	int choice;
    while(true){
        cout<<"\n1. Push\n2. Pop\n3. Display\n4. Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                stack.push();
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"\nInvalid Input. Try again! \n";
                break;
        }
    }
	return 0;
}
/*
int main ()
{
  stack<int> mystack;
  for (int i=0; i<5; ++i) mystack.push(i);
  cout << "Popping out elements...";
  while (!mystack.empty())
  {
     cout << ' ' << mystack.top();
     mystack.pop();
  }
  cout << '\n';
  return 0;
}
*/
