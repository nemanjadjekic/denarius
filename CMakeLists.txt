cmake_minimum_required(VERSION 3.31)
project(denarius)

set(CMAKE_CXX_STANDARD 23)

add_executable(denarius main.cpp
        model/account.h
        model/transaction.h
        model/category.h
        model/category.cpp
        model/types.h
        model/transaction.cpp
        model/account.cpp
        model/checking_account.cpp
        model/checking_account.h
)
