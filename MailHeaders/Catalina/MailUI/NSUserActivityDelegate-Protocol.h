//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSInputStream, NSOutputStream, NSUserActivity;

@protocol NSUserActivityDelegate <NSObject>

@optional
- (void)userActivity:(NSUserActivity *)arg1 didReceiveInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)userActivityWasContinued:(NSUserActivity *)arg1;
- (void)userActivityWillSave:(NSUserActivity *)arg1;
@end
