#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int		dict_file;
	char	buffer[1024];
	char	x;
	ssize_t	bytes_read;
	ssize_t	i;

	dict_file = open("numbers.dict", O_RDONLY);
	bytes_read = read(dict_file, buffer, 1024);

	printf("bytes read: %zd\n", bytes_read);
	//printf("%s", buffer);

	i = 0;
	while (i < bytes_read)
	{
		x = buffer[i];
		if (x == '\n')
			printf("newline here\n");
		else
			printf("%c\n", x);
		++i;
	}
}
