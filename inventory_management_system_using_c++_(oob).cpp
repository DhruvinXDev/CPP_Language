#include<iostream>
using namespace std;

class product {

    string name ;
    int qtt;
    float price;
public :
    int id;
    void add ( )
    {

        cout << "Enter id of the product : ";
        cin >> id;
        cout << "Enter the name of the product : ";
        cin >> name;
        cout << "Enter quantity of an existing product : ";
        cin >> qtt;
        cout << "Enter the price of the product :";
        cin >> price ;

    }
    void update( int x)
    {
           qtt += x;
           if(qtt<0)
           {
               cout << "Sorry !! ,Not enough quantity in your inventory ." << endl;
           }

    }
    float cost( )
    {
        float x=qtt*price;
        return x;
    }

};

int  main( )
{
    int n,c=0,id;
    float cost =0;
    cout << "How many different product in your inventory : ";
    cin >> n;
    product s[n];
    for(int i=0;i<n;i++)
    {
        cout <<"------------------------------------------------------------"<<endl;
        cout<<"            --- Enter your "<<i+1<<" product data --- "<<endl;
        cout <<"------------------------------------------------------------"<<endl;
        s[i].add( );
    }
    x:
        cout << "------------------------------------------------------------"<<endl;
        cout<< "Choice "<<endl<<"1) Update the quantity of an existing product."<<endl<< "0) exit" <<endl<<"Enter your choice  : ";
        cin >>c;
        if(c==1)
        {
            cout << "Enter the ID of the product you want to update : ";
            cin >>id;
            for(int i=0;i<n;i++)
            {
                if(id==s[i].id)
                {
                    int q;
                    cout << "Enter the quantity of this product : ";
                    cin >> q;
                    s[i].update(q);
                    break;
                }
            }
            c=0;
            goto x;
        }

        for(int i=0;i<n;i++)
        {
            cost += s[i].cost();
        }

        cout << "------------------------------------------------------------"<<endl;
        cout << "Your total Bill is : "<<cost<<endl<<"Thank you purchase product ."<<endl;
        cout << "------------------------------------------------------------"<<endl;



    return 0;
}
