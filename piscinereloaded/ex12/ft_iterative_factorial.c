/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:03:23 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/15 22:26:19 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0 || nb > 12)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb -= 1;
	}
	return (res);
}
