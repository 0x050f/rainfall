
void		n() { //0x08048454
	system("/bin/cat /home/user/level7/.pass");
}

void		m() {
	puts("Nope!"); //0x08048468
}
int			main(void) {
	void (*p1)(void);//esp + 0x18
	void *p2;//esp + 0x1c

	p2 = malloc(64);
	p1 = malloc(4);
	*p1 = &m;
	strcpy(p2, av[1]);
	p1();
}
