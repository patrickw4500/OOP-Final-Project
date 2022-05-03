#pragma once
#include"preCompiled.h"
#include "Dyn_class.h"

// function object
class square
{
public:
    int operator()(int x) { return x * x; }
};

class A
{
public:
    A(int a_x) : m_x(a_x) {};
    int returnX() { return m_x; }

    void returnY() { std::cout << "hello"; }

    int returnVal(int val) { return val; }

    std::function<void(void)> aMember = std::bind(&A::returnY, this);

private:
    int m_x;
};

int func1(int x)
{
    return x;
}

float pi()
{
    return 3.14f;
}

int fun2(int x, int y)
{
    return x + y;
}

int RetOne(int first)
{
    return first;
}