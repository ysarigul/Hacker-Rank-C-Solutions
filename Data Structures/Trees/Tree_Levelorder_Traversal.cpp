
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

#include <queue>

void levelOrder(node * root) {
    
    queue<node*> q;
  
    
    //push the root
    q.push(root);
    
    while(!q.empty())
    {
        //Deque a node from front
        node* v= q.front();
        cout<< v->data<< " ";
        //enque the left children
        if(v->left!= NULL)
            q.push(v->left);
        //enque the right childeren
        if(v->right!= NULL)
            q.push(v->right);
        
        //pop visited node
        q.pop();
        
        
        
    }
  
}
