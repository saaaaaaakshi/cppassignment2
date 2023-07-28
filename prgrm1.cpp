#include<iostream>
using namespace std;
int main(){
    int amt;
    cin>>amt;
    int n500,n100,n50,n20,n10,n5,n2,n1;
    n500=n100=n50=n20=n10=n5=n2=n1=0;
    switch(amt>=500){
        case 1:

            n500=amt/500;
            amt-=n500*500;
            break;
    }
    switch(amt>=100){
        case 1:

            n100=amt/100;
            amt-=n100*100;
            break;
    }
    switch(amt>=50){
        case 1:

            n50=amt/50;
            amt-=n50*50;
            break;
    }
    switch(amt >=20)
	{
		case 1:
			n20 = amt/20;
        	amt -= n20 * 20;
        break;
	}
	switch(amt >=10)
	{
		case 1:
			n10 = amt/10;
        	amt -= n10 * 10;
        break;
	}
    switch(amt >=5)
	{
		case 1:
			n5 = amt/5;
        	amt -= n5 * 5;
        break;
	}
	switch(amt >=2)
	{
		case 1:
			n2 = amt/2;
        	amt -= n2 * 2;
        break;
	}
    switch(amt >=1)
	{
		case 1:
			n1 = amt/1;
        	amt -= n1 * 1;
        break;
	}
    cout<<"Minimum no. of notes of 500 are:"<<n500;
  return 0;
}