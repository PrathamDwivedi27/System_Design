#include <bits/stdc++.h>
using namespace std;


class Student {
    public:

    // Attributes
    int id;
    string name;
    int age;
    int noOfSubjects;
    int *gpa;


    // Constructor
    Student(){
        cout<<"Default Constructor Called"<<endl;
    }

    // Parameterized Constructor
    Student(int id, string name, int age, int noOfSubjects,float gpa){
        this->id = id;
        this->name = name;
        this->age = age;
        this->noOfSubjects = noOfSubjects;
        this->gpa = new int(gpa);
    }


    // Copy Constructor
    Student(const Student &s){
        this->id = s.id;
        this->name = s.name;
        this->age = s.age;
        this->noOfSubjects = s.noOfSubjects;
        this->gpa = new int(*(s.gpa));
    }

    // Methods / Functions / Behaviours

    void Sleeping(){
        cout<<this->name<<" is sleeping"<<endl;
    }

    void Eating(){
        cout<<this->name<<" is eating"<<endl;
    }

    void Studying(){
        cout<<this->name<<" is studying"<<endl;
    }

    // Destructor
    ~Student(){
        cout<<"Destructor Called for "<<this->name<<endl;
        delete gpa;
    }
};

int main(){
    // Student s1;
    // s1.id = 101;
    // s1.name = "bob";
    // s1.age = 20;
    // s1.noOfSubjects = 5;

    // s1.Sleeping();

    Student s2(102, "alice", 21, 6,9.8);
    s2.Studying();

    // Copy Object
    Student s3=s2;
    Student s4(s2);     // Another way of copying object

    s3.Eating();
    s4.Sleeping();

    Student *A= new Student(103, "charlie", 22, 7,9.8);
    A->Eating();
    delete A;   // Freeing up the memory






    

    return 0;
}