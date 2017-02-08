#include "NodeList.h"

using namespace std;

NodeList::NodeList()
{
    head = NULL;
    tail = NULL;
}

NodeList::~NodeList()
{
    Node *node = head;
    while(node != NULL)
    {
        node = node;
        head = node->next;
        delete node;
    }
    tail = NULL;
    head = NULL;
}

void NodeList::headInsert(int val)
{
    Node *node = new Node(val, head);
    if(head == NULL)
    {
        tail = node;
    }
    head = node;
}

void NodeList::tailInsert(int val)
{
    if(head == NULL)
    {
        headInsert(val);
        return;
    }
    Node *node = new Node(val, NULL);
    tail->next = node;
    tail = node;
}

ostream& operator <<(ostream& out, const NodeList& list)
{
    Node *node = list.head;

    while(node != NULL)
    {
        out << node->value;
        if(node->next != NULL)
        {
            out << " ";
        }
        node = node->next;
    }
    return out;
}

int NodeList::lookHead()
{
    if(isEmpty())
    {
        throw EmptyException();
    }

    return head->value;
}

int NodeList::lookTail()
{
    if(isEmpty())
    {
        throw EmptyException();
    }

    return tail->value;
}

bool NodeList::isEmpty()
{
    return (head == NULL);
}

int NodeList::headRemove()
{
    int toReturn;
    if(isEmpty())
    {
        throw EmptyException();
    }

    toReturn = head->value;

    Node *node = head;
    head = head->next;
    delete node;

    if(head == NULL)
    {
        tail = NULL;
    }

    return toReturn;
}
