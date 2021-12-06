#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
using namespace std;

class LinkedList
{
public:
	int size = 0;
	Node *head;
	Node *tail;

public:
	LinkedList();
	~LinkedList();

	int getSize();
	int getPositionByBookID(string);
	void printList();
	void insertNode(Node *node, int position);
	void deleteNode(int);
	void deleteNodeByID(string maso);
	void deleteNodeByBookName(string tensach);
	void deleteNodeByAuthorName(string tentacgia);
	LinkedList *searchBookByName(string);
	LinkedList* searchNodeByAuthorName(string);
	LinkedList* searchNodeByNXBName(string);
	void ReadListBookFromFile(ifstream &);
	void WriteListBookToFile(ofstream&);
	void updateNode(int position,string ts,string ttg,string nhaxb,double namxb,bool tt);
	void updateNodeMuon(string ms);
	void updateNodeTra(string ms);
	LinkedList* ShowBookByBorrowStatus(); 
	LinkedList* ShowBookByPayStatus();
	bool isExist(string maso);
};
#endif