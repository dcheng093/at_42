/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 23:32:06 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/25 23:33:51 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));

	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	if (array != NULL)
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}

		*range = array;
		return (i);
	}
	else
		return (-1);
}

int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i = 0;
	int	*range;
	int	size = ft_ultimate_range(&range, min, max);

	i = 0;
	printf("\nRange Size: %d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
