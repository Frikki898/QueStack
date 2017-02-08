#ifndef NODELIST_H
#define NODELIST_H
#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

class EmptyException{};

class NodeList
{
    public:
        NodeList();
        virtual ~NodeList();

        void tailInsert(int val);

        void headInsert(int val);

        int headRemove();

        bool isEmpty();

        int lookHead();
        int lookTail();

        friend ostream& operator <<(ostream& out, const NodeList& list);

    protected:

    private:
        Node *head;
        Node *tail;
};

#endif // NODELIST_H
