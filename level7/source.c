char c[80];

void		m(void)
{
	printf("%s - %d\n", c, time(0));
}

int			main(void)
{
	int		ret;
	void	*perdu[2]; // 0x18
	void	*ptr[2]; // 0x1c

	ptr[0] = malloc(8);
	*(ptr[0]) = 1;
	ptr[1] = malloc(8);
	perdu[0] = malloc(8);
	*(perdu[0]) = 2;
	perdu[1] = malloc(8);
	strcpy(ptr[1], argv[1]);
	strcpy(perdu[1], argv[2]);
	ret = fopen("/home/user/level8/.pass", "r");
	fgets(c, 68, ret);
	puts("~~");
	return (0);
}
