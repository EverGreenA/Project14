#ifndef LINKED_BINARY_TREE_H
#define LINKED_BINARY_TREE_H

#include "node.h"
#include "position.h"

class LinkedBinaryTree {
public:
	LinkedBinaryTree();
	int size() const;
	bool empty() const;
	Position root() const;
	PositionList positions() const;
	void addRoot();
	void expandExternal(const Position& p);
	Position removeAboveExternal(const Position& p);
protected:
	void preorder(Node* v, PositionList& pl) const;
private:
	Node* _root;
	int n;
};

#endif