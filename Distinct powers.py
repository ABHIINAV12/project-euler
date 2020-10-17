def main():
	ans=0
	l=[]
	for i in range(2,101):
		for j in range(2,101):
			num=1
			for k in range(0,j):
				num*=i
			l.append(num)
	ans=len(l)
	l.sort()
	for i in range(1,len(l)):
		if l[i]==l[i-1]:
			ans-=1
	print(ans)


main()