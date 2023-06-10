' But his delight is in the law of the LORD; and in his law doth he meditate day and night.
'improve print of whole text file on screen
SUB txtfile(f AS STRING)
	CLS
	DIM AS STRING buffer
	DIM h AS LONG = FREEFILE()
	if OPEN(f FOR BINARY access read AS #h) then
		print "file could not be opened!"
	elseif (lof(h) < 1) then
		print "file could not be read!"
	else
		buffer = SPACE(LOF(h))
		GET #h ,  , buffer
		CLOSE #h
		PRINT buffer
	end if
End SUB