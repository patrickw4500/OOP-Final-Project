#include "Dyn_class.h"
#include "functions.h"



int main()
{
    DynamicClass obj; // vector of any to store the function pointers

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
        
        }
        else if (input == 2)
        {
            
        }
        else if (input == 3)
        {
            
        }
    }

    

    // function pointer
        // add
    obj.AddFunction("functionPoint1", func1);
        // get type
    auto printNumReturn = (obj.GetFunction("functionPoint1"));
    std::cout << printNumReturn.type().name() << std::endl;
        // print
    auto printNumReturnCast = std::any_cast<int(*)(int)>(printNumReturn);
    std::cout << printNumReturnCast(5) << std::endl;




    // normal funcitons 
        //add
    obj.AddFunction("valueOfPi", pi);
        // get type
    auto myfunc = (obj.GetFunction("valueOfPi"));
    std::cout << myfunc.type().name() << std::endl;
        // print
    auto myfunc2 = std::any_cast<float(*)()>(obj.GetFunction("valueOfPi"));
    std::cout << myfunc2() << std::endl;




    // fuction object
        // declare object
    square sqt;
        // add
    obj.AddFunction("funObj", sqt);
        //get type
    auto funObjRet = (obj.GetFunction("funObj"));
    std::cout << funObjRet.type().name() << std::endl;
        // print
    auto funObjRetCast = std::any_cast<square>(funObjRet);
    std::cout << funObjRetCast(5) << std::endl;




    // std::function
        // declare object
    Plus add;
        // add
    obj.AddFunction("addFunction", add);
        // get type
    auto addFunObjRet = (obj.GetFunction("addFunction"));
    std::cout << addFunObjRet.type().name() << std::endl;
        // print
    auto addFunObjRetCast = std::any_cast<Plus>(addFunObjRet);
    std::cout << addFunObjRetCast(5, 5) << std::endl;




    // std::bind
    std::function<int(int)> bindFunc = std::bind(&RetOne, _1);
        // add
    obj.AddFunction("binder", bindFunc);
        // get type
    auto bindedFuncRec = (obj.GetFunction("binder"));
    std::cout << bindedFuncRec.type().name() << std::endl;
        // print
    auto bindFuncCast = std::any_cast<std::function<int __cdecl(int)>>(bindedFuncRec);
    std::cout << bindFuncCast(7) << std::endl;




    // lambda 
    std::function<int(int)> lam = [](int x) { return 3 * x; };
        // add
    obj.AddFunction("lambda", lam);
        // get type
    auto lambdaRec = (obj.GetFunction("lambda"));
    std::cout << lambdaRec.type().name() << std::endl;
        // print
    auto lambdaRecCast = std::any_cast<std::function<int __cdecl(int)>>(lambdaRec);
    std::cout << lambdaRecCast(5) << std::endl;



    return 0;
}
