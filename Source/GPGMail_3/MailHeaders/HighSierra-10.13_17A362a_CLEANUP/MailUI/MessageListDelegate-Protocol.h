//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageSortingValueDelegate-Protocol.h"

@class NSArray, NSPredicate;

@protocol MessageListDelegate <MFMessageSortingValueDelegate>
@property(readonly, nonatomic) NSPredicate *filterPredicate;
- (void)messageList:(id /*<MessageList>*/)arg1 didUpdateWithContentChange:(id <MessageListContentChange>)arg2;
- (NSArray *)arrayOfSortOrders;
@end

