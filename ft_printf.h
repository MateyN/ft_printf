/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <mnikolov@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:34:14 by mnikolov          #+#    #+#             */
/*   Updated: 2021/11/16 14:29:21 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	va_list	arguments;
	int		lenght;
}			t_list;

int		ft_printf(const char *format, ...);
t_list  *ft_init_tab(t_list *tab);
//Hexadecimal lowercase, uppercase and pointer conversion utilities
void	ft_hup(t_list *tab);
void	ft_hlow(t_list *tab);
void	ft_ptr(t_list *tab);

//Functions for the required conversions
void	ft_string(t_list *tab);
void	ft_char(t_list *tab);
void	ft_percentage(t_list *tab);
void	ft_decint(t_list *tab);
void	ft_integer(t_list *tab);

//Functions for required conversions v2
void	ft_hexupcase(unsigned int i, t_list *tab);
void	ft_hexlowcase(unsigned int i, t_list *tab);
void	ft_pointer(unsigned long int i, t_list *tab);
void	ft_decnum(unsigned int i, t_list *tab);

//Helping functions from libft project and previous ones
void	ft_putchar(char c);
void	ft_putnbr(long int nbr);
void	ft_putstr(char *str);
char	*ft_strchr(const char *s, int c);
#endif
