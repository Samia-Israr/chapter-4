#include<iostream>
using namespace std;
int main()
{
 int c=1,num;
 int firstmax=0, secondmax=0, thirdmax=0;
 while(c<=10){
 	cout<<"please enter value number "<<c<<"\n";
 	cin>>num;
 	if(firstmax<num){
 		thirdmax=secondmax;
 		secondmax=firstmax;
 		firstmax=num;
	 }
	 else if (secondmax<num){
	 	thirdmax=secondmax;
 		secondmax=num;
	 }
	 else if (thirdmax<num){
	 	thirdmax=num;

	 }
	 c++;
	 }
	 cout<<"the first maximum number"<<firstmax<<"\n";
	 cout<<"the second maximum number"<<secondmax<<"\n";
	 cout<<"the third maximum number"<<thirdmax<<"\n";
	  
    //10,11,16,7,20,17,19,21,
	
}
