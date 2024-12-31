# Helloworld_cpp

In this project I get the basics set up for c++

## Setting up

* vscode + wsl extension (local os)
* wsl2 with ubuntu
* (wsl) ssh key for github
* (wsl) g++ / gdb

## Resources

* [Using C++ and WSL in VS Code](https://code.visualstudio.com/docs/cpp/config-wsl)
* [The Cherno c++ 1-5](https://www.youtube.com/watch?v=18c3MTX0PK0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)

## Notes & the plan

1. Building a single file was fine with `g++`
   1. I tried creating a function and moving it to seperate file ... this did not go well!
   1. All code in single file worked, but thats no good
1. I think I need a small sidestep into CMake
   1. I spent last decade in `python`, so building and managing a project in cpp is very different
   1. CMake seems a good place to start for setting up
   1 I'm going to use [getting started with cmake](https://code.visualstudio.com/docs/cpp/CMake-linux) 
