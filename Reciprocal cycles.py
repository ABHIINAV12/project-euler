def rec(a):
	l=[]
	num,curr=10,1
	while 1:
		while num<a:
			num*=10
		rem=num%a
		if (rem in l):
			break
		num=rem
		l.append(num)
		curr+=1
	return curr

def factor(a):
	while(a%2==0):
		a//=2
	while(a%5==0):
		a//=5
	if a==1:
		return 0
	else:
		return 1

def main():
	ans,val=0,0
	for d in range(1,1000):
		if factor(d):
			x = rec(d)
			if x>val:
				val=x
				ans=d
	print(ans)
main()