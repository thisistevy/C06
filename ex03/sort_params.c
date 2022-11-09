/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:15:48 by iung              #+#    #+#             */
/*   Updated: 2022/10/05 19:23:09 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	
	if( s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *swap;

	swap = *a;
	*a = *b;
	*b = swap;
}



int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 0;
		}
		i++;
	}
	i = 1;
	while(i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}
