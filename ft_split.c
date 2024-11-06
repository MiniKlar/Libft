/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 00:40:10 by miniklar          #+#    #+#             */
/*   Updated: 2024/11/06 19:46:44 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_counter(const char *s, char c)
{
	int counter;

	counter = 0;
	while (*s)
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s)
			counter++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (counter);
}
void ft_free(char **array, size_t i)
{
	while (i > 0)
		free (array[i]);
	free (array);
}
char *fill_word(const char *s, char c)
{
	char 	*word;
	size_t 	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	// else
		// printf("L'allocation a reussi pour le word\n");
	while (i < len)
	{
		// printf("le caractère est :%c\n", s[i]);			
		word[i] = s[i];
		i++;
	}
	// printf("Voici le mot complet : %s\n", word);
	word[len + 1] = '\0';
	// printf("Voici le mot complet : %s\n", word);
	return (word);
}
char **ft_split(const char *s, char c)
{
	char	**array;
	size_t	i;

	// printf("Le nombre de mots est : %d\n", word_counter(s, c));
	array = malloc((sizeof(char *) * (word_counter(s, c) + 1)));
	if (!array)
		return (NULL);
	// else
		// printf("L'allocation a reussi pour l'array complet\n");
	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			// printf("%c\n", *s);
			array[i] = fill_word(s, c);
			if (!array[i])
				return(ft_free(array, i), NULL);
			// else
				//printf("L'allocation a reussi pour le %ld array\n\n", i);
			//printf("Voici l'array %ld complet : %s\n", i, array[i]);
			i++;
		}
		while (*s != c && *s != '\0')
			s++;
		//printf("mon S se situe là: %c\n", *s);
	}
	array[i] = NULL;
	return (array);
}

// int	main(void)
// {
// 	char **array;

// 	array = ft_split(".............Salut.tu.vas.bien.toi............", '.');
// 	printf("%s\n", array[0]);
// 	printf("%s\n", array[1]);
// 	printf("%s\n", array[2]);
// 	printf("%s\n", array[3]);
// }