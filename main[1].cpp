#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Library{
    public:
    int id;
    int price;
    int pages;
    char name[100];
    char author[100];
    char student[100];
};

int main(){
    Library lib[10];
    int input=0;
    int count=0;
    while(input!=3){
        m:
        cout<<"Enter '1' to fill details like book name, author name, id, your name etc."<<endl;
        cout<<"Enter '2' to show your details"<<endl;
        cout<<"Enter '3' to quit"<<endl;
        cin>>input;
    
    if(input==1){
        cout<<"Enter book id"<<endl;
        cin>>lib[count].id;
        
        cout<<"Enter book name"<<endl;
        cin>>lib[count].name;
        
        cout<<"Enter Author Name"<<endl;
        cin>>lib[count].author;
        
        cout<<"Enter Student Name"<<endl;
        cin>>lib[count].student;
        
        cout<<"Enter book Price"<<endl;
        cin>>lib[count].price;
        
        cout<<"Enter book Pages"<<endl;
        cin>>lib[count].pages;
        
        count++;
        
    }
    
    else if(input==2){
        for(int i=0;i<count;i++){
            cout<<"Book Id : "<<lib[i].id<<endl;
            cout<<"Book Name : "<<lib[i].name<<endl;
            cout<<"Book Author Name : "<<lib[i].author<<endl;
            cout<<"student name : "<<lib[i].student<<endl;
            cout<<"Price of book : "<<lib[i].price<<endl;
            cout<<"Pages of book : "<<lib[i].pages<<endl;
        }
        
    }
    
    else if(input==3){
        exit(0);
        break;
    }
    else{
        cout<<"You have entered wrong value, try again"<<endl;
        goto m;
    }
    }
    
    
    
    
    
    
    
    
    
    
}