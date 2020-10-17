def d(a):
	ret=0
	curr=1
	while(curr*curr<=a):
		if a%curr==0:
			ano=a//curr
			if ano==curr:
				ret+=ano
			else:
				if ano!=a:
					ret+=curr
					ret+=ano
				else:
					ret+=curr
		curr+=1
	return ret

def main():	
	ans=0
	l=[]
	l.append(0)
	for i in range(1,40005):
		l.append(d(i))
	for i in range(1,10001):
		if i!=l[i] and i==l[l[i]]:
			ans+=i
	print(ans)
main()
