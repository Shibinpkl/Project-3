#include <iostream>
using namespace std;
int main() 
{
	int *ip;
	int arr[5];
	cout<<"Enter elements";
	for(int i=0;i<5;i++)
	{
	    cin>>arr[i];
	}
	ip = arr;
	cout<<"You entered";
	for (int x = 0; x < 5; x++) 
	{
		cout << *ip << endl;
		ip++;
	}
	return 0;
}
