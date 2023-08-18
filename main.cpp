#include"Hedder.h"
void mainlist (){
    system("cls");
    cout<<"-------------------------------------------\n";
    cout<<"               Super Market                \n";
    cout<<"-------------------------------------------\n\n";
    cout<<"1-admin:\n";
    cout<<"2-buy:\n";
    cout<<"3-close:\n";
    cout<<"chose option in the list\n";
}
void adminlist (){
    system("cls");
    cout<<"admin list :\n"; 
    cout<<"1- add product :\n";
    cout<<"2- edit proudct :\n";
    cout<<"3- delete proudct :\n"; 
    cout<<"4- back :\n";
    cout<<"chose option in the list\n";
}
void add_proudct (){

}
void buylist (){


}
int main(){
    bool loop=true;
    while(loop){
        mainlist();
        int choise ; cin>> choise ; 

        if(choise==1){
                bool loop2=true;
                while(loop2){
                adminlist();
                int ch ;cin>> ch;
                product obj ; 
                if(ch==1){
                    bool ans =true; 
                    while(ans){
                        system("cls"); 
                        string code , name ; int salary ; 

                        cout<< "enter code product:\n"; cin>>code ;
                        cout<<"enter name product:\n"; cin>>name ;
                        cout<< "enter salary product:\n"; cin>>salary ;

                        obj.add_product(code , name ,salary); system("cls");
                        cout<< "are you want add again [y/n] :\n";
                        char input ; cin>> input ;
                        if(input =='n'|| input == 'N')
                            ans=false;
                    }
                }
                else if(ch==2){

                }  
                else if(ch==3){

                }
                else if( ch==4)
                    break;
            }
        }

        else if(choise==2){
            buylist();
            int ch ; cin>> ch; 
        }
        else if(choise == 3){
            return 0 ; 
        }
    }
}
