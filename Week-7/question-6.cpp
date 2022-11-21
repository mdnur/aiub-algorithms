#include <iostream>
#include <stack>
using namespace std;

class Student{
    private :
        int id;
        string name;
        double cgpa;
    public:
        student(int id,string name ,double cgpa){
            this->id =id;
            this->name = name;
            this->cgpa =cgpa 
        }
        int getID(){
            return this->id;
        }
        string getName(){
            return this->name;
        }
        double getCgpa(){
            return this->cgpa:
        }
        void setID(int id){
            this->id = id;
        }
        void setName(string name){
            this->name = name;
        }
        void setDouble(double cgpa){
            return this->cgpa = cgpa;
        }

};

int main()
{
    stack<student> studentStack;

    ofstream fin("cgpa.txt");

    int idd;
    string namee;
    double ccgpa;

    for (int i = 0; i < 3; i++)
    {
        fin>>idd>>namee>>ccgpa;
        Student s(idd,namee,ccgpa);
        studentStack.push(s);

    }

        while (!s.empty())
    {       
        cout << s.top() << endl;
        s.pop();
    }
    
    
    return 0;
}