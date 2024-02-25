# Push Swap Project
## Overview
The Push Swap project is an algorithmic challenge that requires sorting data on a stack, with a limited set of instructions, and using the smallest number of actions. Through this project, students learn about sorting algorithms and stack operations. The goal is to sort numbers into ascending order.

## Objectives
Implement a sorting algorithm using two stacks.
Optimize the algorithm to minimize the number of operations.
Learn about stack data structures and sorting algorithms.

## Installation

Clone the repository and navigate to the project directory. The project includes a Makefile for compiling the program.

```bash
git clone https://github.com/Lemine-Mahjoub/Push_Swap
cd Push_Swap
```

## How to Compile
To compile the Push Swap program, run the following command in the root of the project directory:


```bash
make
```
This command will compile the push_swap binary.

## Usage
After compiling the program, you can run it using the following syntax:

```bash
./push_swap [list of integers]
```
For example:

```bash
./push_swap 2 1 3 6 5 8
```
This will output a list of operations that sort the provided integers.

## Testing
You can test the program with random numbers using a script or by manually entering numbers. For example, to test with 5 random numbers:

```bash
ARG=$(ruby -e "puts (1..5).to_a.shuffle.join(' ')"); ./push_swap $ARG
```
Replace 5 with any number of elements you wish to test.


