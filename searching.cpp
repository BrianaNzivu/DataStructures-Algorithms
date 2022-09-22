// Working with arrays - Searching an object using functions
//Prepared by Nzivu Briana

#include <iostream>
using namespace std;
int myNumberArray [100];
int i, n, searchkey;

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
void searchValues(){
//Ask user value to search
    cout<<"Enter value to search";
    cin>>searchkey;

    for(i=0; i<n; i++)
    {
        if(searchkey==arrayName[i])
        {
            cout<<searchkey<<" has been found at location " <<i;
            break;
        }
    }
    if(i>=n)
    {
        cout<<searchkey<<" was not found ";
    }
}

int main() {
    enterValues()
    searchValues()

}
