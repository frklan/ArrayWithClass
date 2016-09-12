## Ett enkelt klass-test för Arduino

Ger följande output på Serial:
```
Skapar 5 foo-objekt med pekare:
Initierar..
Detta foo-objekt har adress: 0x3FFF0B6C
foo.init(0)
Detta foo-objekt har adress: 0x3FFF0B74
foo.init(10)
Detta foo-objekt har adress: 0x3FFF0B7C
foo.init(20)
Detta foo-objekt har adress: 0x3FFF0B84
foo.init(30)
Detta foo-objekt har adress: 0x3FFF0B8C
foo.init(40)
done
Läser..
x = 0
x = 10
x = 20
x = 30
x = 40
done.
---
Skapar 5 foo-objekt på stacken:
Detta foo-objekt har adress: 0x3FFEF2A0
Detta foo-objekt har adress: 0x3FFEF2A4
Detta foo-objekt har adress: 0x3FFEF2A8
Detta foo-objekt har adress: 0x3FFEF2AC
Detta foo-objekt har adress: 0x3FFEF2B0
Initierar..
foo.init(0)
foo.init(100)
foo.init(200)
foo.init(300)
foo.init(400)
done
Läser..
x = 0
x = 100
x = 200
x = 300
x = 400
done.
---
```
