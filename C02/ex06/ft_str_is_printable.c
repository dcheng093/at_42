/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:01:55 by dcheng            #+#    #+#             */
/*   Updated: 2025/08/14 20:02:41 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 127 || str[i] <= 31)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_printable("HELLO"));
	printf("%d\n", ft_str_is_printable("Hi\tThere"));
	printf("%d\n", ft_str_is_printable("heehehhehehhe"));
	printf("%d\n", ft_str_is_printable("Poop\a"));
}*/