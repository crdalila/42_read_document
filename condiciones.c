/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condiciones.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalcabre <dalcabre@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:03:45 by dalcabre          #+#    #+#             */
/*   Updated: 2023/10/31 10:27:17 by dalcabre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>


void ft_numbers(int n)
{
	int	ndu;
	int	nu;
	int	nc;
	int	nd;

	nc = n / 100;
	ndu = n % 100;
	nu = (ndu % 10);
	nd = ndu / 10;

	while (nc > 0)
	{
		read_numbers(nc);
		read_numbers(100);
	}
	if (ndu <= 20 && ndu >= 1)
	{
		read_numbers(ndu);
	}
	if (ndu > 20 && nu != 0)
	{
		read_numbers(nd * 10);
		read_numbers(nu);
	}
	if (ndu > 20 && nu == 0)
	{
		read_numbers(ndu);
	}
}

int	main(int n)
	{
	int	read_numbers(int argc, char *argv[]);
	
	n = read_numbers(argv[1]);
	ft_numbers(n);
	return (0);
}
*/	