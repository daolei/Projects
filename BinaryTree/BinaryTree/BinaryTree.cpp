// BinaryTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Node {
public:
	int value;
	Node* left;
	Node* right;
	Node(int value)
	{
		this->value = value;
	}
};
void preOrder(Node *head) {
	if (head == NULL)
	{
		return;
	}
	cout << head->value<<endl;
	preOrder(head->left);
	preOrder(head->right);
}
void InOrder(Node *head)
{
	if (head == NULL)
	{
		return;
	}
	InOrder(head->left);
	cout << head->value<<endl;
	InOrder(head->right);

}
void posOrder(Node *head)
{
	if (head == NULL)
	{
		return;
	}
	posOrder(head->left);
	posOrder(head->right);
	cout << head->value << endl;
}
int main()
{
	Node *head = new Node(1);
	head->left = new Node(2);
	head->right = new Node(3);
	posOrder(head);
    return 0;
}

