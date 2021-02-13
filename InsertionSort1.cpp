// Insertion Sort - It is base like order a card in hands, you pick a card and compare it with all the other ones

#include<iostream>


#define TAM 10

void PrintVector(int *vector);
void InsertionSort(int *vector);

using namespace std;

int main()
{
   int vector[TAM] = {10, 8 , 1, 40, 80, 64, 4, 9, 20, 34};

    PrintVector(vector);
    InsertionSort(vector);
    
    

    return 0;
}


void InsertionSort(int *vector)
{
    int i, j;
   
        for (i=1; i<TAM; i++) 
        {
             j = i-1;

                while((j>=0) && (vector[i]< vector[j]))
                {
                    vector[j+1] = vector[j];
               
                    j= j-1;

               }
                PrintVector(vector);
               vector[j+1]=vector[i];

        }
}

void PrintVector(int *vector)
{
    for(int i=0; i<TAM; i++)
    {
        cout<<vector[i]<<" ";
    }

    cout<< "\n";
}