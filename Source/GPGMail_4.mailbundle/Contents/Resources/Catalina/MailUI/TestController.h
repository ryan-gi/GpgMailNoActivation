//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSString;

@interface TestController : NSObject
{
    NSString *_currentTopLevelTest;
}

+ (id)sharedController;
@property(copy) NSString *currentTopLevelTest; // @synthesize currentTopLevelTest=_currentTopLevelTest;
//- (void).cxx_destruct;
- (void)doScrollTestWithTestName:(id)arg1 options:(id)arg2;

@end

