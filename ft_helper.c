/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <mnikolov@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:23:53 by mnikolov          #+#    #+#             */
/*   Updated: 2021/11/16 14:32:33 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

char	*ft_strchr(const char *s, int c)

{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

void	ft_putnbr(long int nbr)

{
	if (nbr < 0)
		nbr = -nbr;
	if (nbr >= 10)
{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
}
	else
		ft_putchar(nbr + '0');
}

void	ft_putstr(char	*str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
