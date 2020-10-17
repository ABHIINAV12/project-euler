def gcd(a,b):
	if a==0:
		return b
	if b==0:
		return a
	else:
		return gcd(b%a,a)

def lcm(a,b):
	ans=(a*b)//gcd(a,b)
	return ans

def main():
	ans=1
	for i in range(1,21):
		ans=lcm(ans,i)
	print(ans)

main()
