//
// Created by kang on 2024/4/25.
//

#ifndef COROUTINE_TEST_USECASES_H
#define COROUTINE_TEST_USECASES_H
#include <coroutine>
#include <iostream>


struct BasicReturnObject{
    struct promise_type
    {
        std::suspend_never initial_suspend() {return {};}
        std::suspend_never final_suspend() noexcept {return {};}
        BasicReturnObject get_return_object(){return {BasicReturnObject{std::coroutine_handle<promise_type>::from_promise(*this)}};}
        void unhandled_exception() {}
    };

    std::coroutine_handle<> handle;
    BasicReturnObject(std::coroutine_handle<>handle_):handle{handle_} {}
};


BasicReturnObject basic_coroutine();


#endif //COROUTINE_TEST_USECASES_H
