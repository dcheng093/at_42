/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:28:32 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/17 16:10:58 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a = 10;
	int	b = 3;

	printf("a : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div : %d\n", a);
	printf("mod : %d\n", b);
	return (0);
}*/