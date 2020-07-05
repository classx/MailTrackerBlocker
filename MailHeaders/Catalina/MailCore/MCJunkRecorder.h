//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MCJunkRecorder : NSObject
{
    NSMutableArray *_imageInfos;	// 8 = 0x8
    BOOL _isShort;	// 16 = 0x10
    BOOL _isSigned;	// 17 = 0x11
    unsigned long long _imageCount;	// 24 = 0x18
    unsigned long long _characterCount;	// 32 = 0x20
    double _imageToTextRatio;	// 40 = 0x28
    double _lsmScore;	// 48 = 0x30
}

@property double lsmScore; // @synthesize lsmScore=_lsmScore;
@property double imageToTextRatio; // @synthesize imageToTextRatio=_imageToTextRatio;
@property unsigned long long characterCount; // @synthesize characterCount=_characterCount;
@property unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property BOOL isSigned; // @synthesize isSigned=_isSigned;
@property BOOL isShort; // @synthesize isShort=_isShort;
// - (void).cxx_destruct;	// IMP=0x0000000000053b27
- (void)appendImageJunkInfo:(id)arg1;	// IMP=0x0000000000053a19
@property(readonly, copy) NSArray *imageInfos;
- (id)description;	// IMP=0x00000000000537f5
- (id)init;	// IMP=0x000000000005378a

@end

