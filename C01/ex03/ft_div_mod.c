/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:15:11 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/11 18:06:33 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a  = 10;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b : %d\n", a, b);
	printf("div : %d\n", div);
	printf("mod : %d\n", mod);
}*/