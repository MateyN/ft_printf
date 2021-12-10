/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <mnikolov@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:27:08 by mnikolov          #+#    #+#             */
/*   Updated: 2021/11/16 13:50:52 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexupcase(unsigned int i, t_list *tab)

{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		ft_hexupcase(i / 16, tab);
		ft_hexupcase(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->lenght++;
	}
}

void	ft_hexlowcase(unsigned int i, t_list *tab)

{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_hexlowcase(i / 16, tab);
		ft_hexlowcase(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->lenght++;
	}
}

void	ft_decnum(unsigned int i, t_list *tab)

{
	char	*base;

	base = "0123456789";
	if (i >= 10)
	{
		ft_decnum(i / 10, tab);
		ft_decnum(i % 10, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->lenght++;
	}
}

void	ft_pointer(unsigned long int i, t_list *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_pointer(i / 16, tab);
		ft_pointer(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->lenght++;
	}
}
