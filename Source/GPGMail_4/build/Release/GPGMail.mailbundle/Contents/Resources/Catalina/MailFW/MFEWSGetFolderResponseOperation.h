//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MFEWSResponseOperation.h>

@class EWSGetFolderResponseType, NSArray;

@interface MFEWSGetFolderResponseOperation : MFEWSResponseOperation
{
    NSArray *_EWSFolders;
    NSArray *_EWSFolderIdsRequested;
}

@property(copy) NSArray *EWSFolderIdsRequested; // @synthesize EWSFolderIdsRequested=_EWSFolderIdsRequested;
@property(copy) NSArray *EWSFolders; // @synthesize EWSFolders=_EWSFolders;
//- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
@property(retain) EWSGetFolderResponseType *response;

@end

