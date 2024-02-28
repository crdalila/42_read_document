/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:05:49 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/31 11:33:54 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	cont_number(const char *number)
{
	int	j;

	j = 0;
	while (number[j] >= '0' && number[j] <= '9')
		j++;
	return (j);
}

int	two_arguments(int var_numbers[], const char *number,
		char *buffer, const char *argv)
{
	int	k;

	if (argc == 2)
	{
		if (ft_strcmp(number, argv) == 0)
		{
			k = i + j;
			while (buffer[k] != '\n' && buffer[k] != ':')
			{
				write(1, &buffer[k], 1);
				k++;
			}
			return (0);
		}
	}
	return (0);
}

int	three_arguments(int var_numbers[], const char *number,
		char *buffer, const char *argv)
{
	int	k;

	if (var_numbers[3] == 3)
	{
		if (ft_strcmp(number, argv) == 0)
		{
			k = var_numbers[0] + var_numbers[2];
			while (buffer[k] != '\n' && buffer[k] != ':')
			{
				write(1, &buffer[k], 1);
				k++;
			}
			return (0);
		}
	}
	return (0);
}

int	read_numbers(int argc, char *argv[], int fd, char *buffer)
{
	int		var_numbers[4];
	char	*number;

	i = 0;
	var_numbers[3] = argc;
	buffer = (char *) malloc(1000);
	fd = open ("numbers.dict", O_RDONLY);
	sz = read (fd, buffer, 1000);
	while (i < sz)
	{
		if (buffer[i] >= '0' && buffer[i] <= '9')
		{
			number = &buffer[i];
			j = cont_number(number);
			if (j > 0)
			{
				number[j] = '\0';
				two_arguments(var_numbers, number, buffer, argv[1]);
				three_arguments(var_numbers, number, buffer, argv[1]);
			}
		}
		i++;
	}
	return (0);
}
