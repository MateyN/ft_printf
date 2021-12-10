/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <mnikolov@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:27:23 by mnikolov          #+#    #+#             */
/*   Updated: 2021/11/16 14:37:13 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list  *ft_init_tab(t_list *tab)

{
    tab->lenght = 0;
    return (tab);
}

void	ft_conversion(char chr, t_list *tab)

{
	if (chr == 'c')
		ft_char(tab);
	else if (chr == 's')
		ft_string(tab);
	else if (chr == 'p')
		ft_ptr(tab);
	else if (chr == 'd' || chr == 'i')
		ft_integer(tab);
	else if (chr == 'u')
		ft_decint(tab);
	else if (chr == 'x')
		ft_hlow(tab);
	else if (chr == 'X')
		ft_hup(tab);
	else if (chr == '%')
		ft_percentage(tab);
}

int	ft_printf(const char *format, ...)
{
	t_list	*tab;
	int		i;

	tab = malloc(sizeof(t_list));
	if (!tab)
		return (0);
    ft_init_tab(tab);
	i = -1;
	va_start(tab->arguments, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", format[i + 1]))
				ft_conversion(format[i++ + 1], tab);
		}
		else
		{
			ft_putchar(format[i]);
			tab->lenght++;
		}
	}
	i = tab->lenght;
	free(tab);
	return (i);
}
