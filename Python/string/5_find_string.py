# In this challenge, the user enters a string and a substring. You have to print the number of times that the substring occurs in the given string. String traversal will take place from left to right, not from right to left.
# help(str)
def count_substring(string, sub_string):
    count=0
    for index in range(0,len(string)):
        # print(string[index:index+len(sub_string)])
        if sub_string==string[index:index+len(sub_string)]:
            count+=1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)