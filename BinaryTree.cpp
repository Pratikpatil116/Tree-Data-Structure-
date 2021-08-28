#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;

    return element;
}

void printNode(node* n){  
    while (n!=NULL){
        cout<<n->data<<" ";
        n=n->left;
    }
    cout<<endl;
}


int main(){

node* root = newNode(1);
root->left = newNode(2);
root->right = newNode(3);
root->left->left = newNode(4);
root->right->right = newNode(5);

printNode(root);

}