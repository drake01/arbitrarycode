#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <double> student_marks(3);
	
	for(int i=0;i<3;i++)
	{ cout<<"Enter marks of student #"<<i+1<<" :";
	cin>>student_marks[i];
		}
}
 /*
#include <iostream>
    #include <vector>
    using namespace std;

    int main()
    {
        vector<double> student_marks (20);

        for (int i = 0; i < 20; i++)
        {
            cout << "Enter marks for student #" << i+1 << ": ";
            cin >> student_marks[i];
        }

        return 0;
    }
*/
