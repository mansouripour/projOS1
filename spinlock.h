// Mutual exclusion lock.
struct spinlock {
  uint locked;       // Is the lock held?

  // For debugging:
  char *name;        // Name of lock.
  struct cpu *cpu;   // The cpu holding the lock.
  uint pcs[10];      // The call stack (an array of program counters)
                     // that locked the lock.
};

struct ticketlock {
 int ticket; //the ticket which the new arrival process will get
 int turn; //the ticket number which is now being served
}ticketlock;
