#include<iostream>
using namespace std;

struct product {

    string name ;
    int qtt;
    float price;
    int id;
};

struct product p[50];
int  main( )
{
    int n,c=0,id;
    float cost =0;
    cout << "How many different product in your inventory : ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cout <<"------------------------------------------------------------"<<endl;
        cout<<"            --- Enter your "<<i+1<<" product data --- "<<endl;
        cout <<"------------------------------------------------------------"<<endl;
        cout << "Enter id of the product : ";
        cin >> p[i].id;
        cout << "Enter the name of the product : ";
        cin >> p[i].name;
        cout << "Enter quantity of an existing product : ";
        cin >> p[i].qtt;
        cout << "Enter the price of the product :";
        cin >> p[i].price ;
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
                if(id==p[i].id)
                {
                    int q;
                    cout << "Enter the quantity of this product : ";
                    cin >> q;
                    p[i].qtt += q;
           if(p[i].qtt<0)
           {
               cout << "Sorry !! ,Not enough quantity in your inventory ." << endl;
           }
                    break;
                }
            }
            c=0;
            goto x;
        }

        for(int i=0;i<n;i++)
        {
            cost += p[i].qtt*p[i].price;
        }

        cout << "------------------------------------------------------------"<<endl;
        cout << "Your total Bill is : "<<cost<<endl<<"Thank you purchase product ."<<endl;
        cout << "------------------------------------------------------------"<<endl;



    return 0;
}
