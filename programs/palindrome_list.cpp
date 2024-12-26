
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */

Node * getnode(Node *head,int pos)
{
    Node *tmp;
    int idx=0;
    tmp = head;
    while(idx != pos)
    {
        tmp = tmp->next;
    }
}
int getsize(Node *head)
{
    int size;
    Node *tmp = head;
    size=0;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
        size++;
    }
}
bool isPalindrome(Node *head)
{
    Node *left,*right,*tmp;
    int count,idx,lmid,rmid;
    count = getsize(head);
    if(count %2 == 0)
    {
     //even size. 0,1,|2,3|,4,5 => mid,mid-1
     rmid = count/2;
     lmid = rmid-1;
    }
    else
    {
        //odd size.
        
        //0,1,|2|,3,4
        rmid = lmid = count/2;
    }
        while(rmid != (count-1))
     {
        left = getnode(head,lmid);
        right = getnode(head,rmid);
        if(left->data == right ->data)
        {
            lmid--;
            rmid++;
        }
        else
        {
         //not a palindrome
         return 0;
        }
     }
     //while got exausted
     return 1;
     }
     
     
    
    //Your code here
