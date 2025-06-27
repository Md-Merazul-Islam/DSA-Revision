#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

void print_list(Node *head)
{
  Node *tmp = head;
  if (tmp == nullptr)
  {
    cout << "this node is null" << endl;
  }
  while (tmp != nullptr)
  {
    cout << tmp->data << " ";
    tmp = tmp->next;
  }
}

Node *insert_at_head(Node *head, int data)
{
  Node *newnode = new Node(data);
  newnode->next = head;
  return newnode;
}

Node *insert_at_tail(Node *head, int data)
{
  Node *newnode = new Node(data);
  if (head == nullptr)
  {
    return newnode;
  }
  Node *tmp = head;
  while (tmp->next != nullptr)
  {
    tmp = tmp->next;
  }
  tmp->next = newnode;
  return head;
}

Node *insert_at_any_position(Node *head, int pos, int data)
{
  Node *newnode = new Node(data);
  if (head == nullptr || pos == 0)
  {
    newnode->next = head;
    return newnode;
  }
  Node *tmp = head;
  int i = 0;
  while (tmp->next != nullptr && i < pos - 1)
  {
    tmp = tmp->next;
    i++;
  }
  newnode->next = tmp->next;
  tmp->next = newnode;
  return head;
}

Node *delete_at_head(Node *head)
{
  if (head == nullptr)
  {
    return nullptr;
  }
  Node *tmp = head;
  head = head->next;
  delete tmp;
  return head;
}

Node *delete_at_tail(Node *head)
{
  // #case 1 : if list is empty
  if (head == nullptr)
  {
    return nullptr;
  }
  // #case 2 : if list has only one node
  Node *tmp = head;

  if (tmp->next == nullptr)
  {
    delete tmp;
    return nullptr; // if only one node
  }

  while (tmp->next->next != nullptr)
  {
    tmp = tmp->next;
  }
  delete tmp->next;
  tmp->next = nullptr; // set the last node to null
  return head;
}

Node *delete_at_any_position(Node *&head, int pos)
{
  if (pos < 0 or head == nullptr)
  {
    return head; // invalid position or empty list
  }
  if (pos == 0)
  {
    return delete_at_head(head); // delete head
  }
  Node *tmp = head;
  for (int i = 0; i < pos - 1; i++)
  {
    tmp = tmp->next;
    if (tmp == nullptr || tmp->next == nullptr)
    {
      return head; // position is out of bounds
    }
  }
  Node *to_delete = tmp->next;
  tmp->next = tmp->next->next; // skip the node at position pos
  delete to_delete;
  return head;
}

void buildList(Node *&head)
{
  int val;
  while (cin >> val && val != -1)
  {
    head = insert_at_tail(head, val);
  }
}
int main()
{

  Node *head = nullptr;
  buildList(head);
  cout << "original list: ";
  print_list(head);
  cout << endl;

  head = insert_at_head(head, 5);
  cout << "after inserting 5 at head: ";
  print_list(head);
  cout << endl;

  head = insert_at_tail(head, 7);
  cout << "after inserting 7 at tail: ";
  print_list(head);
  cout << endl;

  head = insert_at_any_position(head, 2, 99);
  print_list(head);
  cout << endl;

  head = delete_at_head(head);
  cout << "after deleting head: ";
  print_list(head);

  cout << endl;
  head = delete_at_tail(head);
  cout << "after deleting tail: ";
  print_list(head);
  cout << endl;

  head = delete_at_any_position(head, 1);
  cout << "after deleting at position 1: ";
  print_list(head);
  cout << endl;

  return 0;
}