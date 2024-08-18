#include <iostream>
using namespace std;
int main(){
while(ture){
    start:
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
    if(count <= capacity){
        if(i==1){
        amount= amount+100;
        count++;
        bike++;
        }

    //for car(2)
        else if(i==2){
        amount= amount+200;
        count++;
        car++;
        }

    //for car(3)
        else if(i==3){
        amount= amount+300;
        count++;
        bus++;
        }
    
    //for see details(4)
        else if(i==4){
        cout<<"\n*******************************************\n";
        cout<<"The total amount is: Rs."<<amount<<endl;
        cout<<"Total number of vehicles: "<<count<<endl;
        cout<<"Total number of bikes: "<<bike<<endl;
        cout<<"Total number of cars: "<<car<<endl;
        cout<<"Total number of buses: "<<bus<<endl;
        cout<<"*******************************************\n";
        }
    
    //for see details(5)
        else if(i==5){
        cout<<"\n*******************************************\n";
        amount=0;
        count=0;
        bike=0;
        car=0;
        bus=0;
        cout<<"Details deleted Successfully";
        cout<<"\n*******************************************\n";
        }

    //else condition
        else{
            cout<<"Invalid Input";
            goto start;
        }
    }
    else{
        cout<<"Capacity if full";
    }
}
    return 0;
}