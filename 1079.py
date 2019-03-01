ori = input()
count = 0

while True:
	revs = ori[::-1]
	#如果本身是回文数的话，就不要在进行计算了
    #python大法处理字符串是真的强大
	if revs == ori:
		print(ori+" is a palindromic number.")
		break
	else:
		rlt = str(int(ori)+int(revs))
		print(ori+" + " + revs + " = "+rlt)		
		count += 1
		if count == 10:
			print("Not found in 10 iterations.")
			break
		ori = rlt
