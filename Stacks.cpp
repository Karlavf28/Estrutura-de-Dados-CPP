//This program shows how to work with Stacks - FILO ( First In - Last Out)

#include <iostream>
#define TAM 10

//functions

void PrintStack (int *stack);
void PushStack(int *stack, int number, int *topo);
void PopStack(int *stack, int *topo);

using namespace std;

int main()
{

    int stack[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int number, number2;
    int topo=-1;
    
    PrintStack(stack);

cout<<"\n With number do you want to fill? ";

cin>>number;

cout<<"The number you choose to search is "<<number<<"\n";

PushStack(stack, number, &topo);
PrintStack(stack);

cout<<"\n With number do you want to fill? ";

cin>>number;

PushStack(stack, number, &topo);
PrintStack(stack);

cout<< "\n We will remove a number...\n";                    

PopStack(stack , &topo);

return 0;
}



/*-----------------------------------*/
//Function Print Vector
/*-----------------------------------*/

void PrintStack (int *stack)
{

     cout<<"Stack:"; 

for(int i=0; i<10; i++)
{
    cout<<stack[i]<< " ";
    
}
    
}

void PushStack(int *stack, int number, int *topo)
{

if(*topo == TAM-1)
{
   cout<<"The stack is full";
}
else
{
     *topo = *topo +1;
    stack[*topo]= number;
}

}

void PopStack(int *stack,  int *topo)
{
    if (*topo == -1){
        cout<<"The stack is empty";
    }
    else
    {
        cout << "The number removed from the stack is: " << stack[*topo];
        *topo = *topo -1;
    }
    
}