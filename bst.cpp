#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
};

Node* insert(Node* root,int x){
    if(!root){
        root=new Node;
        root->data=x;
        root->left=root->right=NULL;
        return root;
    }
    if(x<root->data) root->left=insert(root->left,x);
    else if(x>root->data) root->right=insert(root->right,x);
    return root;
}

void inorder(Node* r){
    if(r){
        inorder(r->left);
        cout<<r->data<<" ";
        inorder(r->right);
    }
}

void preorder(Node* r){
    if(r){
        cout<<r->data<<" ";
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(Node* r){
    if(r){
        postorder(r->left);
        postorder(r->right);
        cout<<r->data<<" ";
    }
}

Node* search(Node* r,int x){
    return (!r||r->data==x)?r:(x<r->data?search(r->left,x):search(r->right,x));
}

Node* del(Node* r,int x){
    if(!r) return r;
    if(x<r->data) r->left=del(r->left,x);
    else if(x>r->data) r->right=del(r->right,x);
    else{
        if(!r->left){
            Node* t=r->right;
            delete r;
            return t;
        }
        if(!r->right){
            Node* t=r->left;
            delete r;
            return t;
        }
        Node* t=r->right;
        while(t->left) t=t->left;
        r->data=t->data;
        r->right=del(r->right,t->data);
    }
    return r;
}

int height(Node* r){
    return !r?0:1+max(height(r->left),height(r->right));
}

int main(){
    Node* root=NULL;
    int ch,x,n;

    do{
        cout<<"\n1.Create\n2.Insert\n3.Inorder\n4.Preorder\n5.Postorder\n6.Search\n7.Delete\n8.Height\n9.Exit\n";
        cin>>ch;

        switch(ch){
            case 1:
                cin>>n;
                while(n--){
                    cin>>x;
                    root=insert(root,x);
                }
                break;
            case 2:
                cin>>x;
                root=insert(root,x);
                break;
            case 3:
                inorder(root);
                break;
            case 4:
                preorder(root);
                break;
            case 5:
                postorder(root);
                break;
            case 6:
                cin>>x;
                cout<<(search(root,x)?"Found":"Not Found");
                break;
            case 7:
                cin>>x;
                root=del(root,x);
                break;
            case 8:
                cout<<"Height = "<<height(root);
                break;
        }
    }while(ch!=9);
}