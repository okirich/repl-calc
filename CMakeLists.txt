cmake_minimum_required(VERSION 3.10)
project(repl-calc)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    main.cpp
#    tokenizer/tokenizer.cpp
#    parser/parser.cpp
#    evaluator/evaluator.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
