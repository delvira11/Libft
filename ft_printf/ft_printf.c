/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:42:06 by delvira-          #+#    #+#             */
/*   Updated: 2022/10/19 22:36:14 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	func(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += printchar(va_arg(args, int));
	if (c == 's')
		len += print_str(va_arg(args, char *));
	if (c == 'x')
		len += ft_print_hexlow(va_arg(args, unsigned int));
	if (c == 'X')
		len += ft_print_hexhigh(va_arg(args, unsigned int));
	if (c == '%')
		len += print_percent();
	if (c == 'd' || c == 'i')
		len += print_num(va_arg(args, int));
	if (c == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	if (c == 'p')
		len += ft_ptr_void (va_arg(args, unsigned long long));
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += func(args, str[i + 1]);
			i++;
		}
		else
			len += printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int main()
// {
// 	///ft_printf("Hola %p buenas\n", "456");
// 	///printf("Hola %p buenas", "456");
// 	printf("\n mi :%i", ft_printf("%p", "456"));
// 	///printf("\n su: %i", printf("%p", "456"));
// 	///printf ("mio = %d\n orig = %d\n", c, d);
// 	///system("leaks -q a.out");
// }