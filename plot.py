#!/usr/bin/env python3

import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import numpy as np

# Create figure and axes
fig, ax = plt.subplots()
x = []
y = []
line, = ax.plot(x, y)

# Function to update the plot
def animate(i):
    x.append(i)
    y.append(np.sin(i))
    line.set_data(x, y)
    ax.relim()
    ax.autoscale_view()

# Create animation
ani = FuncAnimation(fig, animate, interval=100)
plt.show()
