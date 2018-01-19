/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    
    Node* node = new Node;
    node->data=data;
    
    if (head == NULL)
    {
        return node;
        
    }
    
    else{
        Node* last= head;
        int p= 0;
        
        if(position == 0)
        {
            node->next=head;
            return node;
            
        }
        
        while(last != NULL)
        {
            if(p== position-1)
            {
                
                node->next=last ->next;
                last->next=node;
                
                
                
            }
            else
            {
                last= last->next;
                
            }
            p=p+1;
            
            
        }
        return head;
        
    }
    
    
  // Complete this method only
  // Do not write main function. 
}
