#include "LinkedList.h"
#include <iomanip>
LinkedList::LinkedList()
{
    this->size = 0;
    this->head = NULL;
    this->tail = NULL;
}

LinkedList::~LinkedList()
{
    while (this->head != NULL)
    {
        Node *currentNode = this->head;
        this->head = this->head->next;
        delete currentNode;
    }
}

int LinkedList::getSize()
{
    return this->size;
}

int LinkedList::getPositionByBookID(string maso)
{
    int pos = 0;
    Node* currentNode = this->head;
    while (currentNode != NULL)
    {
        if (currentNode->book.MaSo == maso)
            break;
        pos++;
        currentNode = currentNode->next;
    }
    return pos;
}

void LinkedList::printList()
{
    cout << "\nLinked List: " << endl;
    cout << "Size: " << this->size << endl;

    Node* currentNode = this->head;
    cout << setw(10) << "Ma so" << setw(30) << "Ten sach" << setw(30) << "Ten tac gia" << setw(30) << "Nha xuat ban" << setw(30) << "Nam xuat ban" << setw(15) << "Trang thai" << endl;
    for (int i = 0; i < 150; i++)
    {
        cout << "_";
    }
    cout << endl;
    while (currentNode != NULL)
    {
        currentNode->printData();
        cout << endl;
        currentNode = currentNode->next;
    }
}

void LinkedList::insertNode(Node *node, int position)
{
    if (this->head == NULL || position < 1)
    {
        // insert in front
        node->next = this->head;
        this->head = node;
        if (this->tail == NULL)
        {
            this->tail = node;
        }
        this->size++;
        return;
    }

    if (position >= this->size)
    {
        // insert after tail
        this->tail->next = node;
        this->tail = node;
        this->size++;
        return;
    }

    Node *preNode = NULL;
    Node *currentNode = this->head;
    int pos = 0;
    while (pos < position)
    {
        pos++;
        preNode = currentNode;
        currentNode = currentNode->next;
    }
    node->next = currentNode;
    preNode->next = node;
    this->size++;
}

void LinkedList::deleteNode(int position)
{
    if (this->head == NULL || position < 0 || position > this->size-1)
    {
        return;
    }
    
    Node* preNode = NULL;
    Node* currentNode = this->head;
    int pos = 0;
    while (pos < position)
    {
        pos++;
        preNode = currentNode;
        currentNode = currentNode->next;
    }
    if (position == 0)
    {
        this->head = this->head->next;
        if (this->head == NULL)
        {
            this->tail = NULL;
        }
    }
    else 
    {
        if (position == this->size - 1)
        {
            if (preNode != NULL)
            {
                preNode->next = NULL;
            }
            this->tail = preNode;
        }
        else
            preNode->next = currentNode->next;
    }
    this->size--;
    return;
}

void LinkedList::deleteNodeByID(string maso)
{
    if (this->head == NULL)
        return;

    Node *preNode = NULL;
    Node *currentNode = this->head;
    while (currentNode != NULL)
    {
        if (currentNode->book.MaSo == maso)
        {
            if (preNode == NULL)
            {
                // delete front
                this->head = this->head->next;
                if (this->head == NULL)
                {
                    this->tail = NULL;
                }
            }
            else if (this->tail == currentNode)
            {
                // delete last
                if (preNode != NULL)
                {
                    preNode->next = NULL;
                }
                this->tail = preNode;
            }
            else
            {
                // delete in the middle
                preNode->next = currentNode->next;
            }
            //delete currentNode;
            this->size--;
            return;
        }
        preNode = currentNode;
        currentNode = currentNode->next;
    }
}

void LinkedList::deleteNodeByBookName(string tensach)
{
    if (this->head == NULL)
        return;

    Node* preNode = NULL;
    Node* currentNode = this->head;
    while (currentNode != NULL)
    {
        if (currentNode->book.TenSach == tensach)
        {
            if (preNode == NULL)
            {
                // delete front
                this->head = this->head->next;
                if (this->head == NULL)
                {
                    this->tail = NULL;
                }
            }
            else if (this->tail == currentNode)
            {
                // delete last
                if (preNode != NULL)
                {
                    preNode->next = NULL;
                }
                this->tail = preNode;
            }
            else
            {
                // delete in the middle
                preNode->next = currentNode->next;
            }
            //delete currentNode;
            this->size--;
            return;
        }
        preNode = currentNode;
        currentNode = currentNode->next;
    }
}

void LinkedList::deleteNodeByAuthorName(string tentacgia)
{
    if (this->head == NULL)
        return;

    Node* preNode = NULL;
    Node* currentNode = this->head;
    while (currentNode != NULL)
    {
        if (currentNode->book.TenTacGia == tentacgia)
        {
            if (preNode == NULL)
            {
                // delete front
                this->head = this->head->next;
                if (this->head == NULL)
                {
                    this->tail = NULL;
                }
            }
            else if (this->tail == currentNode)
            {
                // delete last
                if (preNode != NULL)
                {
                    preNode->next = NULL;
                }
                this->tail = preNode;
            }
            else
            {
                // delete in the middle
                preNode->next = currentNode->next;
            }
            //delete currentNode;
            this->size--;
            return;
        }
        preNode = currentNode;
        currentNode = currentNode->next;
    }
}

LinkedList* LinkedList::searchBookByName(string tensach)
{
        Node* currentNode = this->head;
        Node* temp = NULL;
        LinkedList* resultSearch = new LinkedList();
        while (currentNode != NULL)
        {
            if (currentNode->book.TenSach == tensach)
            {
                temp = new Node(currentNode->book);
                resultSearch->insertNode(temp, resultSearch->getSize());
            }
            currentNode = currentNode->next;
        }
        return resultSearch;
}

LinkedList* LinkedList::searchNodeByAuthorName(string tentacgia)
{
        Node* currentNode = this->head;
        Node* temp = NULL;
        LinkedList* resultSearch = new LinkedList();
        while (currentNode != NULL)
        {
            if (currentNode->book.TenTacGia == tentacgia)
            {
                temp = new Node(currentNode->book);
                resultSearch->insertNode(temp, resultSearch->getSize());
            }
            currentNode = currentNode->next;
        }
        return resultSearch;
}

LinkedList* LinkedList::searchNodeByNXBName(string tennxb)
{  
        Node* currentNode = this->head;
        Node* temp = NULL;
        LinkedList* resultSearch = new LinkedList();
        while (currentNode != NULL)
        {
            if (currentNode->book.NhaXuatBan == tennxb)
            {
                temp = new Node(currentNode->book);
                resultSearch->insertNode(temp, resultSearch->getSize());
            }
            currentNode = currentNode->next;
        }
        return resultSearch;
}

void LinkedList::ReadListBookFromFile(ifstream& filein)
{
    while (!filein.eof())
    {
        Book book;
        book.ReadBookInfoFromFile(filein);
        Node* p = new Node(book);
        insertNode(p, getSize());
    }
}

void LinkedList::WriteListBookToFile(ofstream& fileout)
{
    Node* currentNode = this->head;
    while (currentNode != NULL)
    {
        string ms = currentNode->book.MaSo;
        string tens = currentNode->book.TenSach;
        string ttg = currentNode->book.TenTacGia;
        string nhaxb = currentNode->book.NhaXuatBan;
        double namxb = currentNode->book.NamXuatBan;
        bool tt = currentNode->book.TrangThai;
        string strtt;
        if (tt == true)
        {
            strtt = "true";
        }
        else
        {
            strtt = "false";
        }
        fileout << ms << ", " << tens << ", " << ttg << ", " << nhaxb << ", " << namxb << ", " << strtt << endl;
        currentNode = currentNode->next;
    }
}

void LinkedList::updateNode(int positon, string ts, string ttg, string nhaxb, double namxb, bool tt)
{
    if (this->head == NULL)
    {
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t List is empty";
        return;
    }
    else
    {
        Node* currentNode = this->head;
        int pos = 0;
        while (pos < positon)
        {
            pos++;
            currentNode = currentNode->next;
        }
        currentNode->book.TenSach = ts;
        currentNode->book.TenTacGia = ttg;
        currentNode->book.NhaXuatBan = nhaxb;
        currentNode->book.NamXuatBan = namxb;
        currentNode->book.TrangThai = tt;
    }
}

void LinkedList::updateNodeMuon(string ms)
{
    Node* currentNode = this->head;
    while (currentNode != NULL)
    {
        if (currentNode->book.MaSo == ms)
        {
            if (currentNode->book.TrangThai == 1)
            {
                cout << "\t\t\t\t\t\t\t\t\t\t\tSach Dang Duoc Cho Muon";
                return;
            }
            else
            {
                currentNode->book.TrangThai = 1;
            }
        }
        currentNode = currentNode->next;
    }
}

void LinkedList::updateNodeTra(string ms)
{
    Node* currentNode = this->head;
    while (currentNode != NULL)
    {
        if (currentNode->book.MaSo == ms)
        {
            if (currentNode->book.TrangThai == 0)
            {
                cout << "\t\t\t\t\t\t\t\t\t\t\tSach Dang o trang thai chua Muon";
                return;
            }
            else
            {
                currentNode->book.TrangThai = 0;
            }
        }
        currentNode = currentNode->next;
    }
}

LinkedList* LinkedList::ShowBookByBorrowStatus()
{
    Node* currentNode = this->head;
    Node* temp = NULL;
    LinkedList* resultSearch = new LinkedList();
    while (currentNode != NULL)
    {
        if (currentNode->book.TrangThai == 1)
        {
            temp = new Node(currentNode->book);
            resultSearch->insertNode(temp, resultSearch->getSize());
        }
        currentNode = currentNode->next;
    }
    return resultSearch;
}

LinkedList* LinkedList::ShowBookByPayStatus()
{
    Node* currentNode = this->head;
    Node* temp = NULL;
    LinkedList* resultSearch = new LinkedList();
    while (currentNode != NULL)
    {
        if (currentNode->book.TrangThai == 0)
        {
            temp = new Node(currentNode->book);
            resultSearch->insertNode(temp, resultSearch->getSize());
        }
        currentNode = currentNode->next;
    }
    return resultSearch;
}

bool LinkedList::isExist(string maso)
{
    Node* currentNode = this->head;
    while (currentNode != NULL)
    {
        if (currentNode->book.MaSo == maso)
        {
            return true;
        }
        currentNode = currentNode->next;
    }
    return false;
}

