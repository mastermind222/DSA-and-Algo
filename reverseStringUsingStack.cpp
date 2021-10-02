#include<iostream>
#include<string>
using namespace std;

struct Node{
    char data;
    struct Node * next;
};

struct Node * top = NULL;

int isFull(){
    struct Node * n = (struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}


void push(char val){
    if(isFull()){
        cout<<"Stack overflow cant push"<<val<<endl;
    }else{
        struct Node * n = (struct Node*)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
    }
}

char pop(){
    if(isEmpty()){
        cout<<"Stack underflow cant pop"<<endl;
        return -1;
    }else{
        struct Node * n = top;
        top = top->next;
        char x = n->data;
        free(n);
        return x;
    }
}


void display(struct Node * top){
    cout<<"Stack from top to bottom is"<<endl;
    while(top!=NULL){
        cout<<top->data<<endl;
        top = top->next;
    }
}

string reverseStr(string str){
    string revStr = "";
    for(int i=0;i<str.length();i++){
        push(str[i]);
    }

    while(!(isEmpty())){
        revStr+=pop();
    }

    return revStr;
}

int main()
{

    cout<<"Enter your string:"<<endl;
    string str;
    cin>>str;

    cout<<"It's reversed version is = "<<reverseStr(str)<<endl;
    return 0;
}
