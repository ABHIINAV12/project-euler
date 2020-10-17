def collatz(a):
	if a==1:
		return 1
	if a%2==0:
		return 1+collatz(a/2)
	else:
		return 1+collatz(3*a+1)

def main():
	ans,value=0,0
	for i in range (1,1000001):
		thi=collatz(i)
		if thi>value:
			value=thi
			ans=i
	print(ans)
main()
