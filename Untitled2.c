main()
{
int x, y, m, n;
scanf ("%d %d", &x, &y);
/* x > 0 and y > 0 */
m = x; n = y;
while (m != n)
{
	if(m>n)
		m = m - n;
	else
		n = n - m;
}
printf("%d", n);
}
