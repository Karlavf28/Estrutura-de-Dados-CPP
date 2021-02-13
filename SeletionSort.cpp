//Selection Sort  Ex : List [50][67][89][30][45]
//                           0    1  2   3  4
//                          [30] [50] [67] [89] [45]
//                            0   1    2     3   4
//                          [30] [45] [50] [67] [89]

#include<iostream>

#define LEN 5





//funtions
void PrintVector(int *vector);
void SeletionSort(int *vector);

using namespace std;

int main(){

int vector[LEN] = {50, 67, 89, 31, 45};

    PrintVector(vector);
    SeletionSort(vector);
    PrintVector(vector);


    return 0;
}

void PrintVector(int *vector){  //O(n)

for( int i=0; i<LEN; i++){

    cout<<vector[i]<<" ";
}

cout<<"\n";

}

void SeletionSort(int *vector){

//Selection Sort  Ex : List [50][67][89][30][45]
//                           0    1  2   3  4
//                          [30][67][89][50][45]
//                            0   1   2  3   4
//                          [30][45][89][50][67]

int i=0, j, aux, index_aux;
bool change = false;

for (i=0; i<LEN; i++)  // O(nˆ2)
{
    aux = vector[i];
    
    for(j=i+1; j<LEN; j++) 
    { 
       if(aux>vector[j])
       {
           aux = vector[j];
           index_aux = j;
           change = true;
       }        
    }

    if(change==true)
    {   
          vector[index_aux]=vector[i];  
          vector[i] = aux;
          change=false;
          PrintVector(vector);
    }

    
   
}


}