//
// Created by kang on 2024/4/25.
//


#include "UseCases.h"

BasicReturnObject basic_coroutine()
{
    std::cout << "1"<<std::endl;
    co_await std::suspend_always{};
    std::cout << "2"<<std::endl;
    co_await std::suspend_always{};
    std::cout << "3"<<std::endl;
}


