#include "Hedder.h"
void product::add_product(string code, string name , int salary ){ 
    fstream data ; 
    data.open("database.txt",ios::out);
    data<<code <<" "<< name << " " << salary <<"\n";
    data.close();

}
void product::edit_product(string code, string name , int salary ){

}
void product::delete_product( ){

}