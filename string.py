# Python 3 implementation to count substrings 
# starting with character X and ending 
# with character Y 

# function to count substrings starting with 
# character X and ending with character Y 
def countSubstr(str, n, x, y): 

	# to store total count of 
	# required substrings 
	tot_count = 0

	# to store count of character 'x' 
	# up to the point the string 'str' 
	# has been traversed so far 
	count_x = 0

	# traverse 'str' form left to right 
	for i in range(n): 

		# if true, increment 'count_x' 
		if str[i] == x: 
			count_x += 1

		# if true accumulate 'count_x' 
		# to 'tot_count' 
		if str[i] == y: 
			tot_count += count_x 
	
	# required count 
	return tot_count 

# Driver Code 
n = int(input())
str = input()
x,y = input().split()
print(countSubstr(str, n, x, y)) 

# This code is contributed SamyuktaSHegde 

