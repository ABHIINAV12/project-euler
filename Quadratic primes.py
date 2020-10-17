def prime(a):
	if a<0:
		a*=-1
	if a<2:
		return 0
	if a==2:
		return 1
	if a%2==0:
		return 0
	curr=3
	while (curr*curr<=a):
		if a%curr==0:
			return 0
		curr+=1
	return 1

def fun(a,b):
	cnt=0
	curr=0
	while 1:
		val=curr*curr + a*curr+ b
		if not prime(val):
			break
		cnt+=1
		curr+=1
	return cnt


def main():
	ans=0
	curr=-1
	for i in range(-1000,1001):
		for j in range(-1000,1001):
			th=fun(i,j)
			if th>curr:
				curr=th
				ans=i*j
	print(ans)


main()