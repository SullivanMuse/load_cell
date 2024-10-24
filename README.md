# load_cell
JM-14 Load Cell Project

## Adding library to Arduino project

1. Menu Bar -> Sketch -> Include Library -> Add ZIP Library...
2. Navigate to library source code zip file
3. Select ZIP file
4. Click "Open"

## Getting matplotlib animation to work on WSL

If you get the following error:

```
./plot.py 
/mnt/c/Users/sulli/Documents/Arduino/load_cell/./plot.py:22: UserWarning: frames=None which we can infer the length of, did not pass an explicit *save_count* and passed cache_frame_data=True.  To avoid a possibly unbounded cache, frame data caching has been disabled. To suppress this warning either pass `cache_frame_data=False` or `save_count=MAX_FRAMES`.
  ani = animation.FuncAnimation(fig, animate, interval=100)
/mnt/c/Users/sulli/Documents/Arduino/load_cell/./plot.py:23: UserWarning: FigureCanvasAgg is non-interactive, and thus cannot be shown
  plt.show()
/home/smuse/.envs/main/lib/python3.10/site-packages/matplotlib/animation.py:872: UserWarning: Animation was deleted without rendering anything. This is most likely not intended. To prevent deletion, assign the Animation to a variable, e.g. `anim`, that exists until you output the Animation using `plt.show()` or `anim.save()`.
```

you may need to execute the following steps.

1. `sudo apt install ffmpeg`
2. `pip install PyQt5` (make sure you are in a virtual environment)
3. Put the following in your `~/.bashrc`: `export QT_QPA_PLATFORM=xcb`
4. `sudo apt install libxcb-xinerama0 libqt5x11extras5`
