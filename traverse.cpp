#include "structhead.h"
using namespace std;

void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" "<<"color:";
        root->color?cout<<"RED"<<endl:cout<<"BLACK"<<endl;
        inorder(root->right);
    }
}