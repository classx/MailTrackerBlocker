//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailSupport/MSAttachmentInfo.h>

@interface MUIAttachmentInfo : MSAttachmentInfo
{
    BOOL _isImage;	// 8 = 0x8
    BOOL _canBeSentInline;	// 9 = 0x9
}

+ (BOOL)supportsSecureCoding;	// IMP=0x0000000000017559
@property(readonly, nonatomic) BOOL canBeSentInline; // @synthesize canBeSentInline=_canBeSentInline;
@property(readonly, nonatomic) BOOL isImage; // @synthesize isImage=_isImage;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000176bb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000175ea
- (id)initWithURL:(id)arg1 filename:(id)arg2 isImage:(BOOL)arg3 canBeSentInline:(BOOL)arg4;	// IMP=0x0000000000017564

@end

