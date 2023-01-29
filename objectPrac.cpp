#include<iostream>
using namespace std;
class student{
public:
int id;
string name;
int marks;


student(int id, string name, int marks)
{
    this->id = id;
    this->name = name;
    this->marks = marks;


}


int Getmarks()
{
    return marks;
}
string Getname()
{
    return name;
}
int GetID()
{
    return id;
}


};

int main()
{


    student s;
    s.name("diboo");
  s.student(100, "Dinosaur", 88)
    return 0;

}
