//
//  SLRACManager.h
//  LearnObjC
//
//  Created by CoderSLZeng on 2019/6/19.
//  Copyright © 2019 CoderSLZeng. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SLRACManager : NSObject

+ (void)useRACSignal;

+ (void)useRACSubject;

+ (void)useRACReplaySubject;

+ (void)useRACTuple;

+ (void)useRACMulticastConnection;

+ (void)useRACCommandWithExecute;

+ (void)useRACCommandWithExecutionSignals;

+ (void)useRACCommandWithExecuting;

+ (void)useRACCommandWithExecutingSkip;

+ (void)useRACCommandWithExecutionSignalsSwitchToLatest;


+ (void)use_rac_bind;


+ (void)use_rac_flattenMap;

+ (void)use_rac_map;

+ (void)use_rac_flattenMap_map;


+ (void)use_rac_concat;

+ (void)use_rac_concat2;

+ (void)use_rac_concat3;

+ (void)use_rac_then;

+ (void)use_rac_then2;

+ (void)use_rac_merge;

+ (void)use_rac_zipWith;

+ (void)use_rac_combineLatest;

+ (void)use_rac_reduce;

+ (void)use_rac_combineLatest_reduce;


+ (void)use_rac_filter;

+ (void)use_rac_ignore;

+ (void)use_rac_distinctUntilChanged;

+ (void)use_rac_take;

+ (void)use_rac_takeLast;

+ (void)use_rac_takeUntil;

+ (void)use_rac_use_rac_skip;

+ (void)use_rac_switchToLatest;

+ (void)use_rac_doNext_doCompleted;


+ (void)use_rac_deliverOn_subscribeOn;


+ (void)use_rac_timeout;

+ (void)use_rac_interval;

+ (void)use_rac_delay;


+ (void)use_rac_retry;

+ (void)use_rac_replay;

+ (void)use_rac_throttle;
@end

NS_ASSUME_NONNULL_END
