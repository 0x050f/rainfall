int main(int ac, char *av)
{
	char buffer[132]; //0x18
	FILE *fd; //0x9c

	fd = fopen("/home/user/end/.pass", "r"); //+36
	bzero(buffer, 132);
	
	if (fd == 0 || ac != 2)
		return -1;
		
	fread(buffer,  1, 66, fd);
	buffer[65] = '\0';
	buffer[atoi(av[2])] = '\0';

	fread(&buffer[66], 1, 65, fd);

	fclose(fd);

	if (strcmp(buffer, av[2]) == 0)
	{
		execl("/bin/sh", "sh", 0);
		return 0;
	}
	puts(&buffer[66]);

}
