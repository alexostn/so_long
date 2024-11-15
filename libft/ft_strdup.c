/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oostapen <oostapen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:36:48 by oostapen          #+#    #+#             */
/*   Updated: 2024/11/15 13:36:49 by oostapen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;

	new = malloc(ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, (char *)s, ft_strlen(s) + 1);
	return (new);
}
