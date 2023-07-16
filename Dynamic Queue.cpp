#include <iostream>
using namespace std;

struct node
{
      int data;
      node *next;
};

class queue
{
      node *rear,*front;
public:
      queue()
      { rear=NULL;front=NULL;}
      void qinsert();
      void qdelete();
      void qdisplay();
      ~queue();
};

void queue::qinsert()
{
      node *temp;
      temp=new node;
      cout<<"Add the element: ";
      cin>>temp->data;
      temp->next=NULL;
      if(rear==NULL)
      {
            rear=temp;
            front=temp;
      }
      else
      {
            rear->next=temp;
            rear=temp;
      }
}

void queue::qdelete()
{
      if(front!=NULL)
      {
            node *temp=front;
            cout<<front->data<<" deleted \n";
            front=front->next;
            delete temp;
            if(front==NULL)
                  rear=NULL;
      }
      else
            cout<<"Queue Empty..";
}

void queue::qdisplay()
{
      node *temp=front;
      while(temp!=NULL)
      {
            cout<<temp->data<<endl;
            temp=temp->next;
      }
}

queue::~queue()
{
      while(front!=NULL)
      {
            node *temp=front;
            front=front->next;
            delete temp;
      }
}

int main()
{
      queue obj; char ch;
      do
      {
            cout<< "1. insert the element\n2. Delete element\n3. Display stack\n4. exit\nEnter your choice:";
            cin>>ch;
            
            switch(ch)
            {
                  case '1' : obj.qinsert();break;
                  case '2' : obj.qdelete();break;
                  case '3' : obj.qdisplay();
            }
      }while(ch!='4');
}
