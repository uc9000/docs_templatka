#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>

int main(int argc, char* argv[]){
    using namespace std;
    ofstream file("zad.txt");
    int count = 0;
    char* arg1 = argv[1];
    //cout << "argc = " << argc << ";   argv[1] = " << argv[1] << endl;
    if(argc == 2){
        if(strlen(arg1) > 4){
            cout << "Cos za duzo tego chyba..." << endl;
            return 0;
        }
        for(unsigned int i = 0; strlen(arg1) > i; ++i){
            if(!isdigit(arg1[i])){
                cout << "ERROR: Podaj liczbe calkowita";
                return 0;
            }
        }   

        count = stoi(arg1);
        
    }        
    else if(argc == 1){
        count = 50;
    }
    else{
        cout << "ERROR: Podaj max 1 arg";
        return 0;
    }

    for(int i = 0; i < count; ++i){
        file << "Zad " << i + 1 << ": " << endl << "Odp "<< i + 1 << ": " << endl << endl;
    }
    file.close();
}
