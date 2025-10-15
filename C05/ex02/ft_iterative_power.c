/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:45:39 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/23 22:37:41 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	i = 0;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
}
