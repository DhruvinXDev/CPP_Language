#include<iostream>
#include<vector>
using namespace std;
class Inventory 
{
    string name;
    float  price;
    int quantity,id;
    public :
    void add_item()
    {
        cout<<"Enter the id of the item : ";
        cin>>id;
        cout<<"Enter the name of the item : ";
        cin>>name;
        cout<<"Enter the price of the item : ";
        cin>>price;
        cout<<"Enter the quantity of the item : ";
        cin>>quantity;
    }
    void display_details( ) const
    {
        cout<<"-----------------Item Details-----------------"<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Quantity : "<<quantity<<endl;
    }
    void update_quantity(int q)
    {
        if(q==0)
        {
            cout<<"Quantity can not be zero"<<endl;
            return;
        }
        quantity+=q;
    }
    void remove_stock(int q)
    {
        if(q>quantity)
        {
            cout<<"Stock is not available"<<endl;
            return;
        }
        quantity-=q;
    }
    float calculate_price(int q)
    {
        return price*q;
    }
    int get_id( )
    {
        return id;
    }
    int get_quantity()
    {
        return quantity;
    }
};

int main( )
{


    
    int num,number_items;
    short int choice=0;
    cout<<"Enter the number of items : ";
    cin>>number_items;
    num=number_items;
    vector<Inventory> item(number_items);
    for(int i=0;i<number_items;i++)
    {
        cout<<"-------Enter the details of item : "<<i+1<<" -------"<<endl;
        item[i].add_item();
    }
    x:
        cout << "----------------------------------------------"<<endl;
        cout << "----- welcome Inventory Management System -----"<<endl;
        cout << "------------------------------------------------"<<endl;
        cout << "1. Initialize New Item"<<endl;
        cout << "2. Remove Stock"<<endl;
        cout << "3. Add Stock"<<endl;
        cout << "4. Display Item Details"<<endl;
        cout << "5. Calculate Bill"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                int new_num;
                cout << "How many new item you want to add in inventory :";
                cin >> new_num;
                new_num += num;
                item.resize(new_num);
                for(int i=num;i<new_num;i++)
                {
                    cout<<"-------Enter the details of item : "<<i+1<<" -------"<<endl;
                    item[i].add_item();
                }
                num = new_num;
                
                break;
            }
                
            case 2:
            {
                int remove_id;
                cout << "Enter the ID of the ieam you want to remove : ";
                cin >> remove_id;
                for(int i=0;i<num;i++)
                {
                    if(item[i].get_id( )==remove_id)
                    {
                        int q;
                        cout << "Enter the quantity you want to remove :";
                        cin  >> q;
                        item[i].remove_stock(q);
                        break;
                    }
                }
                cout <<"You are successfully remove item form iventory !!"<<endl;
                
                break;
            }
                

            case 3:
            {
                int add_id;
                cout << "Enter the ID of the ieam you want to add : ";
                cin >> add_id;
                for(int i=0;i<num;i++)
                {
                    if(item[i].get_id( )==add_id)
                    {
                        int q;
                        cout << "Enter the quantity you want to add :";
                        cin  >> q;
                        item[i].update_quantity(q);
                        break;
                    }
                }
                cout <<"You are successfully add item in inventory !!"<<endl;
                break;
            }
            case 4:
            {
                int display_id,id;
                cout << endl<<"Enter the ID of the ieam you want to display : ";
                cin >> display_id;
                for(int i=0;i<num;i++)
                {
                    id=item[i].get_id( );
                    if(id==display_id)
                    {
                        item[i].display_details();
                        break;
                    }
                }
                
                break;
            }
                
            case 5:
                {
                    
                cout<<"-----------------Bill-----------------"<<endl;
                float total_price=0;
                for(int i=0;i<num;i++)
                {
                    int q=item[i].get_quantity();
                    total_price+=item[i].calculate_price(q);
                }
                cout<<"Total bill amount is : "<<total_price<<endl;
                
                break;
                }

                

            default:
                cout << "Invalid choice"<<endl;
                break;
        }
        cout <<endl<<"Do you want to continue (1/0) : ";
        cin >> choice;
        if(choice==1)
        {
            goto x;
        }
        cout << endl<<"Thank you for using our system ."<<endl;
        cout << "-------------------------------------------------"<<endl;
        cout << "My name is : Dhruvin "<<endl<<"My ID is : 24CE137 "<<endl;
        return 0;
}
