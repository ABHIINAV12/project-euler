def num_div(a):
	cnt,curr=0,1
	while(curr*curr<=a):
		if a%curr==0:
			ano=a/curr
			if ano==curr: 
				cnt+=1
			else:
				cnt+=2
		curr=curr+1
	return cnt


def main():
	ans,curr=-1,1
	while True:
		num=curr*(curr+1)
		num=num//2
		if num_div(num)>500:
			ans=num
			break
		curr+=1
	print(ans)
main()
