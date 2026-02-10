#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode; 
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printAll(){
        Node* temp = head;                   

        while(temp != NULL){                                    
            cout<<temp->data<<" ";

            temp = temp->next;                    
        }
        
        cout<<endl;
    }

    void pop_front(){

        if(head == NULL){
            cout<<"List is Empty"<<endl;
            return;
        }

        if(head == tail){                     
            delete head;
            head = tail = NULL;               
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;

    }

    void pop_back(){

        if(head == NULL){
            cout<<"List is Empty"<<endl;
            return;
        }

        if(head == tail){                    
            delete head;
            head = tail = NULL;
            return;
        }


        Node* temp = head;


        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;               
        tail = temp;
        
    }

    void insert(int val, int pos){
        if(pos < 0){
            cout<<"Invalid Index"<<endl;
            return;
        }

        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;

        for(int i = 0; i<pos - 1; i++){                  
            
            if(temp == NULL){
                cout<<"Out of range"<<endl;
                return;
            }

            temp = temp->next;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        if(newNode->next == NULL){                  
            tail = newNode;                   
        }

    }

    int search(int key){
        Node* temp = head;

        int cnt = 0;

        while(temp != NULL){
            
            if(temp->data == key){
                return cnt;
            }

            temp = temp->next;
            cnt++;
            
        }

        return -1;                              //if value is not exists
    }



    

};


int main(){
    List ll;

    ll.push_front(1);   
    ll.push_front(2);   
    ll.push_front(3);  
    
    ll.printAll();      //3 - 2 - 1

    ll.insert(4, 1);    //0-based index

    ll.printAll();      //3 - 4 - 2 - 1

    int ans = ll.search(1);   //it will return the index of 1  

    cout<<ans<<endl; //ans is 3


}
