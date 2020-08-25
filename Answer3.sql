select *, grade=
CASE 
when marks > 90 THEN 'A+'
when marks > 70 THEN 'A'
when marks > 50 THEN 'B'
when marks >= 40 THEN 'C'
ELSE 'FAIL'
END
from students;
