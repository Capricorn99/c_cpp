
#include "binarytree.h"

// ├└ │─

binarytree::binarytree()
{
    root = nullptr;
}

binarytree::~binarytree()
{
    destroy_tree();
}

void binarytree::insert_node(int data, node *leaf) {
    if (data < leaf->data) {
        if (leaf->left == nullptr) {
            leaf->left = new node;
            leaf->left->data = data;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;
        }
        else insert_node(data, leaf->left);
    }
    else {
        if (leaf->right == nullptr) {
            leaf->right = new node;
            leaf->right->data = data;
            leaf->right->left = nullptr;
            leaf->right->right = nullptr;
        }
        else insert_node(data, leaf->right);
    }
}

void binarytree::insert(int data) {
    if (root == nullptr) {
        root = new node;
        root->data = data;
        root->left = nullptr;
        root->right = nullptr;
    }
    else insert_node(data, root);
}

void binarytree::display_tree() {
    display_tree_node("", root, false);
}

void binarytree::display_tree_node(std::string prefix, node *leaf, bool is_left) {
    if (leaf != nullptr) {
        std::cout << prefix << (is_left ? "├──" : "└──") << leaf->data << std::endl;
        display_tree_node(prefix + (is_left ? "│  " : "   "), leaf->left, true);
        display_tree_node(prefix + (is_left ? "│  " : "   "), leaf->right, false);
    }
}

void binarytree::destroy_tree_node(node *leaf) {
    if (leaf != nullptr) {
        destroy_tree_node(leaf->left);
        destroy_tree_node(leaf->right);
        delete leaf;
    }
}

void binarytree::destroy_tree() {
    destroy_tree_node(root);
}