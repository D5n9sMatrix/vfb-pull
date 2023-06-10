'  Oracles Connect the Matrix and Solver Pull
' Create the Pull and Push  Promise Repository
'  Manager Sales ...
' “Trust in the LORD with all thine heart; and lean not unto thine own understanding.”
' Proverbs 3:5 (KJV)
dim shared buffer as string

dim shared bible() as string

randomize()

Sub Split(Text As String, Delim As String = " ", Count As Long = -1, Ret() As string)

   Dim As Long x, p
   If Count < 1 Then
      Do
         x = InStr(x + 1, Text, Delim)
         p += 1
      Loop Until x = 0
      Count = p - 1
   ElseIf Count = 1 Then
      ReDim Ret(Count - 1)
      Ret(0) = Text
   Else
      Count -= 1
   End If
   Dim RetVal(Count) As Long
   x = 0
   p = 0
   Do Until p = Count
      x = InStr(x + 1,Text,Delim)
      RetVal(p) = x
      p += 1
   Loop
   ReDim Ret(Count)
   Ret(0) = Left(Text, RetVal(0) - 1 )
   p = 1
   Do Until p = Count
      Ret(p) = Mid(Text, RetVal(p - 1) + 1, RetVal(p) - RetVal(p - 1) - 1 )
      p += 1
   Loop
   Ret(Count) = Mid(Text, RetVal(Count - 1) + 1)
   
End Sub


SUB txtfile(f AS STRING)
	CLS
	'DIM AS STRING buffer
	DIM h AS LONG = FREEFILE()
	OPEN f FOR BINARY AS #h
	buffer = SPACE(LOF(h))
	GET #h ,  , buffer
	CLOSE #h
	'PRINT buffer
End SUB

dim c as string
input "press key 1 for king james bible (english) or key 2 for pslams in hebrew: ", c
if c = "1" then
	txtfile("BibleKJV.txt")
elseif c = "2" then
	txtfile("./bible-heb/Psalms.acc.txt")
else
	print "INVALID INPUT! ERROR" : sleep 500 : end
endif

split(buffer, " ", -1, bible())

sub oracol()
	
	dim k as string, f as long = freefile()
		
	dim q as string, oracle as string
	
	do
		oracle = ""
		input "hello, please enter your question for the oracle: ", q
		print
		for i as integer = 0 to int(rnd*100) + 1
		oracle += bible(int(rnd*(ubound(bible)+1)))+ " "
		
		next i
		print oracle
		open "oracle.txt" for append as #f
		print #f, "question: " & q
		print #f, ""
		print #f, "the oracle says: " & oracle
		print #f, ""
		close #f
		print : print
		
		input "ask the oracle again? (y/n): ", k
	
	loop until k = "n"
	
	
	
end sub

oracol()
