#include<bits/stdc++.h>
using namespace std;
class node
{
public:

    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;

    }


};
node*front=NULL;
node*rear=NULL;
void enqueue(int d)
{
    node *temp=new node(d);
    if(front==NULL&&rear==NULL)
    {
         front=rear=temp;
         rear->next=front;

    }

    else
    {
        rear->next=temp;
        rear=temp;
        rear->next=front;

    }

}
void print()
{
    node*temp=front;
    while(temp->next!=front)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<temp->data<<" -> ";
    cout<<temp->next->data;


}
void dequeue(int m)
{
    int k=m-1;
    node*temp=front;
    if(front==NULL)
        return;
    else
    {
      while(temp->next!=temp)
      {
          k=m-1;
          while(k)
          {
           temp=temp->next;
           k--;
          }
          node*ptr=temp->next;
          if(ptr==front)
            front=front->next;
          if(ptr==rear)
            rear=rear->next;
          temp->next=temp->next->next;
          delete(ptr);
          temp=temp->next;
          cout<<"\n";
         print();
      }
      cout<<"\nThe luckiest guy="<<temp->data;

    }
}
int main()
{
    int m;int n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        enqueue(i);
    print();
    dequeue(n);
}
