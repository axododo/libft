#include "libft.h"

// Helper function to split the string
char	**st(char *s1, char set, int i, char **str)
{
	int	j;
	int	k;
	int	word_len;

	j = 0;
	int start = 0; // Start index for each word
	k = 0;
	while (s1[i])
	{
		if (s1[i] == set)
		{
			if (i > start)
			{                                 
				// Only process if there is a word
				int word_len = i - start;      // Length of the word
				str[j] = malloc(word_len + 1); // Allocate memory for the word
				if (!str[j])
					return (NULL); // Check for allocation failure
				while (k < word_len)
				{
					str[j][k] = s1[start + k];
					k++;
				}
				str[j][word_len] = '\0'; // Null-terminate the word
				j++;                     // Move to next word
			}
			start = i + 1; // Update start index for next word
		}
		i++;
	}
	// Handle the last word after the loop if there's any
	if (i > start)
	{
		word_len = i - start;
		str[j] = malloc(word_len + 1);
		if (!str[j])
			return (NULL);
		for (int k = 0; k < word_len; k++)
		{
			str[j][k] = s1[start + k];
		}
		str[j][word_len] = '\0';
		j++;
	}
	str[j] = NULL; // Null-terminate the array of words
	return (str);
}

// Function to prepare the split
char	**ft_split(char const *s, char c)
{
	char	**str;
	int		num_words;

	num_words = 1;
	// Calculate number of words based on delimiters
	for (int i = 0; s[i]; i++)
	{
		if (s[i] == c)
			num_words++;
	}
	str = malloc(sizeof(char *) * (num_words + 1));
		// Allocate memory for array of words
	if (!str)
	{
		return (NULL);
	}
	str = st((char *)s, c, 0, str); // Call the splitting function
	return (str);
}

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("lorem ipsum dolore", ' '); // Split string
	while (tab[i])
	{
		printf("%s\n", tab[i]); // Print each word
		free(tab[i]);
		i++; // Free allocated memory for each word
	}
	free(tab); // Free the array of pointers
	return (0);
}
