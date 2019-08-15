cmake_minimum_required(VERSION 3.14)
project(bubble_sort C)

set(CMAKE_C_STANDARD 11)

add_executable(bubble_sort src/main.c src/bubble_sort.h src/bubble_sort.c src/utils/compare.h src/utils/compare.c src/utils/swap.c src/utils/swap.h)