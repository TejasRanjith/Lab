select SubjectName,avg(Mark)
from Subject,M_Mark 
where Subject.SubjectCode = M_Mark.SubjectCode
group by SubjectName;