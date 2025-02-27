#include <iostream>
#include <vector>
#include<chrono>
using namespace std;
using namespace chrono;
int addition(vector<int>& number)
{
    int total=0;
    for(int num : number)
    {
        total+=num;
    }
    return total;
}
int recusion_total =0;
int recursion(int length,vector<int>& r_number)
{
    if(length==0)
        return recusion_total;
    else
    {
        recusion_total += r_number[length-1] ;
        recursion(length-1,r_number);
    }
}


int main()
{
    int size;
    cout << "How many number ? ";
    cin >> size ;
    vector<int> numbers(size);
    cout << "Enter the number's"<<endl;
    for (int i=0;i<size;i++)
    {
        cin >>numbers[i];
    }

    high_resolution_clock clock;
    auto start = clock.now();

    int sum = addition(numbers);
    int r_sum = recursion(size,numbers);

    auto end = clock.now();
    duration<double> elapsed = end - start;
    
    cout << "Time taken: " << elapsed.count() << " seconds\n";

    cout <<"the sum is : "<<sum<<endl;
    cout  <<"the recursion sum is : "<< r_sum<<endl;

    return 0;
}
