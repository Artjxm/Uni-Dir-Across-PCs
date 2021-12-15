select t.t_name as 'Имя тьютора',
	count(e.st_id) as 'Количество учеников'
from tutor t, exams e
where t.t_id>0
group by t.t_id;