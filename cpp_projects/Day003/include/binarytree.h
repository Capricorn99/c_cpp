#include <iostream>

struct node {
    int data;
    node *left;
    node *right;
};

class binarytree
{
    private:
        node *root;
        void insert_node(int data, node *leaf);
        void display_tree_node(std::string prefix, node *leaf, bool is_left);
        void destroy_tree_node(node *leaf);
    public:
        binarytree();
        ~binarytree();
        void insert(int data);
        void display_tree();
        void destroy_tree();
};
