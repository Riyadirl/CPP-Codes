#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack< int > st;
    st.push(5);
    st.push(7);
    st.push(15);
    st.push(20);
    st.push(35);
    st.push(18);
    st.push(25);

    while(st.empty()==false)
    {
        st.pop();
    }

    if(st.empty() == true)
        cout << "Stack is Empty.\n";
    else
        cout << "Stack is not Empty.\n";


    cout << st.size() << endl;

    return 0;
}