import sqlite3

conn = sqlite3.connect("somedb.db")
cursor = conn.cursor()

cursor.execute('''create table if not exists chartdtls (
               id integer primary key autoincrement,
               name text not null,
               dob date not null
               )''')

data = {
    ('shree','10-05-1999'),
    ('vinay','12-04-1999')
}

cursor.executemany('''
insert into chartdtls (name,dob) values(?,?)
''',data)
cursor.execute('''select * from chartdtls''')
res = cursor.fetchall()
for r in res:
    print(r)


conn.commit()
conn.close()