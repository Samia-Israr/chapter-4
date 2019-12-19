#include<iostream>
using namespace std;
int main()
{
	int input,first,second,third,fourth,r,org;
	cout<<"Enter 4 digit value ";
	cin>>input;
	r=input%10;
	input=input/10;
	fourth=r;
	r=input%10;
	input=input/10;
	third=r;
	r=input%10;
	input=input/10;
	second=r;
	r=input%10;
	input=input/10;
	first=r;
	
	
	first = (first+7)%10;
	second = (second+7)%10;
	third = (third+7)%10;
	fourth = (fourth+7)%10;
	
	cout<<"The original text is "<<org<<"\n";
	cout<<"The encrypted text is "<<third<<fourth<<first<<second;
	
	
	
	
	
}
