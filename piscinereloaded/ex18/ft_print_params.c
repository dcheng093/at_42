/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:01:17 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/14 18:15:16 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
				ft_putchar(av[i][j++]);
			ft_putchar('\n');
			i++;
		}
	}
}
