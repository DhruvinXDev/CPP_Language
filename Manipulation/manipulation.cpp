#include<iostream>
#include<iomanip>
using  namespace  std;
int main ()
{
    cout<<375.7216<<endl; //coman output
    cout<<setprecision(2)<<375.7216<<endl; //3.7 e+002 output will be consider with the first digit
    cout<<fixed<<setprecision(2)<<375.7216<<endl;// output will be consider after the dot(.) 
    cout<<setbase(8)<<9<<endl; // 9 no base set kerse
    cout<<setw(7)<<setfill('0')<<"12399"<<endl; // blank space ne '0' thi fill kerse 
    cout<<right<<setw(7)<<"12399"<<endl; // right side print thase
    cout<<left<<setw(7)<<"12399"<<endl; // right side print thase
    system("CLS");//clear the screen
    return 0;
}
