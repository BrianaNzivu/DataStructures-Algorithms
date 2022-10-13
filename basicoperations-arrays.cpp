#include<iostream>
using namespace std;

int main(){
	double myArray[] = {1, 4, 5 , 9 , 10.2, 20, 21};
	double sum;
	double count;
	double average;
	
	for(const double &n : myArray)
	{
	cout<<n<<" ";	
	}
	
	//Calculating sum
	sum += n;
	
	//Getting the array count 
	
	++count;
	
	//calculating average
	
	average = sum/count;
	
	cout<<"The sum is: "<<sum<<endl;
	
	cout<<"The average is"<<average<<endl;
}
