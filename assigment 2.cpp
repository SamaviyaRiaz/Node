using namespace std;
#include<iostream>
class Node
{
	int data;
	Node *next;
	public:
		Node(int data,Node* next=NULL){         //it's called default parameters
			setData(data);						// Dry=Don't repeate yourself
			setNext(next);
		}
		void setData(int data){
			this->data=data;
		}
		void setNext(Node* next){
			this->next=next;
		}
		int getData()
		{
			return this->data;
		}
		Node* getNext(){
			return this->next;
		}
};
		int getLength(Node *head){
			int t=0;
			Node *temp = head;
			while(temp != NULL)
			{
				temp=temp->getNext();
				t++;
			}
			return t;
		}
		Node* getNthElement(Node* head,int index=0)
		{
			Node *temp=head;
			if(index!=0){
				for(int i=0;i<(index-1);i++){
					temp=temp->getNext();
				}return temp;
			}return head;
		}
		void printElement(Node *head){
			Node *temp=head;
			while(temp!=NULL){
				cout<<temp->getData();
				temp=temp->getNext();
			}
		}
		Node* getFirstElement(Node* head){
			return head;
		}
		Node* getLastElement(Node* head){
			Node* temp=head;
			while(temp != NULL)
			temp=temp->getNext();
			return temp;
		}

int main()
{
	Node head(2);
	Node *h=&head;    //*h points at the head
	int n=20;
	while(n--){
		Node *temp=new Node(n);
		h->setNext(temp);
		h=h->getNext();
	}	
	Node* n1=getFirstElement(& head);
	Node* n2=getLastElement(& head);
	Node* n3=getNthElement(& head,4);
	int len=getLength(& head);

	 cout<<n1->getData()<<endl;
	 cout<<n2->getData()<<endl;
	 cout<<n3->getData()<<endl;
	 cout<<len;
	 printElement(& head);
	 delete h;
	
	return 0;
}
