/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:19:29 by kkweon            #+#    #+#             */
/*   Updated: 2026/01/13 11:26:07 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_specifier(va_list args, char c)
{
	int	va;

	va = 0;
	if (c == 's')
		va = ft_putstr(va_arg(args, char *));
	else if (c == 'c')
		va = ft_putchar(va_arg(args, int));
	else if (c == 'i' || c == 'd')
		va = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		va = ft_putunbr(va_arg(args, unsigned int));
	else if (c == '%')
		va = ft_putchar('%');
	else if (c == 'x')
		va = ft_puthex(va_arg(args, unsigned int));
	else if (c == 'X')
		va = ft_putuphex(va_arg(args, unsigned int));
	else if (c == 'p')
		va = ft_putptr(va_arg(args, void *));
	else
		return (-1);
	return (va);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		arg_res;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	arg_res = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			arg_res += type_specifier(args, format[i + 1]);
			i++;
		}
		else if ((format[i] == '%' && format[i + 1] == '\0'))
			return (va_end(args), -1);
		else
			arg_res += ft_putchar(format[i]);
		i++;
	}
	return (va_end(args), arg_res);
}
