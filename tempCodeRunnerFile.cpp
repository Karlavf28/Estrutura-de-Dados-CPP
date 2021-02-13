#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std; //para utilizar cout

//Struct para pessoa
struct person{
    string name;
    int id;
    struct person *next;
};

int ListLenght ( person *ListPointer)
{
    int count=0;
    person *aux = ListPointer;

    while (aux!=NULL)
    {
        count++;
        aux = aux->next; 
    }
    return count;

}

int main(){

//Create a Linked List 
struct person *LinkPointer;

struct person *InicialList = new person;

InicialList->name = "Victor";
InicialList->id = 10;
InicialList->next = NULL;

LinkPointer = InicialList;

//List Lenght

int lenght;

lenght = ListLenght(LinkPointer);
cout<<"The list lenght is " << lenght;


    return 0;
}


