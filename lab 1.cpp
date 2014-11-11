#include<iostream>
using namespace std;
class Node
{

    private:
	int num;
	Node*Next;
	friend class Linklist;

};
class Linklist
{
    public:
    Node*Head;
	Linklist();
	void Addnewnode(int num);
	void findNode(int find);
	void addhead(int num);
	void addTail(int num);
	void deletesaerch(int search);
	void saerchnode(int search);
	//void deleteheadnode();
	//void deletetailnode();
	void Print();
};
Linklist::Linklist()
{
	this->Head = NULL;
}
void Linklist::Addnewnode(int num)
{
	Node*N = new Node;
	N->num = num;
	N->Next = Head;
	Head = N;
}
void Linklist::Print()
{
	Node*temp = this->Head;
	while (temp != NULL)
	{
		cout << temp->num<<" ";
		temp = temp->Next;
	}
}
void Linklist::findNode(int find)
{
	Node*temp;
	temp = Head;
	while (temp != NULL)
	{
		if (temp->num = find)
		{
			cout << find<<" ";
			return;
		}
		temp = temp->Next;
	}
	cout << "number not found";
}void Linklist::addhead(int num)
{
	Node*N = new Node;
	N->num = num;
	N->Next = Head;
	Head = N;
}
void Linklist::addTail(int num)
{
	Node*N = new Node;
	N->num = num;
	Node*temp = Head;
	while (temp->Next != NULL)
	{
		temp = temp->Next;
	}
	temp->Next = N;
	N->Next = NULL;

}
////void Linklist::deleteheadnode()
////{
////	Node*temp = Head;
////	if (Head != NULL)
////	{
////		Head = temp->Next;
////		delete temp;
////	}
////}
////void Linklist::deletetailnode()
////{
////	Node*temp1 = Head;
////	Node*temp2 = Head;
////	
////	
////	if (Head != NULL)
////	{
////		while (temp1->Next != NULL)
////		{
////			temp2 = temp1;
////			temp1 = temp1->Next;
////		}
////		temp2->Next = temp1->Next;
////		delete temp2;
////	}
////}
////
void Linklist::deletesaerch(int search)
{
	Node* temp1 = Head;
	Node* temp2 = Head;
	while (temp1 != NULL)
	{
		
		if (temp1->num == search)
		{
			//cout << temp1->num;

			 temp2->Next = temp1->Next;
			 delete temp1;
			 break;
		}
		temp2 = temp1;
		temp1 = temp1->Next;

	}

}
void Linklist::saerchnode(int search)
{
	Node*temp=Head;
	while (temp != NULL)
	{
		if (temp->num == search)
		{
			cout << "found";
			break;
	

		}
		temp = temp->Next;
	}

	
}
void main()
{
	Linklist L1;
	L1.Addnewnode(2);
	L1.Addnewnode(9);
	L1.Addnewnode(4);
 	//L1.deletesaerch(9);
	L1.Print();
	
	L1.saerchnode(2);
	
  

	fflush(stdin);
	getchar();
}