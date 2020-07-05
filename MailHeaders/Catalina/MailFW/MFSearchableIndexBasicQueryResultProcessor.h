//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MFSearchableIndexQueryResultProcessor-Protocol.h>

@class NSString;
@protocol MFSearchableIndexQueryResultProcessorDelegate;

@interface MFSearchableIndexBasicQueryResultProcessor : NSObject <MFSearchableIndexQueryResultProcessor>
{
    BOOL _cancelled;	// 8 = 0x8
    id <MFSearchableIndexQueryResultProcessorDelegate> _delegate;	// 16 = 0x10
}

@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) __weak id <MFSearchableIndexQueryResultProcessorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x00000000001fad9f
- (void)cancel;	// IMP=0x00000000001fad4c
- (void)provider:(id)arg1 foundResults:(id)arg2;	// IMP=0x00000000001fa73d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

