#include "main.h"
/**
 * times_table - func
 * Return: void.
 */
void times_table(void)
{
	int x, y, m_value;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			m_value = x * y;
			if (x == 0)
			{
				_putchar(m_value + '0');
			}
			else if (m_value >= 10)
			{
				_putchar(' ');
				_putchar(m_value / 10 + '0');
				_putchar(m_value % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(m_value + '0');
			}
			if (x != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
