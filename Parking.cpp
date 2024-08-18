#include <iostream>
using namespace std;
int main(){
    int i;
    int capacity=100;
    int amount=0;
    int count=0;
    int bike=0, car=0, bus=0;
    //Menu
    cout<<"Press 1 for the entry of the bike Rs.100"<<endl;
    cout<<"Press 2 for the entry of the car Rs.200"<<endl;
    cout<<"Press 3 for the entry of the bus Rs.300"<<endl;
    cout<<"Press 4 see the all the entries"<<endl;
    cout<<"Press 5 to delete all the entries"<<endl;
    cin>>i;

    //for bike(1)
    if(count =< capacity){
        if(i==1){
        amount= amount+100;
        count++;
        bike++;
        }
    }
    else{
        cout<<"Capacity is full";
    }




    return 0;
}