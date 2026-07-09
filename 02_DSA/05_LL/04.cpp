/*
floyd loop detection algo

part - 1 -> detect if loop exists
    fast and slow pointer approach
        init fast and slow at head
        move slow by 1 step and fast by 2 steps until fast becomes equal to null or fast next is null
        if fast and slow becomes equal , loop exists

part 2 -> if loop exists, find the starting node
    re init slow at head again, keep fast at same place
    move slow and fast by 1 step, where they intersect(let's call it i), that will e the starting node 

part 3 -> if loop exist, remove loop
    create a temp at i
    move temp until temp->next != i
    then make temp->next == NULL

*/