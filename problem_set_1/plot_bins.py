#!/usr/bin/env python 

import matplotlib.pyplot as plt 

import matplotlib 
rcparams = {}
rcparams['text.usetex'] = True
rcparams['axes.linewidth'] = 0.5 
rcparams['font.family'] = 'Times New Roman'
rcparams['font.size'] = 16
matplotlib.rcParams.update(rcparams)

filename = 'data/binned.dat'
lines = open(filename).read().splitlines()
lines = [int(i) for i in lines]

labels = ['0 - 0.1', '0.1 - 0.2', '0.2 - 0.3', '0.3 - 0.4', '0.4 - 0.5', '0.5 - 0.6', '0.6 - 0.7', '0.7 - 0.8', '0.8 - 0.9', '0.9 - 1.0']
x_pos = [i for i, _ in enumerate(labels)]

plt.figure(figsize=(16,8))
plt.bar(x_pos, lines, color='green')
plt.xlabel('Bins')
plt.ylabel('Number of Values')

plt.xticks(x_pos, labels)

plt.savefig('plots/bar.pdf')
