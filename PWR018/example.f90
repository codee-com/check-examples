! PWR018: Call to recursive function within a loop may inhibit vectorization
! https://www.codee.com/catalog/pwr018

recursive function fibonacci(n) result(fibo)
    implicit none
    integer, intent(in) :: n
    integer :: fibo
    if (n <= 2) then
        fibo = 1
    else
        fibo = fibonacci(n - 1) + fibonacci(n - 2)
    end if
end function fibonacci

subroutine example(times)
    integer :: sum, fibonacci
    integer:: i, times

    do i = 1, times
        sum = sum + fibonacci(i)
    end do
end subroutine
