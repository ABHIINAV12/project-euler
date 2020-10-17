def main():	
	a=1
	for i in range (1,101):
		a*=i
	sum=0
	while a!=0:
		sum+=a%10
		a//=10
	print(sum)
main()
