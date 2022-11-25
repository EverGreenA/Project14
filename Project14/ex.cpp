int main() {
	LinkedBinaryTree T;
	Position p;
	Position p_left;
	Position p_right;

	cout << "Tree Size: " << T.size() << endl;

	T.addRoot();
	cout << "Tree Size: " << T.size() << endl;

	p = T.root();
	p.setElem(100);

	T.expandExternal(p);
	p_left = p.left(); p_left.setElem(200);
	p_right = p.right(); p_right.setElem(300);
	cout << "Tree Size: " << T.size() << endl;

	preorderPrint(T, p);
	cout << endl;
	postorderPrint(T, p);

}