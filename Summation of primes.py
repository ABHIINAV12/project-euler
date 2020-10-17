def isprime(a):
	if a==2:
		return 1
	if a%2==0:
		return 0
	curr=2
	while(curr*curr<=a):
		if a%curr==0:
			return 0
		curr+=1
	return 1

def main():
	ans=0
	for i in range(2,2000000):
		if isprime(i):
			ans+=i
	print(ans)
main()
