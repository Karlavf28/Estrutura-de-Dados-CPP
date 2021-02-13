//QuickSort 

#include<iostream>



#define LEN 5


void PrintVector(int *vector);
void QuickSort(int *vector, int start, int end);


using namespace std;
int main()
{

int vector[LEN] = {45, 3, 8, 10, 4};
;

    PrintVector(vector);
    QuickSort(vector, 0, LEN-1);
    PrintVector(vector);

    return 0;
}

void PrintVector (int *vector)
{

    for(int i=0; i<LEN; i++)
    {
        cout<<vector[i]<<" ";

    }
    cout<<"\n";
}

void QuickSort(int *vector, int start, int end)
{
    int left = start;
    int right = end;

    int pivot = (int) (left + right)/2;
    int aux=0;

    while(left<right)
    {

        while(vector[pivot]>vector[left])
        {
            left = left +1;
        }
        while(vector[pivot]<vector[right])
        {
            right= right -1;
        }

        if(left<right)
        {
            aux = vector[left];
            vector[left] = vector[right];
            vector[right] = aux;

            left = left+1;
            right= right -1;
        }

    }
    if(start< right)
    {
        QuickSort(vector,start, right);
    }
    if(left < end)
    {
        QuickSort(vector,start, left);
    }
    
    

}

