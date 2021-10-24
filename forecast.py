#weatherForecast

import requests as rq

city = input("Which city's weather you need to know")
print(city)

print("Here's the forecast for your requested area"+city)

show = rq.get('https://wttr.in/{}'.format(city))
print(show.text)
