#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x;
	
		cout<< "Enter a number to determine the state of matter of water: ";
		cin>> x;
	
	if (x <= 0)	
	{
		cout<<"ICE";
    }  
		else if	(x > 100)
		{
			cout<<"STEAM";
		}
		else
		{
			cout<<"WATER";
		}

	return 0;
}
