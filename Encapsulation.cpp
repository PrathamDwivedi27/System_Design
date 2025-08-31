#include <bits/stdc++.h>
using namespace std;


class Student {
    private:

    // Attributes
    int id;
    string name;
    int noOfSubjects;
    float *gpa;
    int age;
    string gfName;


    public: // constructors are always in public 
    // Constructor
    Student(){
        cout<<"Default Constructor Called"<<endl;
    }

    // Parameterized Constructor
    Student(int id, string name, int age, int noOfSubjects,float gpa,string gfName){
        this->id = id;
        this->name = name;
        this->age = age;
        this->noOfSubjects = noOfSubjects;
        this->gpa = new float(gpa);
        this->gfName=gfName;
    }

    // getters and setters
    float getGpa(){
        return *this->gpa;
    }

    void setGpa(float gpa){
        if(gpa<0 || gpa>10){        // extra layer of protection
            cout<<"Invalid GPA"<<endl;
            return;
        }
        *this->gpa=gpa;
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

    private:
    
    void gfChatting(){
        cout<<this->name<<"is chatting with "<<this->gfName<<endl;
    }
};

int main(){

    Student *A= new Student(103, "charlie", 22, 7,9.8,"Beyonce");
    A->Eating();
    delete A;   // Freeing up the memory


    return 0;
}

// Here , we added extra layer of protection by making gpa attribute private
// and providing public getters and setters to access and modify it.// Also we made gfChatting method private so that it cannot be accessed outside the class