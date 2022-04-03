#include <iostream>

struct List
{
    int data;
    List *prev;
    List *next;
};

void CreateList(List **beg, List **end);

int main()
{
    List *beg;
    List *end;
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << i;
    }
    
}

void CreateList(List **beg, List **end)
{
    *beg = new List;
    *end = new List;


}