#include<iostream>
#include<queue>
using namespace std; 

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this-> data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insertINtoBst(Node* root,int d){
    //base case
    if(root ==NULL){
        root = new Node(d);

    //right part m insert karna h
    if(d>root->data){
        root->right = insertINtoBst(root->right,d);
    }
    else{
        root->left = insertINtoBst(root->left,d);
    }

    }
}
void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!= -1){
       root = insertINtoBst(root,data);
       cin>>data; 
    }
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    Node* temp = q.front();
    q.pop();
    if(temp == NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data <<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

}
int main(){
    
    
    return 0;
}