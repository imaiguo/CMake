
file(GENERATE OUTPUT result.txt CONTENT "$<LIST:SORT,a;b,COMPARE:STRING,CASE:SENSITIVE,ORDER:WRONG_OPTION>")
