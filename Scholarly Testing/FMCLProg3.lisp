; 3

; create a function in lisp which takes a list and reverses the elements of the list.   Extra credit:  If the list contains lists, those lists are also reverse


(defun reverse-list (list)
  (if (null list)
      nil
    (cons (car list) (reverse-list (cdr list)))))


(reverse-list '(1 2 3 4 5))


(defun reverse-list-recursive (list)
  (if (null list)
      nil
    (append (reverse-list-recursive (cdr list)) (list (car list)))))


(reverse-list-recursive '(1 2 3 4 5))


(defun reverse-list-recursive-2 (list)
  (if (null list)
      nil
    (if (null (cdr list))
        (list (car list))
      (append (reverse-list-recursive-2 (cdr list)) (list (car list))))))


(reverse-list-recursive-2 '(1 2 3 4 5))


