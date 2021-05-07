#include<iostream>

using namespace std;

class student
{
public:
    string name;
    int roll_no;

   void display(int i)
    {
        cout<<i<<" name is : "<<name<<" and Roll_no is : "<<roll_no<<endl;
    }
};

int main()
{
   student mani;
   int i=1;
   student *muthu=new student();

   mani.name="mani";
   mani.roll_no=1818112;
   mani.display(i);
   i++;
   muthu->name="muthu";
   muthu->roll_no=1818115;
   muthu->display(i);

   return 0;
}
