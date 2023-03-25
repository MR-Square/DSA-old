# Implementation of Quick Sort Algorithm

def quickSort(a):
    if len(a)<=1:
        return a
    else:
        pivote_element = a.pop()
        lower_list = [x for x in a if x < pivote_element]
        upper_list = [x for x in a if x > pivote_element]

        return quickSort(lower_list) + [pivote_element] + quickSort(upper_list)
        
    

if __name__ == '__main__':
    print(quickSort(list(map(int,input().split()))))
