void		p(void *ptr, char *str)
{
	char buffer[4096];

	puts(str); // 9 - 15
	read(0, buffer, 4096);// 20 - 45
	char *ptr = strchr(buffer, ' ');
	*ptr = '\0';
	strcnpy(ptr, buffer, 20);
}

void		pp(char *str)
{
	char ptr2[20]; //epb - 0x1c
	char ptr[20]; //epb - 0x30

	p(ptr, " - ");// 8 - 22
	p(ptr2, " - ");// 27 - 41
	strcpy(str, ptr); // 46 - 59
	*(str + strlen(str)) = " ";
	strcat(str, ptr2);
}

int		main(int ac, char **av)
{
	char str[42];

	pp(str);// 9 - 16
	puts(str);// 21 - 28
	return (0);
}
