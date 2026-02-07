#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;                   // store the value                   
    Node* next;                 // ponint to next node

    //constructor
    Node(int val){
        data = val;
        next = NULL;           //new node initially point to null
    }

};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;   //head and tell point to null, when list is initialize or empty    
    }
};


int main(){
    
}
