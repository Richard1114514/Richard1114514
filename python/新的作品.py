import pygame
import os,sys,time
from sys import exit


from pygame.locals import *

pygame.init()
eee = pygame.display.set_mode((900,600))
#ee = os.path.join((os.path.abspath(os.pathdirname(sys.argv[0])), 'desktop', 'eeeeeeeee.png')
background = pygame.image.load('eeeeeeeee.png')
while True:
    eventType = pygame.event.wait()
    if (eventType.type == QUIT):
        exit()
