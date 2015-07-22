/*  This prompt was posted by a user on reddit, to calculate the cost of 
a taxi ride that is $12.00  per mile. The measurement is in blocks which is 1/8 
of a mile. the time constraint for wrtting this was 30 minutes. */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  double mile = 12.00;   //setting miles cost
	double block = (mile/8); // blocks are 1/8th of a mile. 
	int numblocks = 0; // initializing the number of blocks to zero 
	
	cout<<" we're going for a taxi ride";
	cout<<" insert the number of blocks you would like to travel: ";
	cin>>numblocks;
	double cost = numblocks * block;
	cout<< " the price is of your ride is $"<<cost<<endl; // prints cost

  system("Pause"); // pauses the screen
  return(0);
}
