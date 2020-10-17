def main():
	sum1,sum2=0,0
	for i in range(1,101):
		sum1+=i
		sum2+=i*i
	sum1*=sum1
	print(sum1-sum2)

main()
