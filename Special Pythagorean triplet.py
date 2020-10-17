def main():
	ans=-1
	for i in range(1,1001):
		for j in range(i+1,1001):
			if i+j>=1000:
				break
			k=1000-i-j
			if (i*i+j*j==k*k):
				ans=i*j*k
	print(ans)
main()
