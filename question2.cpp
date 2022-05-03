#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct product {
    string name;
    int price;

};

int main(){
    
    product prod1;

        prod1.name="bike";
        prod1.price= 100;

    product prod2;

        prod2.name="TV";
        prod2.price=200;

    product prod3;
        prod3.name="Album";
        prod3.price=10;

    product prod4;
        prod4.name="book";
        prod4.price=5;

    product prod5;
        prod5.name="phone";
        prod5.price=500;
    product prod6;
        prod6.name="Computer";
        prod6.price=1000;
    
    product allprods[6]={prod1,prod2,prod3,prod4,prod5,prod6};
    int i=0,j=0,a,sum=0,sum2=0;
    int max=allprods[0].price;
    int min= allprods[0].price; 
    for(i = 0; i < 6; i++){
        if(allprods[i].price < min){
            min = allprods[i].price;
            a=i;
        }
    }

    cout << "the cheapest product is " <<allprods[a].name;

    for(i = 0; i < 6; i++){
        sum=sum+allprods[i].price;
        if(allprods[i].price > max){
            min = allprods[i].price;
            a=i;

        }
        if(allprods[i].price>=10){
            sum2+=allprods[i].price;
        }
    }

    cout << "\nthe expensive product is " <<allprods[a].name;

    cout << "\nthe full price is " <<sum;

    cout << "\nthe full price with product under 10$ is " <<sum2; //i did not include the products that equal to 10$
    return 0;
}