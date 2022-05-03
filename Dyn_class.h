#pragma once
#include"preCompiled.h"



class DynamicClass
{
public:
    DynamicClass() {}
    void AddFunction(std::string a_functionName, std::any a_functionPointer);
    void DeleteFunction(std::string a_functionName);
    std::any GetFunction(std::string a_functionName);

private:

    std::map<std::string, std::any> m_map;
};
