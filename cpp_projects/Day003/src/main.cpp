#include <iostream>
#include <binarytree.h>

int main()
{
	binarytree meo;
	meo.insert(5);
	meo.insert(10);
	meo.insert(2);
	meo.insert(7);
	meo.insert(1);
	meo.insert(3);
	meo.insert(12);
	meo.insert(0);
	meo.display_tree();

	return 0;
}