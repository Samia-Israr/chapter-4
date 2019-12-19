#include<iostream>
using namespace std;
int main(){
	int a=1,n;
	int firstmax=0,secondmax=0;
    while(a<=10){
    		cout<<"Enter Ten Numbers: ";
        	cin>>n;	
			
		if(firstmax<n)
		{
			secondmax=firstmax;
			firstmax=n;
		}
		else if(secondmax<n)
		{
			secondmax=n;
		}
        a++;
    }
        cout<<"First Maximum Number is"<<"="<<firstmax<<"\n";
        cout<<"Second Maximum Number is"<<"="<<secondmax<<"\n";
    return 0;
}

