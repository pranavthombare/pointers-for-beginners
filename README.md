# Pointers

This repository goes through the basic understanding of pointers which a beginner(including me) faces problem with.

In order to run the code, enter the following command in your terminal:

` g++ -o a Pointers.cpp; ./a `

## 1. Introduction

Pointers have always been a tough area to understand if not practiced or explained properly. But before we go to the syntax, we must know what is a pointer and why it is used in C++.

Let's begin by assuming that memory is a city where different variables reside. We know that all the variables are allocated in memory, and each allocated variable has its own address in the memory: or in short terms each variable has its own address in the memory just like a person would have a address living in a city.

We can access the data stored in a variable by 2 ways, by either calling the variable directly or by referring the address of the variable. Pointers are used generally to access any value with the address of a variable.

## 2. Need of Pointers

Pointers are useful as it provides us a way to manipulate data in a very flexible manner. Sometimes manipulating the address of a data can be more efficient than manipulating the data itself.

There are several advantages of using a pointer. Like, 

- They can be used as a way to implement a flexible pass-by-reference.
- It can be used to manipulate data structure, even if they are scattered in different memory locations. 
- Pointers allow you to refer to the same space in memory from multiple locations. This means that you can update memory in one location and the change can be seen from another location in your program. You will also save space by being able to share components in your data structures.

## 3. Syntax

The basic syntax of a pointer is denoted by '*'. It is declared as following:

` type *variable_name; `

Where type can be replaced with any data type; int, float, char etc.

A basic program can be found in this repository which will go through all the concepts of pointers step-by-step with increasing complexity.

# Pointers As Arrays

One interesting way to use pointers is to use them as an arrays.
