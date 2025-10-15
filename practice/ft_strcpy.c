/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:40:41 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/28 12:48:05 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int	main(void)
{
	char	dest[] = "blehehehehheheheh";
	char	src[] = "ehehhehehehhehhehehehhehehhehehehehhe";
	printf("Dest before :%s\n", dest);
	ft_strcpy(dest, src);
	printf("Dest after :%s\n", dest);
	return (0);
}