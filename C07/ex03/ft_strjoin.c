/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 23:36:42 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/26 02:41:22 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_all(int size, char **strs, char *sep)
{
	int	total;
	int	sep_len;
	int	j;

	total = 0;
	sep_len = ft_strlen(sep);
	j = 0;
	while (j < size)
	{
		total += ft_strlen(strs[j]);
		if (j < size - 1)
			total += sep_len;
		j++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char
		*join;

	j = 0;
	j = count_all(size, strs, sep);
	join = malloc((j + 1) * sizeof(char));
	if (!join)
		return (0);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		join = ft_strcat(join, strs[i]);
		if (i < size - 1)
			join = ft_strcat(join, sep);
		i++;
	}
	return (join);
}

/*int	main(void)
{
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
	int size = 6;
	char *sep = " ";
	int	i = 0;
	char	*all_together = ft_strjoin(size, strs, sep);

	while (i < size)
	{
		printf("String in the index %d: %s\n", i, strs[i]);
		i++;
	}
	printf("New string: %s\n", all_together);
	free(all_together);
}*/
