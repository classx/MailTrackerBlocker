//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/MCMailAccount-Protocol.h>

@class NSDate;

@protocol MCRemoteStoreAccount <MCMailAccount>
@property long long cachePolicy;
- (BOOL)shouldCacheAttachmentsForMessageWithDateReceived:(NSDate *)arg1;
@end

