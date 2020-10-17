def main():
	ans,curr=1,2
	num=600851475143
	while(num!=1):
		if num%curr==0:
			ans=curr
			while(num%curr==0):
				num=num/curr
		curr=curr+1
	print(ans)

main()
