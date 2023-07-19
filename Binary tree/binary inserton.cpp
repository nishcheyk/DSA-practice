#include <iostream>
 class Node{
    public:
    int key;
    Node* left;
    Node* right;
         Node(int val){
              key = val;
             left = NULL;
             right = NULL;
    }
 };
Node* insert(Node* root, int key){
    if(root==NULL){
        return new Node(key);
    }
    if(key<root->key){
        
    }
}
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}
class BinaryTree {
private:
    Node* root;

    Node* insertRecursive(Node* current, int key) {
        if (current == nullptr) {
            return new Node(key);
        }

        if (key < current->key) {
            current->left = insertRecursive(current->left, key);
        } else if (key > current->key) {
            current->right = insertRecursive(current->right, key);
        }

        return current;
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* deleteRecursive(Node* current, int key) {
        if (current == nullptr) {
            return nullptr;
        }

        if (key < current->key) {
            current->left = deleteRecursive(current->left, key);
        } else if (key > current->key) {
            current->right = deleteRecursive(current->right, key);
        } else {
            if (current->left == nullptr) {
                Node* temp = current->right;
                delete current;
                return temp;
            } else if (current->right == nullptr) {
                Node* temp = current->left;
                delete current;
                return temp;
            }

            Node* temp = findMin(current->right);
            current->key = temp->key;
            current->right = deleteRecursive(current->right, temp->key);
        }

        return current;
    }

    bool searchRecursive(Node* current, int key) {
        if (current == nullptr) {
            return false;
        }

        if (key == current->key) {
            return true;
        } else if (key < current->key) {
            return searchRecursive(current->left, key);
        } else {
            return searchRecursive(current->right, key);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int key) {
        root = insertRecursive(root, key);
    }

    void remove(int key) {
        root = deleteRecursive(root, key);
    }

    bool search(int key) {
        return searchRecursive(root, key);
    }
};

int main() {
    BinaryTree bt;
    bt.insert(50);
    bt.insert(30);
    bt.insert(70);
    bt.insert(20);
    bt.insert(40);
    bt.insert(60);
    bt.insert(80);

    std::cout << "Searching for 40: " << std::boolalpha << bt.search(40) << std::endl;
    std::cout << "Searching for 100: " << std::boolalpha << bt.search(100) << std::endl;

    bt.remove(30);
    std::cout << "Searching for 30 after deletion: " << std::boolalpha << bt.search(30) << std::endl;

    return 0;
}
