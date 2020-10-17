def fifth(a):
	num=1
	for i in range(0,5):
		num*=a
	return num

def fun(a):
	cnt=0
	copy=a
	while(a!=0):
		cnt+=fifth(a%10)
		a//=10
	if copy==cnt:
		return 1
	else:
		return 0


def main():
	ans=0
	# x digit --> max sum=x*(9^5) = x*59049
	for i in range(10,2000000):
		if fun(i):
			ans+=i
	print(ans)


main()