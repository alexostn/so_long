/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:34:42 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/15 13:34:43 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_pointer(void *ptr)
{
	int		len;
	char	x;

	len = 0;
	x = 'x';
	if (!ptr)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += print_hex((unsigned long int)ptr, x);
	return (len);
}
