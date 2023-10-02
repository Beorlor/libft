/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:22:35 by jedurand          #+#    #+#             */
/*   Updated: 2023/10/02 13:00:41 by jedurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (char)c)
			ptr = (char *)str;
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	char str[6] = "sulut";
	printf("%p\n", str);
	printf("%p", ft_strrchr(str, 'u'));
	return (0);
}*/
