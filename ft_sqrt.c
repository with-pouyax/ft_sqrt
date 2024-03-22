int	ft_sqrt(int nb)
{
	int	sqrt_candidate;

	sqrt_candidate = 1;
	if (nb <= 0)
		return (0);
	while (sqrt_candidate * sqrt_candidate <= nb)
	{
		if (sqrt_candidate * sqrt_candidate == nb)
			return (sqrt_candidate);
		if (sqrt_candidate >= 46340)
			return (0);
		sqrt_candidate++;
	}
	return (0);
}
