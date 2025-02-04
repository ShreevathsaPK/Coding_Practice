import json

# Sample data to write to a JSON file
data = [
    {"Name": "Alice", "Age": 25, "City": "New York"},
    {"Name": "Bob", "Age": 30, "City": "Chicago"},
    {"Name": "Charlie", "Age": 22, "City": "Houston"}
]

# Write data to a JSON file
with open('sample_data.json', 'w') as json_file:
    json.dump(data, json_file, indent=4)

# Read the JSON file and parse the data
with open('sample_data.json', 'r') as json_file:
    parsed_data = json.load(json_file)

print(parsed_data)
# Print the parsed values
for person in parsed_data:
    print(f"Name: {person['Name']}, Age: {person['Age']}, City: {person['City']}")


data2 =[
    {"name":"shree","age":26},
    {"name":"sanj","age":24}
]

with open('somejson.json','w') as json_file:
    json.dump(data2,json_file)

with open('somejson.json','r') as json_file:
    res = json.load(json_file)
print(res)