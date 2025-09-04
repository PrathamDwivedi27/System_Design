#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    private:
        string name;
        string model;
        int noOfTyres;

        
    public:

        Vehicle(string _name,string _model, int _noOfTyres){
            this->name=_name;
            this->model=_model;
            this->noOfTyres=_noOfTyres;
        }

        string getName(){
            return this->name;
        }

        string getModel(){
            return this->model;
        }

        void start_engine(){
            cout<<"Start the engine for"<<this->name<<"with model"<<this->model<<endl;
        }

        void stop_engine(){
            cout<<"Stop the engine for"<<this->name<<"with model"<<this->model<<endl;
        }

        ~Vehicle(){
            cout<<"This is parent Vehicle deconstructor"<<endl;
        }
};

class Car: public Vehicle{
    private:
        int noOfDoors;
        string transmission_type;

    public:
        Car(string name,string model, int noOfTyres, int noOfDoors, string transmission_type):Vehicle(name, model, noOfTyres){
            this->noOfDoors=noOfDoors;
            this->transmission_type=transmission_type;
        }

        int getNoOfDoors(){
            return this->noOfDoors;
        }

        void start_AC(){
            cout<<"AC has started for "<<getName()<<endl;
        }

        ~Car(){
            cout<<"Car deconstroctur"<<endl;
        }
};

int main(){

    Car *c= new Car("Alto","mc",4,4,"air");
    c->start_AC();

    return 0;
}