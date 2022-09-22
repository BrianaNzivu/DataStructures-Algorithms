// Working with arrays - Replacing an object using functions
//Prepared by Nzivu Briana

#include <iostream>
using namespace std;
int myNumberArray [100];
int i, n, pos;

void enterValues() {
// Asks user to input the number of values in their array
    cout<<"How many values will you input? "
    cin>> n;
    cout<<"Enter the each value: "

// Displays the Original array before deletion
    for(i=0; i<n; i++){
        cin>>myNumberArray[i];
    }

    cout<<'Original values are '<<endl;
    for(i=0; i<n; i++) {
        cout<<myNumberArray[i]<' ';
    }
}
void insertValue(){
    cout<<"Enter the desired location where to insert";
    cin>>pos;
    //Shift values strating from the last value upto desired position
    for(i=n-1; i>=pos; i--)
    {
        arrayName[i+1] = arrayName[i];
    }
    cout<<"Enter new value";
    cin>>arrayName[pos];

    n++;

    cout<<"\nCurrent values are:";
    for(i=0; i<n; i++)
    {
        cout<<arrayName[i]<<" ";
    }
}
int main() {
    enterValues()
    insertValue()

}
