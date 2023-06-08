def foo(a,b,z):
   
    print(a[z])

    if z==b:
        print('\nEnd list')
        return 
    
    return foo(a,b,z+1)



my_list = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
b=len(my_list)-1
z=0;
foo(my_list,b,z)