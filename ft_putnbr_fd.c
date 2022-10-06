#include"Libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;
    
    nb = n;
    if(nb < 0)
    {
        ft_putchar_fd('-',fd);
        nb *= -1;
    }
    if (nb > 10)
    {
        ft_putnbr_fd(nb / 10,fd);
    }
    nb %= 10;
    ft_putchar_fd(nb + '0',fd);
}
//int main() {
//    ft_putnbr_fd(2147483647,1);
//  return 0;
//}