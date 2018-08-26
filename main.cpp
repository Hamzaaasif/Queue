#include<iostream>
using namespace std;
#include"queue.h"
int main()
{
  queue q;
  queue *front=new queue;
  queue *rear=new queue;
  front=NULL;
  rear=NULL;
  q.enqueue(4,&front,&rear);
  q.enqueue(5,&front,&rear);
  q.enqueue(6,&front,&rear);
  q.enqueue(7,&front,&rear);
  q.enqueue(8,&front,&rear);
  q.dequeue(&front,&rear);
  q.dequeue(&front,&rear);
  q.dequeue(&front,&rear);
  q.dequeue(&front,&rear);
  q.dequeue(&front,&rear);
  q.dequeue(&front,&rear);
  q.dequeue(&front,&rear);
  cout<<endl;
  system("pause");
}