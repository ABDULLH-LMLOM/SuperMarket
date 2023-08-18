#include<iostream >
#include<fstream>
#include<string>
using namespace std ; 
class product {
private:
    string code ; 
    string name ;
    int salary ;

public:
    void add_product(string code, string name, int salary ); 
    void edit_product (string code ,string name , int salary);
    void delete_product();
    
};
class admin {}; 
class  buyer {};