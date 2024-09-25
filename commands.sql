insert into emp values (1,'Steven', 'Marketing','1995-01-06',24000, NULL,2),
  (2,'Neena', 'FI_ACCOUNT', '1987-02-06',34000, NULL,1),
  (3,'Lex', 'FI_MGR', '1980-01-06',240000, NULL,1),
  (4,'Tejas','SA_REP','1987-06-06',20000,NULL,4),
  (5,'Peter','IT_PROG','1990-07-06',24000,NULL,4),
  (6,'David', 'IT_PROG', '1991-09-06',22000, NULL,4),
  (7,'vipin', 'IT_PROG', '1987-11-16',28000, NULL,4),
  (8,'Diana', 'Pur_Man', '1987-01-26',24000, NULL,3),
  (9,'John', 'FI_ACCOUNT', '1992-12-01', 24000, NULL,1),
  (10,'Ismael', 'CLERK', '1994-03-29', 4000, NULL,3),
  (11,'Mathew', 'CLERK', '1992-10-12', 46000, 200,3),
  (12,'Hayes', 'Marketing', '1998-04-21',14000, 1000,2),
  (13,'sarun', 'Marketing', '1993-05-18',18000, NULL,2),
  (14,'Henin','FI_MGR', '1980-08-06',240000, NULL,1),
  (15,'Greesh','Clerk', '1980-08-06',240000, NULL,5);

insert into dept values (1, 'Administration', null, 'Boston'),
    (2, 'Marketing', null, 'Boston'),
    (3, 'Purchase', null, 'perryridge'),
    (4, 'Programming',null, 'Hudson'),
    (5, 'HR', null, 'Hudson');

Alter table dept add foreign key(manager_id) references emp(EMP_no);
Update dept set manager_id=2 where department_id=1;
Update dept set manager_id=1 where department_id=2;
Update dept set manager_id=8 where department_id=3;
Update dept set manager_id=7 where department_id=4;
