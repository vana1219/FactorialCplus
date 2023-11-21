#include"BigInt.cpp"
#include<iostream>
#include<fstream>


using namespace std;

int main(){


    BigInt<int> bigInt;
    ofstream outFile("myFile.txt");

    outFile<<"\n            THIS IS A FACTORIAL FILE            \n";
    int num;
    char ans;
    cout<<"Would you want to calculate a factorial.Enter 'y' or 'Y' for yes:";
    cin>>ans;
    while(ans =='y' || ans=='Y'){
        cout<<"\nEnter number of factorial that you want to calculate. From 1 to 500: ";
        cin>> num;
        cout<<"\n";
        while(num<1 || num>500){
            cout<<"Please enter a valid number!";
            outFile<<"\nIt's invalid number. Please try with valid number.\n";
            cin>> num;
        }
        bigInt.Factorial(num);
        outFile<<"\n";
        outFile<<"Factorial of "<<num <<" is:\n";
        bigInt.Print(outFile);

        //Destructor of the liked list. Reset the linked list.List back to null again.
        bigInt.~BigInt();
        cout<<"Would you want to calculate another factorial:";
        cin>>ans;
    }
    cout<<"\nHAVE A NICE DAY!!!\n";
    outFile<<"\nHAVE A NICE DAY!!!\n";
    return 0;
}