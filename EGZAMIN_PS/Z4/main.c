#include <stdio.h>
#include <stdlib.h>

struct element
{
    int x;
    struct element* next;
};

struct element* createListHead()
{
    struct element* p = malloc(sizeof(struct element));
    p->next = NULL;
    return p;
}

void addElementHead(struct element* List, int x)
{
    struct element* p = malloc(sizeof(struct element));
    p->x = x;
    p->next = List->next;
    List->next = p;
}

struct element* minAddress(struct element* List)
{
    struct element* p = List;
    if (p->next == NULL)
        return NULL;
    int min = p->next->x;
    while(p->next != NULL) //wyznaczyć najmniejszą wartość
    {
        p = p->next;
        if(p->x < min)
            min = p->x;
    }
    p = List;
    while(p->next != NULL) //znaleźć element z najmniejszą wartością i zwrócić wskaźnik
    {
        p = p->next;
        if(p->x == min)
            return p;
    }
    return NULL;
}

int main() {
    struct element* list1 = createListHead();
    addElementHead(list1, -3);
    addElementHead(list1, 4);
    printf("Wynik: %p", minAddress(list1));
    return 0;
}
