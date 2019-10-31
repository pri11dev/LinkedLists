#include<bits/stdc++.h>
using namespace std;
class Stud
{public:
    int age;
    char * name;

    Stud(int age,char*name){
    this->age=age;
    this->name= new char[strlen(name)+1];
    strcpy(this->name,name);
    }
    Stud(Stud const &s)
    {
        this->age=s.age;
        this->name= new char[strlen(name)+1];
        strcpy(this->name,s.name);
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};
main()
{
    char name[]="absba";
    Stud S(12,name);
    Stud S2(S);
    S2.name[0]='b';
    S.display();
    S2.display();
}
