import sqlite3

#Connect to db or create one
conn = sqlite3.connect("example.db")
cursor = conn.cursor()

#Create a table
cursor.execute('''
               CREATE TABLE IF NOT EXISTS ABC(
               id INTEGER PRIMARY KEY AUTOINCREMENT,
               name TEXT NOT NULL,
               age INTEGER NOT NULL
               ) 
               ''')

#Insert sample data
users = [
    ('Alice', 25),
    ('Bob', 30),
    ('Charlie', 22)
]

cursor.executemany('''INSERT INTO ABC (name,age) VALUES (?,?)''',users)

cursor.execute('''SELECT * FROM ABC WHERE age=30''')
rows = cursor.fetchall()
for r in rows:
    print(r)


#Commit changes and close connection.
conn.commit()
conn.close()

print("Database and table created, data inserted successfully.")