/**
 * binary_to_uint - converts a binary number string
 * to unsigned integer
 * @binarystring: string containing the binary number
 *
 * Return: the converted unsigned integer
 */
unsigned int binary_to_uint(const char *binarystring)
{
	unsigned int decimalValue;
	int i;

	if (!binarystring)
		return (0);

	decimalValue = 0;

	for (i = 0; binarystring[i]; i++)
	{
		if (binarystring[i] < '0' || binarystring[i] > '1')
			return (0);

		decimalValue = (decimalValue << 1) | (binarystring[i] - '0');
	}

	return (decimalValue);
}
