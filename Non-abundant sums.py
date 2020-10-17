def sum_div(a):
	curr,s=1,0
	while curr*curr<=a:
		if a%curr==0:
			ano=a//curr
			if ano==curr:
				s+=ano
			else:
				if ano==a:
					s+=curr
				else:
					s+=curr
					s+=ano
		curr+=1
	return s

def main():
	l=[]
	ans=0
	check = [False for i in range(281240)] 
	for i in range(1,28124):
		if sum_div(i)>i:
			l.append(i)
	for i in range(0,len(l)):
		for j in range(0,len(l)):
			check[l[i]+l[j]]=1
	for i in range(1,28124):
		if check[i]==False:
			ans+=i

	print(ans)


main()