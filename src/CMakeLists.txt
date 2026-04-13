
cmake_minimum_required(VERSION 3.30)
project(gas-lsp C)

add_executable(out main.c)
add_library(rpcjson ../lib/rpcjson.c)
target_include_directories(rpcjson PUBLIC lib)
target_link_libraries(out rpcjson)
