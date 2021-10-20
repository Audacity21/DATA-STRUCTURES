
// C++ program to print level order traversal 
// of a Tree

#include <iostream> 
#include <queue> 
using namespace std; 

// A Binary Tree Node 
struct node 
{ 
    int data; 
    struct node *left, *right; 
}; 

// function to create a new tree node 
node* newnode(int data) 
{ 
    node *temp = new node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

// Function to print Level Order Traversal 
// of the Binary Tree
void levelorder(node *root) 
{ 
    // Base Case 
    if (root == NULL) 
    return; 

    // Create an empty queue for 
    // level order tarversal 
    queue<node *> q; 

    // Enqueue Root and initialize height 
    q.push(root); 

    while (q.empty() == false) 
    { 
        // Print front of queue and remove 
        // it from queue 
        node *tmp = q.front(); 
        cout << tmp->data << " "; 
        q.pop(); 

        /* Enqueue left child */
        if (tmp->left != NULL) 
            q.push(tmp->left); 

        /* Enqueue right child */
        if (tmp->right != NULL) 
            q.push(tmp->right); 
    } 
} 

// Driver Code 
int main() 
{ 
    // Create the following Binary Tree
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5
    
    node *root = newnode(1); 
    root->left = newnode(2); 
    root->right = newnode(3); 
    root->left->left = newnode(4); 
    root->left->right = newnode(5); 

    cout << "Level Order traversal of binary tree is \n"; 
    levelorder(root); 
    
    return 0; 
} 
