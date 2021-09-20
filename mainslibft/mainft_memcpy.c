
int main(int argc, char const *argv[])
{
	char j[20] = "HEY PUTO";
	char i[20] = "COPIAME";
	char js[20] = "HEY PUTO";
	char is[20] = "COPIAME";

	memcpy(&j[1],&i[1],7);
	ft_memcpy(&js[1],&is[1],7);

	printf("%s\n", j);
	printf("%s\n", js);

	return 0;
}