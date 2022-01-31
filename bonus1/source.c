int		main(int ac, char **av)
{
	char	*dst; // 0x14
	int	ret; // 0x3c

	if ((ret = atoi(av[1])) > 9)
		return (1);
	memcpy(dst, av[2], ret * sizeof(int));
	if (ret == 0x574f4c46)
		execl("/bin/sh", "sh", 0x0);
	return (0);
}
