#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1;

void Insert() 
{
   int val;

   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else 
   {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() 
{
   if (front == - 1 || front > rear) 
   {
      cout<<"Queue Underflow ";
      return ;
   } 
   else 
   {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}

void Display() 
{
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else 
   {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}

int main() 
{
   int ch;
   cout<<"1) Insert "<<endl;
   cout<<"2) Delete "<<endl;
   cout<<"3) Display "<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) 
      {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);

   return 0;
}
