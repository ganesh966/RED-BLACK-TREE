#include "structhead.h"
using namespace std;

node *mroot=NULL;

int main()
{
    l:
    cout<<"***************MENU****************"<<endl;
    cout<<"PRESS 1.INSERT"<<endl;
    cout<<"PRESS 2.TRAVERSE"<<endl;
    cout<<"Enter ur choice..."<<endl;
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            mroot=insert();
            break;
        }
        case 2:
        {
            inorder(mroot);
            break;
        }
        default:
        break;
    }
    goto l;
    return 0;
} 