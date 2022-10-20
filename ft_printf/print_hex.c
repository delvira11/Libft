/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:57:19 by delvira-          #+#    #+#             */
/*   Updated: 2022/10/19 22:41:25 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_hex_len(unsigned long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{	
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_print_hexlow(unsigned long n)
{
	if (n == 0)
		return (write (1, "0", 1));
	if (n >= 16)
	{
		ft_print_hexlow(n / 16);
		ft_print_hexlow(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'a');
	}
	return (ft_hex_len(n));
}

int	ft_print_hexhigh(unsigned int n)
{
	if (n == 0)
		return (write (1, "0", 1));
	if (n >= 16)
	{
		ft_print_hexhigh(n / 16);
		ft_print_hexhigh(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
			ft_putchar(n - 10 + 'A');
	}
	return (ft_hex_len(n));
}

int	ft_ptr_void(unsigned long long n)
{
	int	len;

	len = 0;
	write (1, "0x", 2);
	len += ft_print_hexlow(n);
	return (len + 2);
}
