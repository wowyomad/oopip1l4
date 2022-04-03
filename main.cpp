#include <iostream>
#include <cstdio>

struct List
{
    int data;
    List *prev;
    List *next;
};

void CreateList(List **beg, List **end, const int data = 0);
void PushBack(List **end, const int data = 0);
void PushFront(List *beg, const int data = 0);

void PrintBack(List *end);
void PrintFront(List *beg);

int main()
{
    List *beg;
    List *end;
    CreateList(&beg, &end, 5);
    PushBack(&end, 10);
    std::cout << "End\n";
    PrintBack(end);
}

void PrintBack(List *end)
{
    List* temp = end;
    while(temp != NULL)
    {
        printf("%d%c", temp->data, '\n');
        temp = temp->next;
    }
    printf((const char*)'\n');
}

    void CreateList(List **beg, List **end, const int data)
{
    List *temp = new List;
    temp->data = data;
    temp->next = temp->prev = NULL;
    *beg = *end = temp;
}

void PushBack(List **end, const int data)
{
    List *temp = new List;
    temp->data = data;
    temp->next = *end;
    *end = temp;
}