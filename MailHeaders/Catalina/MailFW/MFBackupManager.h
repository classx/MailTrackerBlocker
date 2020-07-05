//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox, NSArray, NSDictionary, NSEnumerator, NSMapTable, NSMutableDictionary, NSString, NSURL;

@interface MFBackupManager : NSObject
{
    NSMapTable *_mailboxBackupPaths;	// 8 = 0x8
    NSMutableDictionary *_mailboxesWithKnownContents;	// 16 = 0x10
    id _editableMessagesLock;	// 24 = 0x18
    id _timeMachineRestoreLock;	// 32 = 0x20
    BOOL _registeredForEditableMessageNotifications;	// 40 = 0x28
    MFMailbox *_topLevelRecoveryMailbox;	// 48 = 0x30
    NSDictionary *_lastSavedTableOfContents;	// 56 = 0x38
    NSArray *_messagePathsToRestore;	// 64 = 0x40
    NSURL *_mailboxDirectoryToRestore;	// 72 = 0x48
    NSString *_mailboxNameForRestoring;	// 80 = 0x50
}

+ (id)sharedManager;	// IMP=0x0000000000023128
@property(copy) NSString *mailboxNameForRestoring; // @synthesize mailboxNameForRestoring=_mailboxNameForRestoring;
@property(retain) NSURL *mailboxDirectoryToRestore; // @synthesize mailboxDirectoryToRestore=_mailboxDirectoryToRestore;
@property(copy) NSArray *messagePathsToRestore; // @synthesize messagePathsToRestore=_messagePathsToRestore;
@property BOOL registeredForEditableMessageNotifications; // @synthesize registeredForEditableMessageNotifications=_registeredForEditableMessageNotifications;
@property(copy) NSDictionary *lastSavedTableOfContents; // @synthesize lastSavedTableOfContents=_lastSavedTableOfContents;
@property(retain) MFMailbox *topLevelRecoveryMailbox; // @synthesize topLevelRecoveryMailbox=_topLevelRecoveryMailbox;
// - (void).cxx_destruct;	// IMP=0x00000000000294b2
@property(readonly, nonatomic) NSEnumerator *backupMailboxesEnumerator;
- (id)backupPathForMailbox:(id)arg1 pathsCache:(id)arg2;	// IMP=0x0000000000028fdf
- (id)_backupPathForMailbox:(id)arg1 withParentPath:(id)arg2 pathsCache:(id)arg3;	// IMP=0x0000000000028f0f
- (id)backupPathForMailbox:(id)arg1;	// IMP=0x0000000000028ee0
- (BOOL)saveTableOfContents:(id)arg1;	// IMP=0x0000000000028d5f
@property(readonly, copy, nonatomic) NSDictionary *tableOfContents;
- (void)_addMailbox:(id)arg1 toSection:(long long)arg2 sections:(id)arg3 messagePool:(id)arg4;	// IMP=0x00000000000284d5
- (long long)_sectionForMailbox:(id)arg1;	// IMP=0x00000000000284ba
- (id)_dictionaryForMessage:(id)arg1 includeRecipients:(BOOL)arg2;	// IMP=0x0000000000027fec
- (id)_dictionaryForMailbox:(id)arg1 parent:(id)arg2 messagePool:(id)arg3;	// IMP=0x0000000000027079
- (id)_dictionaryForSection:(long long)arg1;	// IMP=0x0000000000026fc7
- (id)_expandedMailboxes:(id)arg1;	// IMP=0x0000000000026f0b
- (BOOL)_shouldSaveDisplayNameForMailbox:(id)arg1;	// IMP=0x0000000000026ea1
- (BOOL)shouldSaveMessagesForMailbox:(id)arg1;	// IMP=0x0000000000026e7a
- (id)_reducedPathFromFullPath:(id)arg1;	// IMP=0x0000000000026cbc
- (id)_reducedPathFromFullPath:(id)arg1 supportDirectory:(id)arg2;	// IMP=0x0000000000026c27
- (id)_recoveryMailboxWithSuggestedName:(id)arg1 reuseMailbox:(BOOL)arg2;	// IMP=0x0000000000026a5c
- (BOOL)_restoreMailboxAtURL:(id)arg1 intoMailbox:(id)arg2 newMessages:(id)arg3;	// IMP=0x00000000000260e6
- (BOOL)restoreMailboxesAtURL:(id)arg1 intoMailbox:(id)arg2 restoredMessages:(id)arg3;	// IMP=0x0000000000025bbc
- (id)restoreMailboxAtURL:(id)arg1 intoMailboxNamed:(id)arg2 postNotification:(BOOL)arg3;	// IMP=0x0000000000025a3f
- (void)prepareToRestoreMailboxAtURL:(id)arg1 intoMailboxNamed:(id)arg2;	// IMP=0x0000000000025904
- (id)restoreMessagesAtPaths:(id)arg1 intoMailboxNamed:(id)arg2 reuseMailbox:(BOOL)arg3 createdMailboxNamed:(id *)arg4 postNotification:(BOOL)arg5;	// IMP=0x00000000000241c2
- (void)prepareToRestoreMessagesAtPaths:(id)arg1 intoMailboxNamed:(id)arg2;	// IMP=0x0000000000024087
@property(readonly) unsigned long long numberOfMessagesToBeRestored;
@property(readonly, copy) NSString *mailboxNameToBeRestored;
- (BOOL)hasPendingRestoreIsMailbox:(char *)arg1;	// IMP=0x0000000000023e3d
- (void)timeMachineRestoreFinished:(id)arg1;	// IMP=0x0000000000023d27
- (void)performPendingRestore;	// IMP=0x0000000000023af6
- (void)_setupDefaultTopLevelRecoveryMailbox;	// IMP=0x00000000000239f6
- (void)editableMessagesWereDeleted:(id)arg1;	// IMP=0x0000000000023708
- (void)editableMessagesWereAdded:(id)arg1;	// IMP=0x000000000002335b
- (void)invalidateCaches;	// IMP=0x0000000000023301
- (void)dealloc;	// IMP=0x0000000000023286
- (id)init;	// IMP=0x00000000000231e1

@end

