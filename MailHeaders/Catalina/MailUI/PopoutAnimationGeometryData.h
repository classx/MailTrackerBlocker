//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PopoutAnimationGeometryData : NSObject
{
    struct CGRect _contentRect;	// 8 = 0x8
    struct CGRect _centerRect;	// 40 = 0x28
}

@property(readonly, nonatomic) struct CGRect centerRect; // @synthesize centerRect=_centerRect;
@property(readonly, nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (id)description;	// IMP=0x000000010024d2e2
- (id)init;	// IMP=0x000000010024d213
- (id)initWithContentRect:(struct CGRect)arg1;	// IMP=0x000000010024d1b8
- (id)initWithContentRect:(struct CGRect)arg1 centerRect:(struct CGRect)arg2;	// IMP=0x000000010024d13e

@end

