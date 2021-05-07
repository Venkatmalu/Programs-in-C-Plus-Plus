#include<iostream>

using namespace std;

class car
{
public:
    string car_name;
    int car_no;

    void setcarde(string name,int no)
    {
        car_name=name;
        car_no=no;
    }
};

class name : public car
{
  public:
      int car_id;
       void setcarid(int id)
       {
         car_id=id;
       }
};

class mile : public name
{
  public:
      int car_mile;
       void setcarmile(int mile)
       {
         car_mile=mile;
       }
       void display()
       {
           cout<<"The car name is "<<car_name<<" car no is "<<car_no<<" car id "<<car_id<<"car mileage is "<<car_mile<<endl;
       }
};

int main()
{
    name ford;
    ford.setcarde("ford",1);
    ford.setcarid(1234);
    name suziki;
    suziki.setcarde("suziki",2);
    suziki.setcarid(5678);
    mile car;
    car.setcarmile(30);
    car.display();
}
