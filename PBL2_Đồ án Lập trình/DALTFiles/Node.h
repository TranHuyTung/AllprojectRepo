#pragma once
#ifndef NODE_H
#define NODE_H
#include "Book.h"
class Node
{
public:
    Book book;
    Node *next = NULL;

public:
    Node(Book book);
    ~Node();
    void printData();
};
#endif