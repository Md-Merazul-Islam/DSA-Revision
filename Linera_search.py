
def find_the_val(arr, tar):
    for i in arr:
        if i == tar:
            print("value found ", i)


def find_the_value_function(arr, tar):
    if tar in arr:
        print("this have")

def try_exc(arr,tar):
    try:
        idx = arr.index(tar)
        print("value ache")
    except ValueError:
        print("Nai ")

find_the_val([1, 2, 9, 4, 5], 9)
find_the_value_function([1, 2, 9, 4, 5], 9)
try_exc([1, 2, 9, 4, 5], 9)



