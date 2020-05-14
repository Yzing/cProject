#ifndef _TREE_H_
#define _TREE_H_

struct {
	char * word;
	long count;
} word_count;

typedef word_count Item;

struct {
	Item word;
	Node * left;
	Node * right;
} Node;

struct {
	struct Node * root;
} Tree;

// set the root point NULL
struct Tree * buildTree();

struct Node * treeAdd(struct Tree *, struct Node *, int (* compare)(struct Node * a, struct Node * b));

struct Node * treeSearch(struct Tree * tree, char * keyword, int (* compare)(struct Node * node, char * keyword));

struct Node * createNode(char * keyword, int len);

#endif
