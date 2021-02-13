// BubbleSort 

#include <iostream>

#define TAM 5

//funtions
void BubbleSort ( int *vector );
void PrintVector(int *vector);

using namespace std;

int main()
{

    int vector[TAM] = {7,40,5,9,10};

    PrintVector(vector);
    BubbleSort(vector);
    PrintVector(vector);


return 0;


}

void BubbleSort ( int *vector )
{



bool sorted = 0;
int aux=0;
int count=0;


while(!sorted)
{
    for(int i=0; i<TAM; i++)
    {
        if(vector[i]>vector[i+1])
        {
            aux = vector[i];
            vector[i] = vector[i+1];
            vector[i+1] = aux;
         }
         else
         {
             count++;
         }

    }

  if(count==TAM-1){
      sorted =1;
  }


}


}

void PrintVector(int *vector){

for (int i=0; i<TAM; i++)
{
    cout<<vector[i]<<" ";
}

cout<<"\n";

}