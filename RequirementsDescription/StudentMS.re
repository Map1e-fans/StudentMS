As a administrator, I want to add new student records, so that system can keep track of student information accurately {
	Basic Flow {
    	(User) 1. the administrator shall enters student name.
    	(User) 2. the administrator shall enters student date of birth.
    	(User) 3. the administrator shall enters student id.
    	(System) 4. When add new student record, the system shall check whether user have permession.
    	(System) 5. When add new student, the system shall check whether id is existed.
    	(System) 6. When add new student, the system shall stores new student record in database for future reference.
	}
	Alternative Flow {
		A. At any time, entered information is incomplete :
			1.  displays an error message and prompts user to provide missing data.
		B. At any time, student id is existed :
			2.  displays an error messgae and prompts user to check data.
	}
}

As a administrator, I want to manage user permissions, so that system maintains data security {
	Basic Flow {
		(User) 1. The administrator shall select user management section.
		(User) 2. The administrator shall select a user.
		(User) 3. The administrator shall edit user permissions.
		(System) 4. When change user permessions, the system shall check whether user have permession.
		(System) 5. When change user permessions, the system shall updates user permissions settings accordingly.
	}
}

As a administrator, I want to edit existing student records, so that I can keep student information accurate {
	Basic Flow {
		(User) 1. the administrator shall logs into system.
		(User) 2. the administrator shall selects option to edit a student record.
		(User) 3. the administrator shall makes necessary changes to student details.
		(System) 4. When edit student records, the system shall check whether user have permession.
		(System) 5. When edit student records, the system shall updates student record.
	}
}

As a teacher, I want to access existing student records, so that I can view their personal information {
	Basic Flow {
		(User) 1. The teacher shall log into system.
		(User) 2. The teacher shall searches for a specific student by name or ID.
		(User) 3. The teacher shall select a student profile.
		(System) 4. When select a student, the system shall display student information.
	}
}

As a teacher, I want to update student grades, so that I can keep their academic records up to date {
	Basic Flow {
		(User) 1. the teacher shall select a student.
		(User) 2. the teacher shall select a particular subject.
		(User) 3. the teacher shall enters updated grade for that subject.
		(System) 4. When update student grades, the system shall check whether user have permession.
		(System) 5. When update student grades, the system shall check grade is valid.
		(System) 6. When update student grades, the system shall updates student record in database.
	} Alternative Flow {
		A. At any time, entered grade is invalid :
			1. notifies teacher and requests a valid grade.
    }
}

As a administrator, I want to delete student records, so that outdated or irrelevant information can be removed {
	Basic Flow {
		(User) 1. The administrator shall logs into system.
		(User) 2. The administrator shall selects delete option.
		(User) 3. The administrator shall confirms deletion.
		(System) 4. When delete student, the system shall check whether user have permession.
		(System) 4. When detele student, the system shall removes this student record from database.
	}
}

As a student, I want to view my class schedule, so that I can plan my day effectively {
	Basic Flow {
    	(User) 1. the student shall logs into system.
    	(User) 2. The student shall navigates to class schedule section.
    	(System) 3. The system shall displays class schedule.
	}
	Alternative Flow {
    	A. At any time, a temporary system error preventing schedule retrieval :
    		1.  informs student and suggests trying again later.
	}
}

As a student, I want to check my course schedule, so that I know my classroom {
	Basic Flow {
		(User) 1. the student shall log into system.
		(User) 2. the student shall selects Course Schedule option.
		(System) 3. When student selects Course Schedule option, the system shall display student class schedule with details on time and location.
	}
	Alternative Flow {
		A. At any time, student has no registered courses :
			1.  inform student that there is no schedule available.
	}
}

As a student, I want to receive notifications about important school events, so that I can stay updated {
	Basic Flow {
		(User) 1. the student shall configures notification preferences in their profile.
		(System) 2. When a new notification is added by teacher or administrator, the system shall send notifications to student.
	}
}