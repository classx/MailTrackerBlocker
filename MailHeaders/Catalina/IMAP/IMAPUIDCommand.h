//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSIndexSet, NSString;

@interface IMAPUIDCommand : IMAPSingleCommand
{
    NSIndexSet *_UIDs;	// 8 = 0x8
    NSString *_mailboxName;	// 16 = 0x10
    CDStruct_f792af56 _range;	// 24 = 0x18
}

@property(readonly, copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
@property CDStruct_f792af56 range; // @synthesize range=_range;
@property(copy) NSIndexSet *UIDs; // @synthesize UIDs=_UIDs;
- (void).cxx_destruct;	// IMP=0x00000000000691d7
- (long long)maxAllowedConnectionState;	// IMP=0x0000000000069123
- (long long)minRequiredConnectionState;	// IMP=0x0000000000069118
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x000000000006905d
- (id)init;	// IMP=0x0000000000068f8e
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2;	// IMP=0x0000000000068de6
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2;	// IMP=0x0000000000068d4e

@end

