create table manages(
    emp_id char(8) references emp2(emp_id),
    manager_id char(8) references emp2(emp_id),
    unique(emp_id,manager_id)
);