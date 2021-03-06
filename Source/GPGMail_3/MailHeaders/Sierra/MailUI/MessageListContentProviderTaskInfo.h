//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexSet, NSSet;

@interface MessageListContentProviderTaskInfo : NSObject
{
    BOOL _reloadNeeded;	// 8 = 0x8
    BOOL _animateFoundSelection;	// 9 = 0x9
    NSArray *_orderedObjects;	// 16 = 0x10
    unsigned long long _totalMessageCount;	// 24 = 0x18
    NSSet *_changedThreads;	// 32 = 0x20
    NSSet *_changedMessages;	// 40 = 0x28
    NSDictionary *_originalMessageByMessageIdentifier;	// 48 = 0x30
    NSDictionary *_messageCopiesByMessageIdentifier;	// 56 = 0x38
    NSArray *_contentChanges;	// 64 = 0x40
    NSIndexSet *_foundSelectedIndexes;	// 72 = 0x48
    unsigned long long _foundPinnedIndex;	// 80 = 0x50
    double _foundPinnedOffset;	// 88 = 0x58
    CDUnknownBlockType _completionBlock;	// 96 = 0x60
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) BOOL animateFoundSelection; // @synthesize animateFoundSelection=_animateFoundSelection;
@property(nonatomic) double foundPinnedOffset; // @synthesize foundPinnedOffset=_foundPinnedOffset;
@property(nonatomic) unsigned long long foundPinnedIndex; // @synthesize foundPinnedIndex=_foundPinnedIndex;
@property(copy, nonatomic) NSIndexSet *foundSelectedIndexes; // @synthesize foundSelectedIndexes=_foundSelectedIndexes;
@property(nonatomic) BOOL reloadNeeded; // @synthesize reloadNeeded=_reloadNeeded;
@property(copy, nonatomic) NSArray *contentChanges; // @synthesize contentChanges=_contentChanges;
@property(copy, nonatomic) NSDictionary *messageCopiesByMessageIdentifier; // @synthesize messageCopiesByMessageIdentifier=_messageCopiesByMessageIdentifier;
@property(copy, nonatomic) NSDictionary *originalMessageByMessageIdentifier; // @synthesize originalMessageByMessageIdentifier=_originalMessageByMessageIdentifier;
@property(copy, nonatomic) NSSet *changedMessages; // @synthesize changedMessages=_changedMessages;
@property(copy, nonatomic) NSSet *changedThreads; // @synthesize changedThreads=_changedThreads;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(copy, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
- (void).cxx_destruct;	// IMP=0x000000010020e722
- (id)init;	// IMP=0x000000010020e506

@end

