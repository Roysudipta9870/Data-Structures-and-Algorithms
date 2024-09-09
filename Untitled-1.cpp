#include<iostream>
using namespace std;





class Animal{

    public:

    int age;
    int weight;
    string name;

    Animal(int age){
        this->age = age; 
        cout << "Hi first is called"<< endl;
    }

         Animal(int age, int weight, string name){
            this->age = age;
            this->weight = weight;
             this->name = name;
             
                 cout << "Constructor is called" << endl;


            
}
    Animal(Animal &obj){
                    this->age = obj.age;
                    this->weight = obj.weight;
                    this->name = obj.name;
                 }

};
int main (){







Animal* c =  new Animal (107,100,"SHER");

Animal a(39);
Animal *b = new Animal(*c);
cout<< b->name;
cout <<'\n';
cout<< a.age;
cout <<'\n';
Animal polta(*b);
cout <<polta.weight;









    return 0;

}