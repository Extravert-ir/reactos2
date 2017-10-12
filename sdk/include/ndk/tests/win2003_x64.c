/* Version definitions */
#undef NTDDI_VERSION
#define NTDDI_VERSION NTDDI_WS03SP1
#undef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_WS03

#include <ntifs.h>
#include <ndk/ntndk.h>

#define C_ASSERT_FIELD(Type, Offset, MemberType, MemberName) \
    C_ASSERT(FIELD_OFFSET(Type, MemberName) == Offset); \
    C_ASSERT(FIELD_SIZE(Type, MemberName) == sizeof(MemberType));

/* KTHREAD */
C_ASSERT_FIELD(KTHREAD, 0x000, DISPATCHER_HEADER, Header)
C_ASSERT_FIELD(KTHREAD, 0x018, LIST_ENTRY, MutantListHead)
C_ASSERT_FIELD(KTHREAD, 0x028, PVOID, InitialStack)
C_ASSERT_FIELD(KTHREAD, 0x030, PVOID, StackLimit)
C_ASSERT_FIELD(KTHREAD, 0x038, PVOID, KernelStack)
C_ASSERT_FIELD(KTHREAD, 0x040, ULONG64, ThreadLock)
C_ASSERT_FIELD(KTHREAD, 0x048, KAPC_STATE, ApcState)
C_ASSERT_FIELD(KTHREAD, 0x048, UCHAR[43], ApcStateFill)
C_ASSERT_FIELD(KTHREAD, 0x073, UCHAR, ApcQueueable)
C_ASSERT_FIELD(KTHREAD, 0x074, UCHAR, NextProcessor)
C_ASSERT_FIELD(KTHREAD, 0x075, UCHAR, DeferredProcessor)
C_ASSERT_FIELD(KTHREAD, 0x076, UCHAR, AdjustReason)
C_ASSERT_FIELD(KTHREAD, 0x077, CHAR, AdjustIncrement)
C_ASSERT_FIELD(KTHREAD, 0x078, ULONG64, ApcQueueLock)
C_ASSERT_FIELD(KTHREAD, 0x080, LONG64, WaitStatus)
C_ASSERT_FIELD(KTHREAD, 0x088, PKWAIT_BLOCK, WaitBlockList)
C_ASSERT_FIELD(KTHREAD, 0x088, PKGATE, GateObject)
C_ASSERT_FIELD(KTHREAD, 0x090, UCHAR, Alertable)
C_ASSERT_FIELD(KTHREAD, 0x091, UCHAR, WaitNext)
C_ASSERT_FIELD(KTHREAD, 0x092, UCHAR, WaitReason)
C_ASSERT_FIELD(KTHREAD, 0x093, CHAR, Priority)
C_ASSERT_FIELD(KTHREAD, 0x094, UCHAR, EnableStackSwap)
C_ASSERT_FIELD(KTHREAD, 0x095, UCHAR, SwapBusy)
C_ASSERT_FIELD(KTHREAD, 0x096, UCHAR[2], Alerted)
C_ASSERT_FIELD(KTHREAD, 0x098, LIST_ENTRY, WaitListEntry)
C_ASSERT_FIELD(KTHREAD, 0x098, SINGLE_LIST_ENTRY, SwapListEntry)
C_ASSERT_FIELD(KTHREAD, 0x0A8, PKQUEUE, Queue)
C_ASSERT_FIELD(KTHREAD, 0x0B0, PVOID, Teb)
C_ASSERT_FIELD(KTHREAD, 0x0B8, KTIMER, Timer)
C_ASSERT_FIELD(KTHREAD, 0x0B8, UCHAR[60], TimerFill)
C_ASSERT_FIELD(KTHREAD, 0x0F4, LONG, ThreadFlags)
C_ASSERT_FIELD(KTHREAD, 0x0F8, KWAIT_BLOCK[4], WaitBlock)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[43], WaitBlockFill0)
C_ASSERT_FIELD(KTHREAD, 0x123, UCHAR, SystemAffinityActive)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[91], WaitBlockFill1)
C_ASSERT_FIELD(KTHREAD, 0x153, CHAR, PreviousMode)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[139], WaitBlockFill2)
C_ASSERT_FIELD(KTHREAD, 0x183, UCHAR, ResourceIndex)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[187], WaitBlockFill3)
C_ASSERT_FIELD(KTHREAD, 0x1B3, UCHAR, LargeStack)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[44], WaitBlockFill4)
C_ASSERT_FIELD(KTHREAD, 0x124, ULONG, ContextSwitches)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[92], WaitBlockFill5)
C_ASSERT_FIELD(KTHREAD, 0x154, UCHAR, State)
C_ASSERT_FIELD(KTHREAD, 0x155, UCHAR, NpxState)
C_ASSERT_FIELD(KTHREAD, 0x156, UCHAR, WaitIrql)
C_ASSERT_FIELD(KTHREAD, 0x157, CHAR, WaitMode)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[140], WaitBlockFill6)
C_ASSERT_FIELD(KTHREAD, 0x184, ULONG, WaitTime)
C_ASSERT_FIELD(KTHREAD, 0x0F8, UCHAR[188], WaitBlockFill7)
C_ASSERT_FIELD(KTHREAD, 0x1B4, SHORT, KernelApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x1B6, SHORT, SpecialApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x1B4, ULONG, CombinedApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x1B8, LIST_ENTRY, QueueListEntry)
C_ASSERT_FIELD(KTHREAD, 0x1C8, PKTRAP_FRAME, TrapFrame)
C_ASSERT_FIELD(KTHREAD, 0x1D0, PVOID, CallbackStack)
C_ASSERT_FIELD(KTHREAD, 0x1D8, PVOID, ServiceTable)
C_ASSERT_FIELD(KTHREAD, 0x1E0, ULONG, KernelLimit)
C_ASSERT_FIELD(KTHREAD, 0x1E4, UCHAR, ApcStateIndex)
C_ASSERT_FIELD(KTHREAD, 0x1E5, UCHAR, IdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x1E6, UCHAR, Preempted)
C_ASSERT_FIELD(KTHREAD, 0x1E7, UCHAR, ProcessReadyQueue)
C_ASSERT_FIELD(KTHREAD, 0x1E8, PVOID, Win32kTable)
C_ASSERT_FIELD(KTHREAD, 0x1F0, ULONG, Win32kLimit)
C_ASSERT_FIELD(KTHREAD, 0x1F4, UCHAR, KernelStackResident)
C_ASSERT_FIELD(KTHREAD, 0x1F5, CHAR, BasePriority)
C_ASSERT_FIELD(KTHREAD, 0x1F6, CHAR, PriorityDecrement)
C_ASSERT_FIELD(KTHREAD, 0x1F7, CHAR, Saturation)
C_ASSERT_FIELD(KTHREAD, 0x1F8, ULONG64, UserAffinity)
C_ASSERT_FIELD(KTHREAD, 0x200, PKPROCESS, Process)
C_ASSERT_FIELD(KTHREAD, 0x208, ULONG64, Affinity)
C_ASSERT_FIELD(KTHREAD, 0x210, PKAPC_STATE[2], ApcStatePointer)
C_ASSERT_FIELD(KTHREAD, 0x220, KAPC_STATE, SavedApcState)
C_ASSERT_FIELD(KTHREAD, 0x220, UCHAR[43], SavedApcStateFill)
C_ASSERT_FIELD(KTHREAD, 0x24B, CHAR, FreezeCount)
C_ASSERT_FIELD(KTHREAD, 0x24C, CHAR, SuspendCount)
C_ASSERT_FIELD(KTHREAD, 0x24D, UCHAR, UserIdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x24E, UCHAR, CalloutActive)
C_ASSERT_FIELD(KTHREAD, 0x24F, UCHAR, CodePatchInProgress)
C_ASSERT_FIELD(KTHREAD, 0x250, PVOID, Win32Thread)
C_ASSERT_FIELD(KTHREAD, 0x258, PVOID, StackBase)
C_ASSERT_FIELD(KTHREAD, 0x260, KAPC, SuspendApc)
C_ASSERT_FIELD(KTHREAD, 0x260, UCHAR, SuspendApcFill0)
C_ASSERT_FIELD(KTHREAD, 0x261, CHAR, Quantum)
C_ASSERT_FIELD(KTHREAD, 0x260, UCHAR[3], SuspendApcFill1)
C_ASSERT_FIELD(KTHREAD, 0x263, UCHAR, QuantumReset)
C_ASSERT_FIELD(KTHREAD, 0x260, UCHAR[4], SuspendApcFill2)
C_ASSERT_FIELD(KTHREAD, 0x264, ULONG, KernelTime)
C_ASSERT_FIELD(KTHREAD, 0x260, UCHAR[64], SuspendApcFill3)
C_ASSERT_FIELD(KTHREAD, 0x2A0, PVOID, TlsArray)
C_ASSERT_FIELD(KTHREAD, 0x260, UCHAR[72], SuspendApcFill4)
C_ASSERT_FIELD(KTHREAD, 0x2A8, PVOID, LegoData)
C_ASSERT_FIELD(KTHREAD, 0x260, UCHAR[83], SuspendApcFill5)
C_ASSERT_FIELD(KTHREAD, 0x2B3, UCHAR, PowerState)
C_ASSERT_FIELD(KTHREAD, 0x2B4, ULONG, UserTime)
C_ASSERT_FIELD(KTHREAD, 0x2B8, KSEMAPHORE, SuspendSemaphore)
C_ASSERT_FIELD(KTHREAD, 0x2B8, UCHAR[28], SuspendSemaphorefill)
C_ASSERT_FIELD(KTHREAD, 0x2D4, ULONG, SListFaultCount)
C_ASSERT_FIELD(KTHREAD, 0x2D8, LIST_ENTRY, ThreadListEntry)
C_ASSERT_FIELD(KTHREAD, 0x2E8, PVOID, SListFaultAddress)
C_ASSERT_FIELD(KTHREAD, 0x2F0, LONG64, ReadOperationCount)
C_ASSERT_FIELD(KTHREAD, 0x2F8, LONG64, WriteOperationCount)
C_ASSERT_FIELD(KTHREAD, 0x300, LONG64, OtherOperationCount)
C_ASSERT_FIELD(KTHREAD, 0x308, LONG64, ReadTransferCount)
C_ASSERT_FIELD(KTHREAD, 0x310, LONG64, WriteTransferCount)
C_ASSERT_FIELD(KTHREAD, 0x318, LONG64, OtherTransferCount)