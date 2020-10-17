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
	ans,cnt,curr=-1,0,2
	while(cnt!=10001):
		if isprime(curr):
			cnt+=1
			ans=curr
		curr+=1
	print(ans)
main()
