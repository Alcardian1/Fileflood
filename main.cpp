#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    srand(time(0));
    cout << "FileFlood beta" << endl;
    cout << "Name: ";
    
    string name;
    int number;
    int text;
    int size = 1000000;
    string choose;
    cin >> name;
    cout << "How many files: ";
    cin >> number;
    cout << "65MB data each file?(if no it will be 6,35BM) y/n: ";
    cin >> choose;
    if (choose == "y")
    {
               size = 10000000;
    }
    ofstream write;
    string named;
    char i = 48;
    
    for (int k=0;k < number; k++)
    {
        named = name;
        named += "                                                      ";
        named += i;
        named += ".txt";
        i++;
        write.open(named.c_str());
        if(write)
        {
                  for(int b=0;b < size; b++)
                  {
                            text =rand()%1000000000+1;
                            write << text << "\n";
                  }
                  cout << "file created at the programs location :D" << endl;
                  
        }
        else
        {
        cout << "ERROR!" << endl;
        }
        write.close();
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
