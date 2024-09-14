#include<iostream>
using namespace std;

class poultry
{
    int chickTagNo[50];
    int chickPrice[50];
    int increment;
    public :
    void init_increment(){ increment = 0;}
    void setPrice();
    void displayPrice();
};

void poultry :: setPrice(){
    
    cout<<"Enter the tag no of the chicken :"<<increment+1<<endl;
    cin>>chickTagNo[increment];
    
    cout<<"Enter the Price of the chicken :"<<endl;
    cin>>chickPrice[increment];
    increment++;
    
}

void poultry :: displayPrice(){
    
    for (int i=0; i<increment;i++)
    {
        cout<<"The price of chicken with tagNo :"<<chickTagNo[i]<<" is :"<<chickPrice[i]<<endl;
    }
}
int main(){
    poultry chicken;
    chicken.init_increment();
   for(int i=0;i<3;i++){
   chicken.setPrice();
   }
    chicken.displayPrice();
    return 0;
    
}