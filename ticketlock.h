struct ticketlock{
    unit locked;        //is it lock held?
    
    //for debugging:    
    char *name;         //name of lock.//number of lock
    struct cpu *cpu;    //the cpu holding the lock//
    unit pcs[10];       //the call stack(an array of program counters)
                        //the locked the lock.
};
