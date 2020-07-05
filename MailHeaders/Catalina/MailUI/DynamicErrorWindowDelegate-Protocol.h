//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol DynamicErrorWindowDelegate <NSObject>
@property(readonly, nonatomic) BOOL displayIndeterminateProgress;
- (long long)helpTopicForDiagnosis:(long long)arg1;
- (void)rightActionSelectedWithDiagnosis:(long long)arg1;
- (void)leftActionSelectedWithDiagnosis:(long long)arg1;
- (NSString *)rightButtonTextForErrorDiagnosis:(long long)arg1;
- (NSString *)leftButtonTextForErrorDiagnosis:(long long)arg1;
- (NSString *)errorDescriptionForErrorDiagnosis:(long long)arg1;
- (NSString *)errorMessageForErrorDiagnosis:(long long)arg1;
@end

