/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <mnikolov@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:23:39 by mnikolov          #+#    #+#             */
/*   Updated: 2021/11/16 14:30:16 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char(t_list *tab)

{
	char	res;

	res = va_arg(tab->arguments, unsigned int);
	tab->lenght += 1;
	ft_putchar(res);
}

void	ft_string(t_list *tab)

{
	char			*str;
	unsigned int	i;

	str = va_arg(tab->arguments, char *);
	if (str == NULL)
	{
		ft_putstr("(null)");
		tab->lenght += 6;
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		tab->lenght++;
		i++;
	}
}

void	ft_percentage(t_list *tab)

{
	ft_putchar('%');
	tab->lenght++;
}

void	ft_decint(t_list *tab)

{
	int	res;

	res = va_arg(tab->arguments, int);
	ft_decnum(res, tab);
}

void	ft_integer(t_list *tab)

{
	int	res;

	res = va_arg(tab->arguments, long long int);
	if (res < 0)
{
		res = -res;
		tab->lenght++;
		ft_putchar('-');
}
	ft_putnbr(res);
	if (res == 0)
		tab->lenght++;
	while (res != 0)
	{
		res = res / 10;
		tab->lenght++;
	}
}
