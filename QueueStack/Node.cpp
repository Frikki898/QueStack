#include "Node.h"

Node::Node(int val, Node *next)
{
    this->next = next;
    this->value = val;
}

Node::~Node()
{

}
