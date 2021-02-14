arr = Array("Привет","Добрый день!","Удачной работы",";)","Здравствуй","Ready? WALLOP!","Good day forest. NOW GO!","Ethun")
Randomize()
MsgBox arr(Round((RND() * UBound(arr)), 0))