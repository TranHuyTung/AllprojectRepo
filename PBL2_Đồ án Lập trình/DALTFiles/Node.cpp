#include "Node.h"

Node::Node(Book book)
{
    this->book = book;
    this->next = NULL;
}
Node::~Node()
{
    if (this->next != NULL)
        delete this->next;
}
void Node::printData()
{
    this->book.printInfo();
}