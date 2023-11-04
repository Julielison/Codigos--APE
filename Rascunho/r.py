ii = 0
for i in range(0,10,1):
    if int(ii) == float(ii):
        print(f'I={ii:.0f} J={ii+1:.0f}')
        print(f'I={ii:.0f} J={ii+2:.0f}')
        print(f'I={ii:.0f} J={ii+3:.0f}')
    else:
        print(f'I={ii:.1f} J={ii+1:.1f}')
        print(f'I={ii:.1f} J={ii+2:.1f}')
        print(f'I={ii:.1f} J={ii+3:.1f}')
    ii += 0.2
print(f'I={2} J={3}')
print(f'I={2} J={4}')
print(f'I={2} J={5}')