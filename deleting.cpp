// Working with arrays - Deleting an object using functions
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
void deleteValues(){
//Ask user position to delete
    cout<<'Enter the desired location to delete: ';
    cin>>pos;

//Deletes object and shifs other objects
    for(i = pos; i<n; i++){
        myNumberArray[i] = myNumberArray[i+1];
        n--;
    }
}
void displayArray(){
    cout<<'Your current Array is: ';
    for (i=0; i<n; i++){
        cout<<myNumberArray[i]<' ';
    }
}
int main() {
    enterValues()
    deleteValues()
    diaplayArray()
}
