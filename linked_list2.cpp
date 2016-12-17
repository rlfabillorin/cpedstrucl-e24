#include <iostream>
#include<conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
        
    }
    
    void display(){
    	Node *temp;
    	temp=head;
    	while(head!=NULL){
    		Node *n=head;
    		Node *x=temp;
    		int ret = n->x;
    		head=head->next;
    		cout<<ret<<" ";
		}
	}

private:
    Node *head; 
};
void menu()
{
	char choice;
	cout<<"1. Insert into linked list"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"4. Display"<<endl;
}

int main() {
    LinkedList list;
    int val, choice;
    	while(1){
    		system("cls");
			menu();
    		cout<<"\nChoice: ";
    		cin>>choice;
    	switch(choice){
    		case 1:{
    			cout<<"Insert: ";
    			cin>>val;
    			list.addValue(val);
				break;
			}
			
			case 2:{
				cout<<list.popValue();
				break;
			}
			
			case 3:
				exit(1);
				default: break;

			case 4:{
				list.display();
				break;
			}
		}
		getch();
	}
	return 1;
}
