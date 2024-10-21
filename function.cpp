#include <iostream>

using namespace std;

int sum(int, int);
int sub(int, int);
int mul(int, int);
int divide(int, int);
int mol(int, int);




int main(){

    int a,b,choise;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;

   


    cout<< "Press 1 for + " <<endl;
    cout<< "Press 2 for - " <<endl;
    cout<< "Press 3 for *" <<endl;
    cout<<"Press 4 for /" <<endl;
    cout<< "Press 5 for %" <<endl;
    cout<<"Press 0 for the exit" <<endl;


    do{
        cout<<"\nenter Choise : ";
        cin>>choise;

        switch (choise)
        {
        case 1:
               
            cout<<sum(a, b)<<endl;
            

            break;
        case 2:
            
            cout<<sub(a, b)<<endl;

        break;

        case 3:
        
            cout<<mul(a, b)<<endl;


        break;

        case 4:
        
            cout<<divide(a, b)<<endl;



        break;
        
        case 5:
            cout<<mol(a, b);
            break;

            
        case 6:
        cout<<"Exit";
        break;
        }


    }while(choise != 5);
return 0;
}

int sum(int a, int b){
 
    return a+b;
}

int sub(int a, int b){
 
    return a-b;
}
int mul(int a, int b){
   
    return a*b;
}
int divide(int a, int b){
   
    return a/b;
}
int mol(int a, int b){
   
    return a%b;
}