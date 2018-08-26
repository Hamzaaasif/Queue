#include<iostream>
using namespace std;
class queue
{
  public:
  void enqueue(int val,queue **front,queue **rear)
  {
    queue *ptr=new queue;
    ptr->value=val;
    ptr->next=NULL;
    if(*front==NULL)
    {
      *front=ptr;
      *rear=ptr;
    }
    else
    {
     (*rear)->next=ptr;
     *rear=ptr; 
    }
  }
  void dequeue(queue **front,queue **rear)
  {
    if(*front==NULL)
    {
      cout<<"Queue is empty"<<endl;
    }
    else
    {
      queue *curr=*front;
      cout<<(*front)->value<<endl;
      *front=(*front)->next;
      curr=NULL;
      delete[] curr;
    }

  }
  private:
  int value;
  queue *next;
};