//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@interface MCCIDURLProtocol : NSURLProtocol
{
}

+ (void)unregisterDataProvider:(id)arg1;	// IMP=0x000000000002a97a
+ (void)registerDataProvider:(id)arg1;	// IMP=0x000000000002a6fe
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x00000000000436d6
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x000000000002b3dc
+ (BOOL)canInitWithRequest:(id)arg1;	// IMP=0x000000000002b35e
- (void)stopLoading;	// IMP=0x000000000002b831
- (void)startLoading;	// IMP=0x000000000002b3f2

@end

