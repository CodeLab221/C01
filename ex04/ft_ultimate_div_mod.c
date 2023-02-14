/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_did_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:51:49 by coder             #+#    #+#             */
/*   Updated: 2022/04/06 09:42:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
	div = *a;
	mod = *b;
	*a = (div / mod);
	*b = (div % mod);
	}
}

/*int main(void) {

	int  x = 100;
	int  y = 10;
	int *a = &x;
	int *b = &y;


	ft_ultimate_div_mod(a, b);

	printf("div (*a) = %d\n", *a);
	printf("mod (*b) = %d", *b);

	
}   */