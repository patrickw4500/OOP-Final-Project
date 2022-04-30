#include "Dyn_class.h"
//ostream& operator<<(ostream& out, const vector<any>& a)
//{
//
//    for (int i = 0; i < a->size(); i++)
//    {
//        out << a[i] << " ";
//    }
//    return out;
//}


int func(int a, int b, int c)
{
    cout << a << " " << b << " " << c << endl;
    return a;
}

int main()
{
    Dyn_class x;
    int input = -1;

    while (input != 0)
    {
        cout << "1 - Add a function" << endl;
        cout << "2 - Use a function" << endl;
        cout << "3 - Remove a function" << endl;
        cout << "0 - END" << endl;
        cin >> input;
        while (input < 0 || input > 3)
        {
            cout << "invalid input" << endl;
            cout << "try again" << endl;
            cin >> input;
        }

        if (input == 1)
        {
            x.add_func();
        }
        else if (input == 2)
        {
            x.use_func();
        }
        else if (input == 3)
        {
            x.remove_func();
        }
    }
    




    auto fn1 = bind(func, 1, 2, 3);
    auto fn2 = bind(func, 2, 1, 3);
    //^ problem: how to let users input their parameters
    //          ask them when they add function? so that when we use the function, we already have the arguments
    // probably cannot have functions with the same name (shouldnt matter since we dont deal with overloading)

    // calling of modified functions
    int i = fn1();
    fn2();

    cout << i;

    return 0;
}
