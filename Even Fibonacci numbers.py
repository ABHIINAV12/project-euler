def main():
	a,b=1,1
	ans=0
	while(b<4000000):
		c=b+a
		if c%2==0:
			ans=ans+c
		a=b
		b=c
	print(ans)

main()
