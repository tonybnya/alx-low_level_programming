## TASKS

0. What's my name
Write a function that prints a name.

Prototype:
```c
void print_name(char *name, void (*f)(char *));
```

1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.

Prototype:
```c
void array_iterator(int *array, size_t size, void (*action)(int));
```
where size is the size of the array
and action is a pointer to the function you need to use
