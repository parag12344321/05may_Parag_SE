//Create a lecture management System
#include<iostream>
using namespace std;
class Lecture
{
public:
    // Declare the data member
    string lecturerNm;//Lecturer Name
    string subjectNm;//Subject Name
    string courseNm;//Course Name
    int NoOflecture;//Numbers of lecture

    Lecture()//define constructor
    {
        cout << "Enter the Lecturer Name: ";
        cin >> lecturerNm;
        cout << "Enter the Subject Name: ";
        cin >> subjectNm;
        cout << "Enter the Course Name: ";
        cin >> courseNm;
        cout << "Enter the Number Of Lecture: ";
        cin >> NoOflecture;
    }
    // Show the data
    void display()
    {
        cout<< " The Lecturer Name is: " << lecturerNm<<endl;
        cout<< " \tThe Subject Name is: " << subjectNm<<endl;
        cout<< " \tThe Course Name is: " << courseNm<<endl;
        cout<< " \tThe Number of Lecture is: " << NoOflecture<<endl;
    }
           

};
int main()
{
    Lecture L1[5]; //declare object
    int i;
    for(i = 1; i <= 5; i++)
    {
       
    }
        
        for(i = 1; i <= 5; i++)
        {
            L1[i].display();//output
        }
    
    return 0;
}