//Programa para realizar uma busca biária em um vetor
//Para uma bisca binário o vetor/lista já deve estar ordenado

#include <iostream>
#define TAM 10

//functions

void PrintVector (int *vector);
int BinarySearch (int vector[TAM], int sought_value, int *position_result);


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

if(BinarySearch(vector, sought_value, &position_result) == 1 )
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
//Function Binary Search
/*-----------------------------------*/

int BinarySearch (int *vector, int sought_value, int *position_result)
{
 
    int right = TAM-1;
    int left = 0;
    int pivot;

while(left<=right){

    pivot = (right+left)/2;

if(vector[pivot]==sought_value)
{
    *position_result=pivot;
    return 1;
}
else if(vector[pivot]<sought_value) {
    left = pivot+1;
}
else {
    right = pivot -1;
}

}

return -1;

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