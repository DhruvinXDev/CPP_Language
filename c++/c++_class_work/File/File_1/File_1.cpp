#include<iostream>
#include<fstream>
using namespace std;

int main ( )
{
    char ch;
    int ch_count=0,line=1;
    ifstream fr;
    ofstream fw;
    fr.open("input.txt");
    fw.open("output.txt");

    while(fr.get(ch))
    {
        if(ch=='\n')
        {
            line++;
        }
        
        ch_count++;
    }

    fw << "The number of charactor is : "<< ch_count<<endl;
    fw <<"The number of line is : " << line<<endl;
    fr.close();
    fw.close( );


}