void	o() // 0x080484a4
{
	system("/bin/sh");
	exit(1);
}
void	n() {
	char buffer[520];
	fgets(buffer, 512, stdin);
	printf(buffer);
	exit(1);
}

int		main(void)
{
	n();
	return 0;
}
