/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:41:09 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/29 21:25:44 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error_argc1(int argc)
{
	if (argc > 3 || argc < 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	error_argc2(int argc, char *argv[])
{
	int		i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9' || i >= 40)
			{
				write(2, "Error\n", 6);
				return (1);
			}
		i++;
		}
	}
	return (0);
}

int	error_argc3(int argc, char *argv[])
{
	int		i;
	char	*str;

	i = 0;
	str = argv[2];
	if (argc == 3)
	{
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9' || i >= 40)
			{
				write(2, "Error\n", 6);
				return (1);
			}
			i++;
		}
	}
	return (0);
}

int	error_dict(int argc, char *argv[])
{
	int		i;
	char	*expected;

	expected = "numbers.dict";
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0' && expected[i] != '\0'
		&& argv[1][i] == expected[i])
			i++;
		if (argv[1][i] != '\0' || expected[i] != '\0')
		{	
			write(2, "Dict Error\n", 11);
			return (1);
		}
	}
	return (0);
}
