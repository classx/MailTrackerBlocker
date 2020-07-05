//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPCommand.h>

@class NSError, NSMutableArray, NSString;

@interface IMAPSingleCommand : IMAPCommand
{
    unsigned long long _sequenceNumber;	// 16 = 0x10
    BOOL _isComplete;	// 24 = 0x18
    NSMutableArray *_untaggedResponses;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    unsigned long long _sessionNumber;	// 48 = 0x30
}

@property BOOL isComplete; // @synthesize isComplete=_isComplete;
@property unsigned long long sessionNumber; // @synthesize sessionNumber=_sessionNumber;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableArray *untaggedResponses; // @synthesize untaggedResponses=_untaggedResponses;
- (void).cxx_destruct;	// IMP=0x0000000000022c27
- (id)newCommandString;	// IMP=0x0000000000022ad9
@property(readonly, copy) NSString *tag;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x00000000000229ef
- (id)debugCommandStringWithAccount:(id)arg1;	// IMP=0x00000000000228a7
- (void)cleanupAfterCompletion;	// IMP=0x0000000000022893
@property unsigned long long sequenceNumber;
@property(readonly) BOOL handlesAllUntaggedResponses;
- (long long)composition;	// IMP=0x00000000000227eb

@end

