#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

class stack
{
      node *top;
public :
      stack()
      { top=NULL;}
       void push();
       void pop();
       void display();
      ~stack();
};

void stack::push()
{
      node *temp;
      temp=new node;
      cout<<"Enter element into stack: ";
      cin>>temp->data;
      temp->next=top;
      top=temp;
}

void stack::pop()
{
      if(top!=NULL)
      {
            node *temp=top;
            top=top->next;
            cout<<temp->data<<" from the stack deleted successfully!";
            delete temp;
      }
      else
            cout<<"Stack empty";
}

void stack::display()
{
      node *temp=top;
      cout<<"Stack elements: ";
      while(temp!=NULL)
      {
        cout<<temp->data<<" ";
        temp=temp->next;
      }
}

stack::~stack()
{
      while(top!=NULL)
      {
            node *temp=top;
            top=top->next;
            delete temp;
      }
}

int main()
{
      cout<<"\n\nprogram for stack implementation......!!\n";
      stack st;
      char ch;
      do
      {
            cout<<"\nchoose from following for stack: \n1 for push \n2 for Pop \n3 for Display \n4 for quit\nEnter your choice:";
            cin>>ch;
            switch(ch)
            {
                  case '1': st.push();break;
                  case '2': st.pop();break;
                  case '3': st.display();break;
            }
      }while(ch!='4');

      return 0;

}
