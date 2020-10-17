import datetime 
import calendar

def main():	
	ans=0
	start_date = datetime.date(1901, 1, 1)
	end_date = datetime.date(2000, 12, 31)
	delta = datetime.timedelta(days=1)
	while start_date <= end_date:
		string = calendar.day_name[start_date.weekday()]
		if string=="Sunday" and start_date.day==1:
			ans+=1
		start_date += delta
	print(ans)
main()
