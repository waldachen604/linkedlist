#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
}

class linkedList
{
  private:
    node *head, node *second;
  public:
    linkedList()
  {
    head = nullptr;
  }
void insertAtFront();



void insertAtFront (int n)
{
  node *temp = new Node;
  temp-> data = n;
  temp -> next = head;
  head = temp;
}
