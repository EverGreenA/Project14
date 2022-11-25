#ifndef POSITION_H
#define POSITION_H
#include "node.h"
#include <list>

class Position {
public:
	Node* v;
public:
	Position(Node* _v = NULL) : v(_v) {}
	Elem& operator*()
	{
		return v->elt;
	}
	Position left() const
	{
		return Position(v->left);
	}
	Position right() const
	{
		return Position(v->right);
	}
	Position parent() const
	{
		return Position(v->par);
	}
	bool isRoot() const
	{
		return v->par == NULL;
	}
	bool isExternal() const
	{
		return v->left == NULL && v->right == NULL;
	}
	void setElem(Elem e) { v->elt = e; }

	friend class LinkedBinaryTree;
};

typedef std::list<Position> PositionList;

#endif