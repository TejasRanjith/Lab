thisdict={"brand":"Ford","model":"Mustang","year":1964}
print(thisdict["brand"])
thisdict.get("model")

print(thisdict.keys())
print(thisdict.values())
#print(thisdict.items())
thisdict.update({"year":2020})
print(thisdict)
thisdict.pop("model")
print(thisdict)