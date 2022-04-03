#include <iostream>

struct List
{
    int data;
    List *prev;
    List *next;
};

void CreateList(List **beg, List **end, const int data = 0);
void PushBack(List* end);
void PushFront(List *beg);

int main()
{       
    List *beg;
    List *end;
    CreateList(&beg, &end);
    std::cout << "End\n";

    
}

void CreateList(List **beg, List **end, const int data)
{
    List* temp = new List;
    temp->data = data;
    *beg = *end = temp;
}

void PushBack(List* end)
{

}