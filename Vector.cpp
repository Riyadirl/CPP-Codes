#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< int > v;
    int n = 10;

    // lambda
    auto print = [&]()
    {
        for(int i=0; i<v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    };

    for(int i=1;i<=10;i++)
    {
        int temp = rand()%100;
        v.push_back(temp);
    }

    cout << "Before sorting >> ";
    print();


    /*sort(v.begin(), v.end());
    reverse(v.begin(), v.end());*/

    sort(v.begin(), v.end(), less< int >());

    cout << "After sorting >> ";
    print();


    return 0;
}