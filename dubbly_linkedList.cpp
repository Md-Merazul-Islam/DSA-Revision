#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = nullptr;
    this->prev = nullptr;
  }
};

void Print_normal(Node *head)
{
  Node *tmp = head;
  while (tmp != nullptr)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

void Reverse_print(Node *tail)
{
  Node *last = tail;
  while (last != nullptr)
  {
    cout << last->val << " ";
    last = last->prev;
  }
}

int main()
{
  Node *head = new Node(1);
  Node *a = new Node(2);
  Node *b = new Node(3);
  Node *c = new Node(4);

  // connection
  head->next = a;
  a->prev = head;
  a->next = b;
  b->prev = a;
  b->next = c;
  c->prev = b;

  Print_normal(head);
  Reverse_print(c);
  return 0;
}