class add(int):
    def __call__(self,n):
        return add(self+n)

assert add(1) == 1
assert add(1)(2) == 3
assert add(1)(2)(3) == 6
print('Test pass.')