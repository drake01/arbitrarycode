#!/usr/bin/env python
import wx

app = wx.App(False) # create a new app don't redirect stdout/stderr to a window
frame = wx.Frame(None, wx.ID_ANY, "Hello World") # A Frame is a top-level window.
frame.Show(True) #show the fame.
app.MainLoop()
