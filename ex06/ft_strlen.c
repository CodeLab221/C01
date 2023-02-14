/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:51:58 by coder             #+#    #+#             */
/*   Updated: 2022/04/06 10:44:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter ++;
	}
	return (counter);
}

/*
int main(void)
{       
	int counter;
	char str[]= "fwefwe555555+gwege";
	counter = ft_strlen(str);
	printf("%d", counter);
}  */