/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouras <aybouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:35:32 by aybouras          #+#    #+#             */
/*   Updated: 2022/02/19 13:35:49 by aybouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void toUpper(char str[])
{
	for (int j = 0; j < (int)strlen(str); j++)
		putchar(toupper(str[j]));
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	while (++i < ac)
		toUpper(av[i]);
	std::cout << std::endl;

	return (0);
}