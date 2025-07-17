#include <iostream>

struct Node
{
    int data;
    Node *next;
};

int main() 
{
    Node *a = new Node{1, nullptr};
    Node *b = new Node{2, nullptr};
    Node *c = new Node{3, nullptr};
    Node *d = new Node{4, nullptr};
    Node *e = new Node{5, nullptr};
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node *current = a;
    while (current != nullptr)
    {
        std::cout << "Current data: " << current->data << "\n";
        current = current->next;
    }
    return 0;
}
