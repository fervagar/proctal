#ifndef LINUX_PTRACE_H
#define LINUX_PTRACE_H

#include <linux/proctal.h>

#define PROCTAL_LINUX_PTRACE_X86_REG_RAX 0x0
#define PROCTAL_LINUX_PTRACE_X86_REG_RBX 0x1
#define PROCTAL_LINUX_PTRACE_X86_REG_RCX 0x2
#define PROCTAL_LINUX_PTRACE_X86_REG_RDX 0x3
#define PROCTAL_LINUX_PTRACE_X86_REG_RSI 0x4
#define PROCTAL_LINUX_PTRACE_X86_REG_RDI 0x5
#define PROCTAL_LINUX_PTRACE_X86_REG_RBP 0x6
#define PROCTAL_LINUX_PTRACE_X86_REG_RSP 0x7
#define PROCTAL_LINUX_PTRACE_X86_REG_RIP 0x8
#define PROCTAL_LINUX_PTRACE_X86_REG_EFLAGS 0x9
#define PROCTAL_LINUX_PTRACE_X86_REG_R8 0xA
#define PROCTAL_LINUX_PTRACE_X86_REG_R9 0xB
#define PROCTAL_LINUX_PTRACE_X86_REG_R10 0xC
#define PROCTAL_LINUX_PTRACE_X86_REG_R11 0xD
#define PROCTAL_LINUX_PTRACE_X86_REG_R12 0xE
#define PROCTAL_LINUX_PTRACE_X86_REG_R13 0xF
#define PROCTAL_LINUX_PTRACE_X86_REG_R14 0x10
#define PROCTAL_LINUX_PTRACE_X86_REG_R15 0x11

#define PROCTAL_LINUX_PTRACE_X86_REG_DR0 0x8000
#define PROCTAL_LINUX_PTRACE_X86_REG_DR1 0x8001
#define PROCTAL_LINUX_PTRACE_X86_REG_DR2 0x8002
#define PROCTAL_LINUX_PTRACE_X86_REG_DR3 0x8003
#define PROCTAL_LINUX_PTRACE_X86_REG_DR4 0x8004
#define PROCTAL_LINUX_PTRACE_X86_REG_DR5 0x8005
#define PROCTAL_LINUX_PTRACE_X86_REG_DR6 0x8006
#define PROCTAL_LINUX_PTRACE_X86_REG_DR7 0x8007

int proctal_linux_ptrace_attach(struct proctal_linux *pl);
int proctal_linux_ptrace_detach(struct proctal_linux *pl);

int proctal_linux_ptrace_stop(struct proctal_linux *pl);
int proctal_linux_ptrace_cont(struct proctal_linux *pl);
int proctal_linux_ptrace_step(struct proctal_linux *pl);

int proctal_linux_ptrace_wait_trap(struct proctal_linux *pl);

int proctal_linux_ptrace_get_instruction_address(struct proctal_linux *pl, void **addr);
int proctal_linux_ptrace_set_instruction_address(struct proctal_linux *pl, void *addr);

int proctal_linux_ptrace_set_x86_reg(struct proctal_linux *pl, int reg, unsigned long long v);
int proctal_linux_ptrace_get_x86_reg(struct proctal_linux *pl, int reg, unsigned long long *v);

#endif /* LINUX_PTRACE_H */
