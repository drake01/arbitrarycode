#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<double> stud_marks (5);
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter marks for student #"<<i+1<<":";
		cin>>stud_marks[i];
		}
}
