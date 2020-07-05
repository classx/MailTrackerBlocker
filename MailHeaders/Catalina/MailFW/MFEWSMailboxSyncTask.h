//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSTask.h>

#import <MailFW/MFEWSFetchMessageMetadataOperationDelegate-Protocol.h>
#import <MailFW/MFEWSMailboxReconcileTaskOperationDelegate-Protocol.h>
#import <MailFW/MFEWSPersistMessageMetadataOperationDelegate-Protocol.h>

@class MFEWSAccount, MFEWSDeleteMailboxTaskOperation, MFEWSMailboxReconcileTaskOperation, MFEWSPersistMessageMetadataOperation, MFMailbox, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString;
@protocol MFEWSMailboxDataCache;

@interface MFEWSMailboxSyncTask : MFEWSTask <MFEWSMailboxReconcileTaskOperationDelegate, MFEWSFetchMessageMetadataOperationDelegate, MFEWSPersistMessageMetadataOperationDelegate>
{
    MFEWSMailboxReconcileTaskOperation *_reconcileOperation;	// 8 = 0x8
    MFEWSPersistMessageMetadataOperation *_persistMetadataOperation;	// 16 = 0x10
    NSMutableArray *_batchesNeedingFetch;	// 24 = 0x18
    NSMutableSet *_currentFetchOperations;	// 32 = 0x20
    NSMutableDictionary *_batchesToPersistByInitialSyncState;	// 40 = 0x28
    BOOL _userInitiated;	// 48 = 0x30
    BOOL _needsDelete;	// 49 = 0x31
    BOOL _foundNewUnreadInboxMessage;	// 50 = 0x32
    BOOL _isPrimaryMailbox;	// 51 = 0x33
    BOOL _isInitialSync;	// 52 = 0x34
    BOOL _needToPersistInitialSync;	// 53 = 0x35
    MFMailbox *_mailbox;	// 56 = 0x38
    NSString *_folderIDString;	// 64 = 0x40
    id <MFEWSMailboxDataCache> _mailboxDataCache;	// 72 = 0x48
    NSString *_syncStateToReconcile;	// 80 = 0x50
    NSString *_syncStateToPersist;	// 88 = 0x58
    MFEWSDeleteMailboxTaskOperation *_deleteMailboxOperation;	// 96 = 0x60
    NSProgress *_checkProgress;	// 104 = 0x68
    MFEWSAccount *_account;	// 112 = 0x70
}

@property(nonatomic) BOOL needToPersistInitialSync; // @synthesize needToPersistInitialSync=_needToPersistInitialSync;
@property(nonatomic) BOOL isInitialSync; // @synthesize isInitialSync=_isInitialSync;
@property(nonatomic) BOOL isPrimaryMailbox; // @synthesize isPrimaryMailbox=_isPrimaryMailbox;
@property(nonatomic) BOOL foundNewUnreadInboxMessage; // @synthesize foundNewUnreadInboxMessage=_foundNewUnreadInboxMessage;
@property(nonatomic) BOOL needsDelete; // @synthesize needsDelete=_needsDelete;
@property(readonly, nonatomic) MFEWSAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property(retain, nonatomic) MFEWSDeleteMailboxTaskOperation *deleteMailboxOperation; // @synthesize deleteMailboxOperation=_deleteMailboxOperation;
@property(copy, nonatomic) NSString *syncStateToPersist; // @synthesize syncStateToPersist=_syncStateToPersist;
@property(copy, nonatomic) NSString *syncStateToReconcile; // @synthesize syncStateToReconcile=_syncStateToReconcile;
@property(nonatomic) __weak id <MFEWSMailboxDataCache> mailboxDataCache; // @synthesize mailboxDataCache=_mailboxDataCache;
@property(copy, nonatomic) NSString *folderIDString; // @synthesize folderIDString=_folderIDString;
@property(readonly, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
// - (void).cxx_destruct;	// IMP=0x000000000008f684
- (void)_sendMailboxDidStartSyncTaskNotification;	// IMP=0x000000000008f40b
- (void)_finishCheckingForMailProgress;	// IMP=0x000000000008f3c9
- (void)_setFoundNewUnreadMessageInInbox;	// IMP=0x000000000008f349
- (void)_incrementFoundMessages:(unsigned long long)arg1;	// IMP=0x000000000008f205
- (void)persistMessageMetadataOperation:(id)arg1 didPersistBatch:(id)arg2;	// IMP=0x000000000008eaca
- (void)fetchMessageMetadataOperation:(id)arg1 didPopulateBatch:(id)arg2;	// IMP=0x000000000008e616
- (void)mailboxReconcileTaskOperationFolderIsInvalid:(id)arg1;	// IMP=0x000000000008e45c
- (void)mailboxReconcileTaskOperation:(id)arg1 receivedBatch:(id)arg2;	// IMP=0x000000000008df2f
- (void)end;	// IMP=0x000000000008de42
- (void)recalculatePriorities;	// IMP=0x000000000008da03
- (id)nextPersistenceOperation;	// IMP=0x000000000008d821
- (id)nextNetworkOperation;	// IMP=0x000000000008d66e
- (void)operationFinished:(id)arg1;	// IMP=0x000000000008d459
- (void)_removeFetchOperation:(id)arg1;	// IMP=0x000000000008d2d8
- (void)_addFetchOperation:(id)arg1;	// IMP=0x000000000008d19b
@property(nonatomic) BOOL userInitiated;
@property(retain, nonatomic) MFEWSPersistMessageMetadataOperation *persistMetadataOperation;
@property(retain, nonatomic) MFEWSMailboxReconcileTaskOperation *reconcileOperation;
- (void)reconcileMailboxWithSyncState:(id)arg1;	// IMP=0x000000000008cf3b
- (id)init;	// IMP=0x000000000008ce6c
- (id)initWithMailbox:(id)arg1;	// IMP=0x000000000008cb14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

