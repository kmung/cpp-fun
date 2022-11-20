// Simple c++ program to learn Linked Lists
// This is not my code
// Program obtained from YouTube channel CodeBeauty

#include <iostream>
#include <cstdlib>

using namespace std;

class Node {
public:
  int Value;
  Node* Next;
};

void printList(Node* n) {
  while (n!=NULL) {
    cout << n-> Value << endl;
    n = n -> Next;
  }
}

void insertAtTheFront(Node**head, int newValue) {
  //1. Prepare a newNode
  Node* newNode = new Node();
  newNode -> Value = newValue;
  //2. Put it in front of current head
  newNode -> Next = *head;
  //3. Move head of the list to point to the
  *head = newNode;
}

void inserAtTheEnd (Node**head, int newValue) {
  //1. Prepare a newNode
  Node* newNode = new Node();
  newNode -> Value = newValue;
  newNode -> Next = NULL;
  //2. If linked list is empty, newNode will be a head Node
  if (*head == NULL) {
    *head = newNode;
    return;
  }
  //3. Find the last Node
  Node* last = *head;
  while (last -> Next != NULL) {
    last = last -> Next;
  }
  //4. Insert newNode after last node (at the end)
  last -> Next = newNode;
}

void inserAfter(Node* previous, int newValue) {
  //1. Check if previous node is NULL
  if(previous == NULL) {
    cout << "Previous can not be NULL" << endl;
    return;
  }
  //2. Prepare a newNode
  Node* newNode = new Node();
  newNode -> Value = newValue;
  //3. Insert newNode after previous
  newNode -> Next = previous -> Next;
  previous -> Next = newNode;
}

int main() {
  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();

  head -> Value = 1;
  head -> Next = second;
  second -> Value = 2;
  second -> Next = third;
  third -> Value = 3;
  third -> Next = NULL;

  insertAtTheFront(&head, -1);
  inserAfter(head, 0);
  insertAtTheFront(&head, -2);
  inserAtTheEnd(&head, 4);
  inserAtTheEnd(&head, 5);
  printList(head);

  return 0;
}
