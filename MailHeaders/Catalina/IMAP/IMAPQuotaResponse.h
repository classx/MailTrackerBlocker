//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSArray, NSString;

@interface IMAPQuotaResponse : IMAPResponse
{
    NSString *_quotaRootName;	// 8 = 0x8
    NSArray *_quotas;	// 16 = 0x10
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x000000000000c612
@property(copy, nonatomic) NSArray *quotas; // @synthesize quotas=_quotas;
@property(copy, nonatomic) NSString *quotaRootName; // @synthesize quotaRootName=_quotaRootName;
- (void).cxx_destruct;	// IMP=0x00000000000503ea
- (id)description;	// IMP=0x00000000000500ea

@end

