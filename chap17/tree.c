#include <string.h>
#include "tree.h";

int addCompare(struct Node *a, struct Node *b);

int searchCompare(struct Node * cur, char * keyword);

struct Tree * buildTree() {
	struct Tree tree;
	tree.root = NULL;
	return &tree;
}

struct Node * treeAdd(struct Tree * tree, struct Node * n, int (* compare)(struct Node * cur, struct Node * add)) {
	if (tree->root == NULL) {
		tree->root = n;
	} else {
		
	}
}

struct Node * treeSearch(struct Tree * tree, char * keyword, int (* compare)(struct Node * node, char * keyword));

struct Node * createNode(char * keyword, int len);






