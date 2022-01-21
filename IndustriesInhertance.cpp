#include <iostream>

using namespace std;


//parent screen
class TouchTablet {
    protected:
    string tabletName;
    int price;
    public:
    TouchTablet(string tablet, int value){
        this ->tabletName = tablet;
        this ->price = value;
    }
    
    //function display
    void displaytablet(){
        cout << "\n name of the tablet " << tabletName << endl;
        cout << "Price of the tabler: " << price << endl;
    }
};

//parent buisness
class Car: public TouchTablet{
    string name;
    int id;
    
    public:

    //constructor with sub class constructor
    
    Car(string carName, int detailNum) : TouchTablet("Genis pad", 2000){
        cout << " \n Contructor called uploading data.." << endl;
        //self naming 
        this ->name = carName;
        this ->id = detailNum;
    }

    //function input 
    void enterDetail(){
        cin>>name;
        cin>>id;
    }

    //function output 
    void display(){
        cout << " \n Name of the company: " << name << endl;
        cout << "reference id: " << id << endl;
    }
    void terminate(){
        cout << " \n End of data" << endl;
    }

};



int main()
{


Car *c = new Car("Genis", 2020
);



c->display();

c->terminate();
c->displaytablet();




return 0;

}