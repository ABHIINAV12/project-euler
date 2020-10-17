def num(a):
	b=str(a)
	return len(b)

def main():
	a,b=1,1
	ans=3
	while 1:
		c=a+b
		d=num(c)
		if d==1000:
			break
		a=b
		b=c
		ans+=1
	print(ans)


main()