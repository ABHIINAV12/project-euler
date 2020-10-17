def main():
	a=1
	for i in range(0,1000):
		a*=2
	sum=0
	while a!=0:
		sum+=a%10
		a//=10	
	print(sum)
main()
 	