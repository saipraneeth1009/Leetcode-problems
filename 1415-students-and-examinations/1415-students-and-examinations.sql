# Write your MySQL query statement below
select e1.student_id,e1.student_name,e2.subject_name,sum(case when e3.subject_name is null then 0 else 1 end) as attended_exams from Students as e1 cross join Subjects as e2 left join Examinations as e3 on e1.student_id=e3.student_id and e2.subject_name=e3.subject_name group by e1.student_id,e1.student_name,e2.subject_name order by e1.student_id,e2.subject_name;