# Walkthrough

## Disassembling the executable

see source.c

## Exploit

The program expects one argument that will be turned into an integer when passed as the argument of atoi(), that number is used to terminate the buffer with a \0.

Then this same argument compared to a buffer and if both string compares equal a shell is launched as our target user.

In order to set the value of the buffer as the value of our argument we pass an empty string to the program.

Atoi interprets it as a 0 and terminates the buffer at index 0, thus comparing equal to our av[1]

```
bonus3@RainFall:~$ ./bonus3 ""
$ whoami
end
```
