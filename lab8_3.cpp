/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,height,bounty;
    cout<<"Enter your age: ";
    cin>>age;
    /*cout<<"Enter your height: ";
    cin>>height;
    cout<<"Enter your bounty: ";
    cin>>bounty;*/
    if(age<=25){
        cout<<"Enter your height: ";
        cin>>height;
        if(height<100){
            cout<<"Your character = Chopper";
            //return 0;
        }
        else if(height<180){
            cout<<"Your character = Usopp";
            //return 0;
        }
        else{
            cout<<"Enter your bounty: ";
            cin>>bounty;
            if(bounty<=1100000000){
                cout<<"Your character = Sanji";
            }
            else{
                cout<<"Your character = Zoro";
            }
        }

    }
    else if(age<=60){
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty>500000000){
            cout<<"Your character = Jinbe";
        }
        else{
            cout<<"Your character = Franky";
        }
    }
    else{
        cout<<"Your character = Brook";
    }
    return 0;
}