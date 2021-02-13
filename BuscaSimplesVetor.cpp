//Programa para realizar uma busca simples em um vetor

#include <iostream>
#define TAM 10

//functions

void PrintVector (int *vector);
int SearchVector (int vector[TAM], int sought_value, int *position_result);


using namespace std;

int main()
{

    int vector[TAM] = {1,23,44,56,63,72,84,90,98,99};
    int sought_value;
    int position_result;
    
    PrintVector(vector);

cout<<"\n With number do you want to seach? ";

cin>>sought_value;

cout<<"The number you choose to search is "<<sought_value<<"\n";

if(SearchVector(vector, sought_value, &position_result) == 1 )
{
    cout<<"This number is in the position: "<<position_result<<" of the vector";
}
else
{
    cout<<"The number is not on the list";
  
}

return 0;
}

/*-----------------------------------*/
//Function Search Vector
/*-----------------------------------*/

int SearchVector (int *vector, int sought_value, int *position_result)
{

    bool find = false;

//Search for the vector
for(int i=0; i<10; i++)
{
    if(vector[i]==sought_value)
    {
        find = true;
        *position_result = i;
    }
    
}

if(find)
{
    return 1;
}
else
{
    return -1;
}

}

/*-----------------------------------*/
//Function Print Vector
/*-----------------------------------*/

void PrintVector (int *vector)
{

     cout<<"Vector:"; 

for(int i=0; i<10; i++)
{
    cout<<vector[i]<< " ";
    
}
    
}