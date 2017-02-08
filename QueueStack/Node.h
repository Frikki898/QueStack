#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node(int val, Node *next);
        virtual ~Node();

        int value;
        Node *next;

    protected:

    private:

};

#endif // NODE_H
