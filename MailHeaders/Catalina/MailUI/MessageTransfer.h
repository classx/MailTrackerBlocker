//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"
#import "MessageDeletionTransfer-Protocol.h"

@class NSArray, NSMutableArray, NSProgress, NSString;
@protocol MessageTransferDelegate;

@interface MessageTransfer : NSObject <MCActivityTarget, MessageDeletionTransfer>
{
    NSMutableArray *_operations;	// 8 = 0x8
    BOOL _moveMessages;	// 16 = 0x10
    BOOL _allowsUndo;	// 17 = 0x11
    BOOL _registeredForUndo;	// 18 = 0x12
    BOOL _isDeleteOperation;	// 19 = 0x13
    BOOL _isArchiveOperation;	// 20 = 0x14
    BOOL _undoInProgress;	// 21 = 0x15
    BOOL _needToUndoTransfer;	// 22 = 0x16
    id <MessageTransferDelegate> _delegate;	// 24 = 0x18
    NSArray *_sourceLabels;	// 32 = 0x20
    NSProgress *_transferProgress;	// 40 = 0x28
}

+ (void)queueMailboxDeletions:(id)arg1;	// IMP=0x0000000100203725
+ (BOOL)_shouldProceedWithMailboxDeletions:(id)arg1;	// IMP=0x000000010020326f
+ (void)_redo:(id)arg1;	// IMP=0x000000010020117e
+ (void)_undo:(id)arg1;	// IMP=0x0000000100201169
+ (void)initialize;	// IMP=0x000000010002b71b
+ (id)log;	// IMP=0x000000010020110c
@property(nonatomic) BOOL needToUndoTransfer; // @synthesize needToUndoTransfer=_needToUndoTransfer;
@property(nonatomic) BOOL undoInProgress; // @synthesize undoInProgress=_undoInProgress;
@property(nonatomic) BOOL isArchiveOperation; // @synthesize isArchiveOperation=_isArchiveOperation;
@property(nonatomic) BOOL isDeleteOperation; // @synthesize isDeleteOperation=_isDeleteOperation;
@property(nonatomic) BOOL registeredForUndo; // @synthesize registeredForUndo=_registeredForUndo;
@property(retain, nonatomic) NSProgress *transferProgress; // @synthesize transferProgress=_transferProgress;
@property(copy) NSArray *sourceLabels; // @synthesize sourceLabels=_sourceLabels;
@property BOOL allowsUndo; // @synthesize allowsUndo=_allowsUndo;
@property BOOL moveMessages; // @synthesize moveMessages=_moveMessages;
@property __weak id <MessageTransferDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x0000000100203865
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;	// IMP=0x000000010006cbfd
@property(readonly, nonatomic) BOOL anySourceStoreAllowsDeleteInPlace;
@property(readonly, copy, nonatomic) NSArray *sourceStores;
@property(readonly, copy, nonatomic) NSArray *destinationMailboxes;
- (id)_destinationMailboxForOperation:(id)arg1;	// IMP=0x0000000100202f12
- (void)_synchronouslyPerformTransfer;	// IMP=0x000000010006dd33
- (void)_redo;	// IMP=0x0000000100202ae3
- (void)_undoTransfer;	// IMP=0x00000001002016f2
- (void)_undo;	// IMP=0x0000000100201262
- (void)_registerForUndoType:(long long)arg1;	// IMP=0x000000010006c777
- (void)_completedTransferWithError:(id)arg1;	// IMP=0x000000010006fe98
- (void)beginTransfer;	// IMP=0x000000010006c271
@property(readonly, nonatomic) BOOL canBeginTransfer;
- (void)dealloc;	// IMP=0x000000010007073d
- (id)init;	// IMP=0x0000000100201193
- (id)initWithMessages:(id)arg1 targetMailbox:(id)arg2 isDeleteOperation:(BOOL)arg3 isArchiveOperation:(BOOL)arg4;	// IMP=0x000000010006b6c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

