# Author Cool Ravi

import requests
import instaloader
import webbrowser

username = input("Enter username:")
webbrowser.open(f'www.instagram.com/{username}')
time.sleep(5)
condition = TackInput().lower()
if "yes" in condition:
    bot = instaloader.Instaloader()
    bot.download_profile(username,profile_pic_only=True)
    print('profile photo is downloaded)
