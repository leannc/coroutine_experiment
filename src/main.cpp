//
// Created by kang on 2024/4/21.
//
#include "UseCases.h"

int main()
{
   BasicReturnObject obj =  basic_coroutine();
   obj.handle.resume();
}