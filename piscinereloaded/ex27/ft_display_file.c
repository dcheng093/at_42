/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:41:18 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/15 23:03:07 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_print_file(int fd)
{
	int		ret;
	char	buf[4096];

	ret = read(fd, buf, sizeof(buf));
	while (ret > 0)
	{
		write(1, buf, ret);
		ret = read(fd, buf, sizeof(buf));
	}
	if (ret == -1)
		write(2, "Cannot read file.\n", 18);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(2, "Cannot read file.\n", 18);
		else
		{
			ft_print_file(fd);
			close(fd);
		}
	}
	return (0);
}
