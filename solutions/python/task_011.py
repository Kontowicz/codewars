def namelist(names):
    names = [x['name'] for x in names]
    if len(names) == 0:
        return ''
    if len(names) == 1:
        return names[0]
    if len(names) == 2:
        return ' & '.join(names)
    else:
        to_return = ''
        for i in range(0, len(names) - 2):
            to_return += names[i] + ', '
        to_return += names[-2] + ' & ' + names[-1]
        return to_return

assert namelist([{'name': 'Bart'},{'name': 'Lisa'},{'name': 'Maggie'},{'name': 'Homer'},{'name': 'Marge'}]) == 'Bart, Lisa, Maggie, Homer & Marge'

assert namelist([{'name': 'Bart'},{'name': 'Lisa'},{'name': 'Maggie'}]) == 'Bart, Lisa & Maggie'
assert namelist([{'name': 'Bart'},{'name': 'Lisa'}]) == 'Bart & Lisa'
assert namelist([{'name': 'Bart'}]) == 'Bart'
assert namelist([]) == ''
print('Test pass.')