import pandas as pd

data2 = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David'],
    'Age': [24, 27, 22, 32],
    'Country': ['USA', 'UK', 'Canada', 'Australia']
}
data1 =[
    {"name":"shree","age":26},
    {"name":"nitin","age":26},
    {"name":"thanush","age":22},
    {"name":"sanj","age":24}
]
df = pd.DataFrame(data1)

#indexing by position
print(df.iloc[0])
print(df.iloc[0,0])
print(df.iloc[0,1])

print("**************")

#indexing by column
print(df["name"])

#slicing
print(df.iloc[1:3])

#convert to json
json_data_of_pd = df.to_json('data.json',orient='records')  # You can change the orient based on your needs
print(json_data_of_pd)
print(type(json_data_of_pd))