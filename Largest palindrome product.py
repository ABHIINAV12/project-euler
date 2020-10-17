def pallin(a):
	b=str(a)
	return b==b[::-1]

def main():
	ans=0
	for i in range(100,1000):
		for j in range(100,1000):
			num=i*j
			if pallin(num):
				ans=max(ans,num)
	print(ans)

main()
