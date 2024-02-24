## Details :

This project is my version of the push_swap of 42,

## Algorythm : 

The algorithm implements a sorting strategy using two stacks, a and b. Elements are moved from stack a to b (pb operation) while ensuring that the top two elements of b are in the correct order by swapping them if necessary (sb operation). If a swap occurs, the element is moved back to a (pa operation). This process repeats until a is empty, then all elements from b are moved back to a, ensuring a sorted order.


## Installation : 

To install the project, copy the command below.
```
git clone https://github.com/Lemine-Mahjoub/Push_Swap/
cd Push_Swap
make
```

To use the project : 
```
./checker
./push_swap
```
