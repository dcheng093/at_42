/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 23:32:06 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/26 02:07:14 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (i);
}

/*int	main(void)
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
}*/
