#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
    
        Node(int no)
        {
            data=no;
            next=NULL;
        }
};
class SinglyLinkedList
{
    Node *head;
    public:
    LinkedList()
    {
        head=NULL;
    }
    void create(){
        int no;
        Node *newnode, *t;
        cout<<"\nEnter the numbers upto 999 : "  ;
        cin>>no;
        while(no!=999)
        {
            newnode=new Node(no);
            if (head==NULL)
                head=newnode;
            else
            {
                t=head;
                while(t->next!=NULL)
                    t=t->next;
                t->next=newnode;
            }
            cin>>no;
        }
    }
    void display(){
        Node *t=head;
        if (head==NULL)
            cout<<"\nList is Empty.....";
        while(t!=NULL)
        {
            cout<<t->data<<"->";
            t=t->next;
        }
    }
    void insertFirst(int no)
    {
        Node *newnode;
        newnode=new Node(no);
        newnode->next=head;
        head=newnode;
    }
    void insertLast(int no)
    {
        Node *newnode, *t;
        newnode=new Node(no);
        t=head;
        while(t->next!=NULL)
            t=t->next;
        t->next=newnode;
    }
    void deleteFirst()
    {
        Node *t;
        t=head;
        head=head->next;
        cout<<"\n\nFirst node from the list is deleting.....!!";
        cout<<"\n"<<t->data<<" is deleting....";
        delete t;
    }
    void deleteLast()
    {
        Node *t, *p;
        t=head;
        p=t;
        while(t->next!=NULL)
        {
            p=t;
            t=t->next;
        }
        p->next=NULL;
        cout<<"\n\nLast node of list is deleting....!";
        cout<<"\n"<<t->data<<" is deleting....";
        delete t;
    }
    void insertAfterGivenNode(int no, int n)
    {
        Node *newnode,*t;
        newnode=new Node(no);
        if (head==NULL)
        {
            cout<<"***************";
            head=newnode;
        }
        else
        {
            t=head;
            while(t->data!=n && t!=NULL)
            {
                t=t->next;
            }
            if (t==NULL)
                cout<<"\nGiven node not present in the list...";
            else
            {
                newnode->next=t->next;
                t->next=newnode;
            }
        }
    }

};
int main() {
    int no,n;
    cout << "SINGLY LINKED LIST......!";
    LinkedList list;
    list.create();
    cout<<"\nList is as follows : \n";
    list.display();

    cout<<"\n\nEnter the number to be inserted at the begining : ";
    cin>>no;
    list.insertFirst(no);

    cout<<"\nList is as follows : \n";
    list.display();

    cout<<"\n\nEnter the number to be inserted at the End : ";
    cin>>no;
    list.insertLast(no);

    cout<<"\nList is as follows : \n";
    list.display();
    list.deleteFirst();

    cout<<"\nList is as follows : \n";
    list.display();
    list.deleteLast();

    cout<<"List is as follows : \n";
    list.display();

    cout<<"\n\nEnter the number to be inserted : ";
    cin>>no;

    cout<<"\nEnter the number after which newnode to be inserted : ";
    cin>>n;
    list.insertAfterGivenNode(no,n);

    cout<<"List is as follows : \n";
    list.display();
    return 0;
}
