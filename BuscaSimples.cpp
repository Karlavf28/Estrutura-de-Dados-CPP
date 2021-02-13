//Programa para realizar uma busca simples em um vetor

#include <iostream>
#define TAM 10

//functions
void SearchVector (int *vector, int sought_value);
void PrintVector (int *vector);



using namespace std;

int main()
{

    int vector[TAM] = {1,23,44,56,63,72,84,90,98,99};
    int sought_value;
    
    PrintVector(vector);

cout<<"\n With number do you want to seach? ";

cin>>sought_value;

cout<<"The number you choose to search is "<<sought_value<<"\n";

SearchVector(vector, sought_value);

return 0;
}


//Function Search Vector
void SearchVector (int *vector, int sought_value)
{

    bool find = false;

//Search for the vector
for(int i=0; i<10; i++)
{
    if(vector[i]==sought_value)
    {
        cout<<"This number is in the position: "<<i<<" of the vector";
        find = true;
    }
    
}

if(!find)
{
    cout<<"The number is not on the list";
}

}

//Function Print Vector

void PrintVector (int *vector)
{

     cout<<"Vector:"; 

for(int i=0; i<10; i++)
{
    cout<<vector[i]<< " ";
    
}
    
}