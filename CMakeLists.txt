# Specify the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Define the project name
project(MyCppProject LANGUAGES CXX)

# Add an executable target
add_executable(addition_app math.cpp main.cpp)
