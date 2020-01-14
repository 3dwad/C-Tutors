#include <iostream>
#include <string>
using namespace std;

void AddtoCount()
{

	static int count = 0;			// Static for int variable. Variable will create one time, but operands will work every time
									// It will reserved memory till the end of program.
	count++;
	cout << count << endl;
	
}

int main()
{ 

	for (int locI = 0;locI<7;locI++)
	{
		AddtoCount();
	}

	count--;			// Static variable unavailable from out. But exist...Paradox
}