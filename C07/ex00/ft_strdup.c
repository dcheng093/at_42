/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:27:52 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/26 00:03:55 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int	i;
	char
		*dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char *) malloc(i * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main(void)
{
	char	*src = "poop";

	printf("my: %s\n", ft_strdup(src));
	printf("or: %s\n", strdup(src));
}*/
