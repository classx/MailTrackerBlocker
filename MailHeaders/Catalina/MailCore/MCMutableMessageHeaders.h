//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCMessageHeaders.h>

#import <MailCore/ECMutableMessageHeaders-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MCMutableMessageHeaders : MCMessageHeaders <ECMutableMessageHeaders>
{
    NSMutableDictionary *_headersAdded;	// 8 = 0x8
    NSMutableArray *_headersRemoved;	// 16 = 0x10
}

// - (void).cxx_destruct;	// IMP=0x0000000000013359
- (void)setAddressListForTo:(id)arg1;	// IMP=0x0000000000081015
- (void)setAddressListForSender:(id)arg1;	// IMP=0x0000000000080ff9
- (void)removeHeaderForKey:(id)arg1;	// IMP=0x000000000002cbba
- (void)setMessageIDList:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000080e98
- (void)setAddressList:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000113b6
- (void)setHeader:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001122c
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;	// IMP=0x00000000000280ae
- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;	// IMP=0x0000000000027e63
- (void)_appendEncodedHeadersToData:(id)arg1;	// IMP=0x0000000000080ac0
- (id)encodedHeaders;	// IMP=0x0000000000080a07
- (id)_firstMessageIDForKey:(id)arg1 sender:(id)arg2;	// IMP=0x000000000002ed4a
- (id)messageIDListForKey:(id)arg1;	// IMP=0x0000000000031f79
- (id)_firstAddressForKey:(id)arg1 sender:(id)arg2;	// IMP=0x0000000000011881
- (id)addressListForKey:(id)arg1;	// IMP=0x0000000000020cf1
- (id)firstHeaderForKey:(id)arg1;	// IMP=0x000000000002eead
- (id)_headersForKey:(id)arg1;	// IMP=0x0000000000020f22
- (BOOL)hasHeaderForKey:(id)arg1;	// IMP=0x0000000000080920
- (id)allHeaderKeys;	// IMP=0x0000000000020b56
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000807c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008074b

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

