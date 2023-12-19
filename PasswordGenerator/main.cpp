#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string passwordGenerator(int length){
    string password="";
    const string symbols="qwertyuiopasdfghjklzxcvbnm";
    const int symbolsLength=symbols.length();
    srand(time(0));
    for(int i=0; i<length; i++){
        
        int randomizer=rand()%symbolsLength;
        
        password+= symbols[randomizer];
        
    }return password;
    
}

 
int main() {
    int userInput;
    cout<<"Hello,i can generate a password.How many symbols it should have ? "<<endl;
    
    cin >> userInput;
    
    if(userInput>8&&userInput<30){
        
        cout<< "Your password is :  "<<passwordGenerator(userInput)<<endl;
        
    }else if(userInput<=8||userInput>29){
        
        cout<< "Your Input is not valid, it must be between 8 and 30"<<endl;
        
    }
    
    
    
    
    return 0;
}
