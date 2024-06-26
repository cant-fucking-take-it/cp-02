/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoma-ba <ecoma-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:12:57 by ecoma-ba          #+#    #+#             */
/*   Updated: 2024/04/26 14:41:45 by ecoma-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*original;
	int		should_capitalize;

	original = str;
	should_capitalize = 32;
	while (*str != '\0')
	{
		if (((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			&& (*str & 32) == should_capitalize)
		{
			*str = *str ^ 32;
		}
		if ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
		{
			should_capitalize = 0;
		}
		else
		{
			should_capitalize = 32;
		}
		str++;
	}
	return (original);
}
