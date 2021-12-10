/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_hup_hlow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <mnikolov@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:18:47 by mnikolov          #+#    #+#             */
/*   Updated: 2021/11/16 14:12:53 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hup(t_list *tab)

{
	int	res;

	res = va_arg(tab->arguments, unsigned int);
	ft_hexupcase(res, tab);
}

void	ft_hlow(t_list *tab)

{
	int	res;

	res = va_arg(tab->arguments, unsigned int);
	ft_hexlowcase(res, tab);
}

void	ft_ptr(t_list *tab)

{
	unsigned long	ptr;

	ptr = va_arg(tab->arguments, unsigned long);
	ft_putstr("0x");
	tab->lenght += 2;
	ft_pointer(ptr, tab);
}
