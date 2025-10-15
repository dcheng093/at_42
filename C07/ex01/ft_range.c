/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:53:35 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/15 18:15:29 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i; 

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i = 0;
	int	*range = ft_range(min, max);
	int	size = max - min;

	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}*/
