//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCTaskHandler.h>

#import <IMAP/IMAPConnectionResponseDelegate-Protocol.h>

@class IMAPConnection, IMAPMailboxSyncState, IMAPTask, IMAPTaskManager, NSString;

@interface IMAPNetworkTaskHandler : MCTaskHandler <IMAPConnectionResponseDelegate>
{
    id _connectionLock;	// 8 = 0x8
    IMAPConnection *_connection;	// 16 = 0x10
    id _selectedMailboxLock;	// 24 = 0x18
    NSString *_currentMailboxName;	// 32 = 0x20
    BOOL _isSelected;	// 40 = 0x28
    IMAPTask *_lastTaskSource;	// 48 = 0x30
    IMAPTaskManager *_taskManager;	// 56 = 0x38
    IMAPMailboxSyncState *_syncState;	// 64 = 0x40
}

@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) IMAPMailboxSyncState *syncState; // @synthesize syncState=_syncState;
@property(readonly, nonatomic) IMAPTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(nonatomic) __weak IMAPTask *lastTaskSource; // @synthesize lastTaskSource=_lastTaskSource;
- (void).cxx_destruct;	// IMP=0x0000000000048c95
- (void)connection:(id)arg1 receivedUnhandledUntaggedResponse:(id)arg2 forMailbox:(id)arg3 forCommand:(id)arg4;	// IMP=0x000000000004822f
- (void)connection:(id)arg1 receivedFetchResponse:(id)arg2 forMailbox:(id)arg3;	// IMP=0x0000000000048171
- (void)connection:(id)arg1 receivedExists:(unsigned long long)arg2 forMailbox:(id)arg3;	// IMP=0x0000000000048125
- (BOOL)connection:(id)arg1 shouldProcessUnsolicitedResponse:(id)arg2;	// IMP=0x0000000000048022
@property(nonatomic) BOOL trackSyncState;
- (id)serializationQueue;	// IMP=0x0000000000047ef3
- (void)selectedMailboxChangedToMailbox:(id)arg1 fromMailbox:(id)arg2;	// IMP=0x0000000000047d29
- (BOOL)isSelectedOnMailbox:(id)arg1;	// IMP=0x0000000000047c59
@property(readonly, copy) NSString *currentMailboxName;
- (void)_finishIdling;	// IMP=0x0000000000047ba7
@property(readonly) BOOL canStartIdle;
@property(readonly) BOOL isIdle;
- (void)_closeConnectionAndCompact:(BOOL)arg1 allowNetworking:(BOOL)arg2;	// IMP=0x0000000000047961
- (id)serverInterfaceForMailbox:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000476e8
- (id)newCleanUpOperation;	// IMP=0x0000000000047601
- (long long)qualityOfService;	// IMP=0x00000000000475c5
- (void)setOperation:(id)arg1;	// IMP=0x00000000000473ac
- (id)operation;	// IMP=0x000000000004737d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000471eb
- (long long)priority;	// IMP=0x00000000000470cf
@property(retain) IMAPConnection *connection;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000046dec
- (id)init;	// IMP=0x0000000000046d1d
- (id)initWithConnection:(id)arg1 taskManager:(id)arg2;	// IMP=0x0000000000046bee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

