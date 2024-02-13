#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *AddvalueatHead(node *head, int val)
{ // ya to node* likh ke head return karwa do ya void fxn
    // bana kar node* &head likh ke main function mein head = na likh kar direct fxn call kar lo.
    node *n = new node(val);
    n->next = head;
    head = n;
    return head;
}
node *AddvalueatMid(node *head, int val, int index)
{
    node *n = new node(val);
    node *temp = head;
    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    // n->data=val;
    n->next = temp->next;
    temp->next = n;

    return head;
}
void Addvalueatlast(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    cout<<"The value of temp is "<<temp->next<<endl;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void delatfirst(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delatfirst(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int main()
{
    node *head = NULL;
    Addvalueatlast(head, 1);
    Addvalueatlast(head, 2);
    Addvalueatlast(head, 3);
    cout << "Linked List After last Insertions:" << endl;
    display(head);
    head = AddvalueatHead(head, 4);
    cout << "Linked List After first Insertions:" << endl;
    display(head);
    cout << search(head, 1) << endl;
    head = AddvalueatMid(head, 56, 3);
    cout<<"New Head "<<head<<endl;
    cout << "Linked List After mid Insertions:" << endl;
    display(head);
    deletion(head,56);
    // delatfirst(head);
    display(head);
    return 0;
}