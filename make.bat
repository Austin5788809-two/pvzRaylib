@echo off

clang++ -I"F:/code/cpp/lib/include" -std=c++11 -Wall main.cpp -o main.exe -L"F:/code/cpp/lib/lib" -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32 -lshell32 -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network
