/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/
#include <unordered_map>

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    //we want to hold an array of visited nodes
   unordered_map<Node*,int> s;
    while(head !=NULL)
    {
        //if we have it in the hasmap that mans there is a cycle
        if (s.find(head)!=s.end())
            return true;
        
        //if we see it for the first time, put it in
        s[head] =1;
        head=head->next;
        
        
    }
    
    return 0;
}
