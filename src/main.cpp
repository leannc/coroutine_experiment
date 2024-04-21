//
// Created by kang on 2024/4/21.
//
#include <coroutine>
#include <iostream>


struct ReturnObject{
    struct promise_type
    {
        std::suspend_never initial_suspend() {return {};}
        std::suspend_never final_suspend() noexcept {return {};}
        ReturnObject get_return_object(){return {};}
        void unhandled_exception() {}
    };
};


ReturnObject foo()
{
    std::cout << "1"<<std::endl;
    co_await std::suspend_always{};
    std::cout << "2"<<std::endl;
}

int main()
{
    foo();
}