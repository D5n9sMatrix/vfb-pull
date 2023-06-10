' Split Oracles Praise To Launch BiBles
' Split Oracles You Learn BiBles
' Split Love Pure Het Perfect
' Light Banner 
' Psalms 1:1
' “Blessed is the man that walketh not in the counsel of the ungodly, 
' nor standeth in the way of sinners, nor sitteth in the seat of the scornful.”
' King James Version (KJV)

function Split(Text As String, Delim As String = " ", Count As Long = (1 shl 31)-1, Ret() As string) as long
    if Count<0 then Count = (1 shl 31)-1 'max possible
  if Count=0 then erase ret: return 0
 
  dim as long iStart = 1
  for N as long = 0 to Count-1
    redim preserve Ret(N) as string
    var iFound = instr( iStart , Text , Delim )
    if iFound=0 then Ret(N) = mid(Text,iStart): return N+1
    Ret(N) = mid(Text,iStart,(iFound-iStart))
    if iFound=iStart then N -= 1
    iStart = iFound+len(Delim)
  next N 
  return Count
End function
 
#define ShowResult() print iWords;: for N as integer = 0 to iWords-1 : print " '"+Words(N)+"'"; : next N : print
 
redim as string Words()
dim as integer iWords
 
iWords = Split("Hello World"," ",,Words())
ShowResult()
 
iWords = Split(" "," ",,Words())
ShowResult()
 
iWords = Split("Hello How are you"," ",2,Words())
ShowResult()
 
iWords = Split("Hello How are you"," H",,Words())
ShowResult()
 
iWords = Split("Hello How are you","!",,Words())
ShowResult()
 
sleep
 
