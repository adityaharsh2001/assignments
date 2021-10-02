# id 813980264359395368
# token ODEzOTgwMjY0MzU5Mzk1MzY4.YDXMMg.LF0M9kgmR2kaVzOheNQCo7AlLAw
# 12582912
# https://discord.com/api/oauth2/authorize?client_id=813980264359395368&permissions=8&scope=bot
import discord
#print(discord.__version__)  # check to make sure at least once you're on the right version!

# token = open(r"token.txt", "r").read()  # I've opted to just save my token to a text file. 

client = discord.Client()  # starts the discord client.


@client.event  # event decorator/wrapper. More on decorators here: https://pythonprogramming.net/decorators-intermediate-python-tutorial/
async def on_ready():  # method expected by client. This runs once when connected
    await client.change_presence(status=discord.Status.invisible)
    print(f'We have logged in as {client.user}')  # notification of login.
    print(client.guilds)

# @client.event
# async def on_message(message):  # event that happens per any message.

#     # each message has a bunch of attributes. Here are a few.
#     # check out more by print(dir(message)) for example.
#     print(f"{message.channel}: {message.author}: {message.author.name}: {message.content}")
#     # input(f"{testing-stuff}")
#     # print(f"{hello everone}")


   


@client.event
async def on_message(message):
    print(f"----------------------------\nServer name: {message.guild.name}\nChannel name: {message.channel}\nMember's name & tag:{message.author}\nMessage: {message.author.name}: {message.content}\n----------------------------")
    


client.run("ODQ0MjUwNTI4MDA3NTg1ODQz.YKPrkw.kI_iz_8tFAw4wud7Oh9CF-UY7-4")  # recall my token was saved!