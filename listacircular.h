#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include <bits/stdc++.h>
using namespace std;
class Nodo
{
public:
    int data;
    Nodo* sig;
};
void print(Nodo* n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->sig;
    }
}
#endif
