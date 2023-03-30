#include <iostream>
using namespace std;

float potato() {
    cout<<" potato  = Rs.50";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*50<<endl;
    return quantity*50;
}

float kitkat() {
    cout<<"kitkat = Rs. 70";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*70<<endl;
    return quantity*70;
}

float cookies() {
    cout<<"cookies = Rs. 100";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*100<<endl;
    return quantity*100;
}

float flowervase() {
    cout<<"flowervase 1kg = Rs.400";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*400<<endl;
    return quantity*400;
}

float wheat() {
    cout<<"wheat = Rs.50";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*50<<endl;
    return quantity*50;
}

float egg() {
    cout<<"egg = Rs. 10";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*10<<endl;
    return quantity*10;
}

int main() {
    int option;
    float baseamount, totalamount, r1, r2, r3, r4, r5, r6;
    cout<<"\t\tkarthik raja M\n";
    cout<<"\t\t goverment arts college karur\n ";
    cout<<"\t supermarket  Management System\n ";
    
    cout<<"\t\tWelcome to KRM supermarket\n";
start:
    cout<<"\n1. potato\n2.kitkat\n3. cookies\n4. flowervase\n5. wheat\n6. egg\n7. Exit\n";
    cout<<"Enter your choice: "; cin>>option;
    
    switch(option) {
        case 1:
            r1=potato();
            break;
        case 2:
            r2=kitkat();
            break;
        case 3:
            r3=cookies();
            break;
        case 4:
            r4=flowervase();
            break;
        case 5:
            r5=wheat();
            break;
        case 6:
            r6=egg();
            break;
        case 7:
            cout<<"Thank you for your purchase!\n";
            cout<<"Visit again. Bye!\n";
            exit(0);
        default:
            cout<<"Invalid input!";
            goto start;
    }
      
    totalamount=r1+r2+r3+r4+r5+r6;
    cout<<"\nThe total cost is: "<<totalamount<<endl;
    goto start;

    return 0;
}

