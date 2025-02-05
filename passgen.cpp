#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generate(int length){
    string all = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm123456789!@#$%|&*";
    string password = "";
    for(int i=0; i<length; i++){
        int random = rand()% all.size();
        password = password + all[random];
    }

    return password;
}

int main(){
    srand(time(NULL));
    int length; //indicates the length of password 

    cout<<"Enter the length of password: ";
    cin>> length;
    string password= generate(length);
    cout<<"Your password is: "<< password<< endl;

}