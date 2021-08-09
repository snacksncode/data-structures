#include <iostream>

// defining Node struct
struct Node
{
  int data;
  Node *next;
};

using namespace std;

Node *InsertIntoListAtBeginning(Node *head, int data)
{
  Node *temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
  return head;
}

void PrintList(Node *head)
{
  printf("List is: [\n");
  while (head != NULL)
  {
    printf("  ( %d ", head->data);
    printf("[ Addr: %p ]", head);
    printf(" => %p )\n", head->next);
    head = head->next;
  }
  printf("]\n");
}

int main()
{
  Node *head = NULL;
  printf("How many numbers will be in linked list?\n");
  int amountOfNumbers, enteredNumber;
  scanf("%d", &amountOfNumbers);
  for (int i = 0; i < amountOfNumbers; i++)
  {
    printf("Enter the number...\n");
    scanf("%d", &enteredNumber);
    head = InsertIntoListAtBeginning(head, enteredNumber);
  }
  PrintList(head);
  return 0;
}
