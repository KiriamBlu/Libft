int main()
{
	char	i[10] = "hola";
	ft_strlcpy(i, "adios", -3);
	printf("%s\n", i);
	strlcpy(i, "hola", 3);
	printf("%d\n", ft_strlcpy(i, "hola", 3));
	printf("%s\n", i);
	return 0;
}