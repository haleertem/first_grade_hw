#include <iostream>
using namespace std;

class Student{
private:
  string name,surname;
  int stdgrd[3];

public:

 void setGrade(int g){
  for(int index=0; index<3; index++){
    stdgrd[index]=g;
  }
  };
 

 void setName(string n){
   name=n;
 };

 void setSurname(string sn){
   surname=sn;
 };
void print(){
  cout<<"Name:"<<this->name<<endl;
  cout<<"Surname:"<<this->surname<<endl;
  cout<<"Avarage Grade:"<<calculate()<<endl;
  

};
 int calculate(){
  return (stdgrd[0]+stdgrd[1]+stdgrd[2])/3;
 }
};

int main() {

  Student *stdlist=NULL;
     stdlist=new Student[5];
     string name, surname;
      int stdgrd[3];
      string g;

  if(stdlist!=NULL)
    for(int i=0; i<5; i++){
      cout<<"Enter name:"<<endl;
      cin>>name;
      cout<<"Enter surname:"<<endl;
      cin>>surname;
      cout<<"Please enter 3 grades of the student"<<endl;
   for(int i=0; i<3; i++){
    cin>>stdgrd[i];
   }
    
      stdlist[i].calculate();
     stdlist[i].setName(name);
     stdlist[i].setSurname(surname);
     }; 
      for(int i=0; i<5; i++){
        stdlist[i].print();
      };
    
    };
