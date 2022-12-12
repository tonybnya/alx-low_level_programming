## TASKS

0. Print list
   Write a function that prints all the elements of a ```dlistint_t``` list.
- Prototype: ```size_t print_dlistint(const dlistint_t *h);```
- Return: the number of nodes
- Format: see example

```sh
julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

1. List length
   Write a function that returns the number of elements in a linked ```dlistint_t``` list.
- Prototype: ```size_t dlistint_len(const dlistint_t *h);```
  
  ```
  julien@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c 
  #include <stdlib.h>
  #include <string.h>
  #include <stdio.h>
  #include "lists.h"
  
  /**
   * main - check the code
   *
   * Return: Always EXIT_SUCCESS.
   */
  int main(void)
  {
      dlistint_t *head;
      dlistint_t *new;
      dlistint_t hello = {8, NULL, NULL};
      size_t n;
  
      head = &hello;
      new = malloc(sizeof(dlistint_t));
      if (new == NULL)
      {
          dprintf(2, "Error: Can't malloc\n");
          return (EXIT_FAILURE);
      }
      new->n = 9;
      head->prev = new;
      new->next = head;
      new->prev = NULL;
      head = new;
      n = dlistint_len(head);
      printf("-> %lu elements\n", n);
      free(new);
      return (EXIT_SUCCESS);
  }
  julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
  julien@ubuntu:~/0x17. Doubly linked lists$ ./b 
  -> 2 elements
  julien@ubuntu:~/0x17. Doubly linked lists$
  ```
2. Add node
   Write a function that adds a new node at the beginning of a ```dlistint_t``` list.
- Prototype: ```dlistint_t *add_dnodeint(dlistint_t **head, const int n);```
- Return: the address of the new element, or ```NULL``` if it failed

```shell
julien@ubuntu:~/0x17. Doubly linked lists$ cat 2-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/0x17. Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

3. Add node at the end
   Write a function that adds a new node at the end of a ```dlistint_t``` list.
- Prototype: ```dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);```
- Return: the address of the new element, or ```NULL``` if it failed

```sh
julien@ubuntu:~/0x17. Doubly linked lists$ cat 3-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/0x17. Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

4. Free list
   Write a function that frees a ```dlistint_t``` list.
- Prototype: ```void free_dlistint(dlistint_t *head);```

```sh
julien@ubuntu:~/0x17. Doubly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x17. Doubly linked lists$ 
```

5. Get node at index
   Write a function that returns the nth node of a ```dlistint_t`` linked list.
- Prototype: ```dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);```
- where ```index``` is the index of the node, starting from ```0```
- if the node does not exist, return ```NULL```



```sh

```


