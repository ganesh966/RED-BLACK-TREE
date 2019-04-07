#ifndef STRUCTHEAD
#define STRUCTHEAD

struct node 
{
    int data;
    struct node *left,*right,*parent;
    bool color;

};

#include<bits/stdc++.h>
node* insert();
void inorder(node *mroot);
#endif