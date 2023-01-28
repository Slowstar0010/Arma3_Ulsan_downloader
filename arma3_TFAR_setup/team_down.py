import requests

def DownloadFile(teamspeak):
    file = teamspeak.split('/')[-1]
    response = requests.get(teamspeak)
    installer = open(file, 'wb')
    installer.close()
    return 
def install():
    


DownloadFile("https://cdn.discordapp.com/attachments/1011478821247143967/1068808347861647380/TeamSpeak3-Client-win64-3.5.6.exe")