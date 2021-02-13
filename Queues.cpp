// This Program shows how to work with Queues - FIFO (First In  - First Out)

#include <iostream>

#define TAM 5


//functions
void QueueContructor(int *queue, int *front, int *back);
void PrintQueue(int *queue);
void QueueNumber (int *queue , int *back, int *front , int number);
void DeQueueNumber (int *queue , int *front, int *back);
bool FullQueue (int *back);
bool EmptyQueue (int *back);

using namespace std;

int main (){

int front, back;
int queue[TAM];
int number;
char response;

QueueContructor(queue, &front, &back);
PrintQueue(queue);

for (int i=0; i<=TAM; i++)
{

    cout<< "Put a number in the Queue: ";
    cin>>number;
    
 QueueNumber ( queue ,  &back, &front ,  number);

}


for (int i=0; i<2; i++)
{

    cout<< "Remove  a number in the Queue?: y/n ";
    cin>>response;
    if(response == 'y')
    {
        DeQueueNumber(queue , &front, &back);  
    }
    else
    {
        PrintQueue(queue);
    }
    
    

}

    return 0;
}


void QueueContructor(int *queue, int *front, int *back)
{

    *front = 0;
    *back = -1;

    for(int i =0; i<TAM; i++)
    {
        queue[i] = 0;
    }

}

void PrintQueue(int *queue)
{
    cout<<"See how the queue is: \n";

    for(int i =0; i<TAM; i++)
    {
        cout<<queue[i]<<" ";
    }

    cout<<"\n";
}

void QueueNumber (int *queue , int *back, int *front , int number)
{
    if(!(FullQueue(back)))
    {

        *back = *back + 1; //  *back=+;?
        queue[*back] = number;

    }

    PrintQueue(queue);
}

void DeQueueNumber (int *queue , int *front, int *back)
{

    if(!(EmptyQueue(back)))
    {
  
    cout<< " \n The number " << queue[*front] << "was removed from the Queue. \n";
    queue[*front] = 0;
    *front = *front + 1; 
    
    }

    PrintQueue(queue);
}

bool EmptyQueue (int *back)
{
    if ( *back == -1)
    {
        cout<< "A fila está vazia \n"; 

        return true;
    }
    else
    {
         return false;
    }


}

bool FullQueue (int *back)
{
    if ( *back == TAM-1)
    {
        cout<< "A fila está cheia \n"; 

        return true;
    }
    else
    {           
    
    return false;
    }
 

}

