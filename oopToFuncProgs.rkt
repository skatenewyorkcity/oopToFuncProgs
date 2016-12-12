#lang racket
> (define (countTot X)
  (cond 
    ((null? X) 0)
    ((list? (car X)) (+ (countTot (car X)) (countTot (cdr X))))
    (else (+ 1 (countTot (cdr X))))))

> (define (countOcc X val)
    (cond ((null? X) 0)
          ((= (car X) val) (+ 1 (countOcc (cdr X) val)))
          (else (countOcc (cdr X) val))))