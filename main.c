/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:41:04 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/29 22:00:07 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int	error_argc1(int argc);
int	error_argc2(int argc, char *argv[]);
int	error_argc3(int argc, char *argv[]);
int	error_dict(int argc, char *argv[]);
int	read_numbers(int argc, char *argv[], int fd, char *buffer);

int	main(int argc, char *argv[])
{
	int		fd;
	char	*buffer;

	fd = 0;
	buffer = 0;
	if (error_argc1(argc) || error_argc2(argc, argv) || error_argc3(argc, argv)
		|| error_dict(argc, argv))
		return (1);
	read_numbers(argc, argv, fd, buffer);
	free(buffer);
	close(fd);
	return (0);
}
