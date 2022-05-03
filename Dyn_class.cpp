#include "Dyn_class.h"


void DynamicClass::DeleteFunction(std::string a_functionName)
{
    //find the function in the map
    auto currIte = m_map.find(a_functionName);

    if (currIte == m_map.end())
    {
        std::cout << "Cannot find the Function of name " << a_functionName << "!!!" << std::endl;
        return;
    }

    m_map.erase(a_functionName);
    std::cout << "Deleted the Function with name " << a_functionName << "!!!" << std::endl;
}

std::any DynamicClass::GetFunction(std::string a_functionName)
{
    //find the function in the map
    auto currIte = m_map.find(a_functionName);

    if (currIte == m_map.end())
    {
        std::cout << "Cannot find the Function of name " << a_functionName << "!!!" << std::endl;
        return nullptr;
    }

    return currIte->second;
}

void DynamicClass::AddFunction(std::string a_functionName, std::any a_functionPointer)
{
    m_map[a_functionName] = a_functionPointer;
}
