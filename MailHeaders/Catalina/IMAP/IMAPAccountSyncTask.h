//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPTask.h>

#import <IMAP/EFSignpostable-Protocol.h>
#import <IMAP/IMAPFetchMailboxStatusOperationDelegate-Protocol.h>

@class IMAPTaskManager, NSMutableArray, NSMutableSet, NSProgress, NSString;
@protocol IMAPAccount;

@interface IMAPAccountSyncTask : IMAPTask <EFSignpostable, IMAPFetchMailboxStatusOperationDelegate>
{
    NSMutableArray *_mailboxesNeedingStatus;	// 8 = 0x8
    NSMutableSet *_missedMailboxes;	// 16 = 0x10
    BOOL _userInitiated;	// 24 = 0x18
    id <IMAPAccount> _account;	// 32 = 0x20
    IMAPTaskManager *_taskManager;	// 40 = 0x28
    NSProgress *_checkProgress;	// 48 = 0x30
}

+ (id)signpostLog;	// IMP=0x00000000000169f5
@property(readonly, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property(readonly) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly) id <IMAPAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;	// IMP=0x000000000001804b
- (void)fetchMailboxStatusOperation:(id)arg1 missedMailboxes:(id)arg2;	// IMP=0x0000000000017950
- (void)fetchMailboxStatusOperation:(id)arg1 fetchedStatusesForMailboxNames:(id)arg2;	// IMP=0x0000000000017638
- (void)end;	// IMP=0x0000000000017540
- (void)operationFinished:(id)arg1;	// IMP=0x000000000001736f
- (void)recalculatePriorities;	// IMP=0x00000000000172fd
- (long long)_nextNetworkPriorityAndOperation:(id *)arg1;	// IMP=0x000000000001721f
- (id)nextNetworkOperation;	// IMP=0x00000000000171b8
- (void)cancel;	// IMP=0x00000000000170d5
@property(nonatomic) BOOL userInitiated;
- (id)mailboxNameWithoutPII;	// IMP=0x0000000000017022
- (id)initWithMailboxName:(id)arg1;	// IMP=0x0000000000016f53
- (id)initWithAccount:(id)arg1 taskManager:(id)arg2;	// IMP=0x0000000000016b1a
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

