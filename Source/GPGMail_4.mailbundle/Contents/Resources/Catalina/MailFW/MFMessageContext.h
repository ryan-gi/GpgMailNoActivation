//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSOperationQueue;

@interface MFMessageContext : NSObject
{
    NSOperationQueue *_filesystemQueue;
    NSOperationQueue *_waitingQueue;
}

+ (id)sharedContext;
@property(readonly, nonatomic) NSOperationQueue *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
@property(readonly, nonatomic) NSOperationQueue *filesystemQueue; // @synthesize filesystemQueue=_filesystemQueue;
//- (void).cxx_destruct;
- (id)async_cacheBodyForMessage:(id)arg1 monitor:(id)arg2;
- (void)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2;
- (void)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2;
- (void)async_unmuteConversationForMessages:(id)arg1;
- (void)async_muteConversationForMessages:(id)arg1;
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 reason:(long long)arg4;
- (void)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 reason:(long long)arg4;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)dealloc;
- (id)init;

@end

