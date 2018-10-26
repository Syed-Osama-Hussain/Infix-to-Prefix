#include <iostream>
#include "linkedlist.h"
#include "ExpressionTree.h"
using namespace std;

int main()
{
list *start;
string infix = "a*(b+c)-d";
string preFix = start->To_Prefix(infix);
cout<<"\nThe Prefix Expression is:"<<preFix<<endl<<endl;
Tree *root = NULL;
root->ConstructExpTree(&root,preFix);
root->Inorder_Traversal(root);
cout<<"\n\n";
system("pause");
}