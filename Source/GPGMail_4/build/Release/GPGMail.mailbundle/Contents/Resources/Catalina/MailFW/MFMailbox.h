//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import <ECGmailLabel-Protocol.h>
#import <EDIndexableMailbox-Protocol.h>
#import <MCMailbox-Protocol.h>
#import <MFMailboxDisplayCountUpdater-Protocol.h>
#import <MFUIMailbox-Protocol.h>

@class MFCriterion, MFMailAccount, MFMessageCounts, MFMessageStore, NSArray, NSDate, NSDictionary, NSEnumerator, NSError, NSImage, NSMutableIndexSet, NSMutableSet, NSOperationQueue, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface MFMailbox : NSObject <ECGmailLabel, MCMailbox, MFUIMailbox, EDIndexableMailbox, MFMailboxDisplayCountUpdater>
{
    MFMailAccount *_account;
    NSMutableSet *_reservedPathComponents;
    id _countsLock;
    unsigned long long _displayCount;
    unsigned long long _unseenCount;
    unsigned long long _deletedCount;
    BOOL _countsWereLoaded;
    struct __CFTree *_tree;
    NSString *_pendingNameChange;
    id _criteriaLock;
    NSArray *_criteria;
    long long _criteriaState;
    NSString *_realFullPath;
    unsigned long long _numberOfVisibleChildren;
    NSMutableIndexSet *_visibleChildrenIndexes;
    NSArray *_sortedChildren;
    BOOL _sortedChildrenAreUpToDate;
    BOOL _failedToOpen;
    NSError *_openFailureError;
    id _displayIndexLock;
    unsigned long long _displayIndex;
    BOOL _isManuallySorted;
    BOOL _isVisibleFlaggedMailbox;
    id _dontIndexFlagLock;
    BOOL _dontIndexFlagWritten;
    id _mailboxTypeAndRepresentedAccountLock;
    MFMailAccount *_representedAccount;
    int _mailboxType;
    id _attributesLock;
    unsigned long long _attributes;
    id _deletionLock;
    BOOL _deletionInProgress;
    id _statusCountsLock;
    BOOL _useStatusCounts;
    BOOL _respectsMailboxExclusions;
    BOOL _allCriteriaMustBeSatisfied;
    BOOL _isPublicOrShared;
    BOOL _storeIsReadOnly;
    BOOL _uuidUpdatedInDatabase;
    BOOL _needsToSaveMailboxName;
    BOOL _displayCountHasEverBeenSet;
    NSString *_syncId;
    NSString *_name;
    NSString *_pathComponent;
    NSString *_uuid;
    long long _unreadCountQueryObserverID;
    NSObject/*<OS_dispatch_queue>*/ *_storeCreationQueue;
    NSOperationQueue *_statusCountsQueue;
    MFMessageCounts *_savedDatabaseMessageCounts;
}

+ (void)queueUpdateCountsForMailboxes:(id)arg1;
+ (void)setCanMarkUserInfoAsDirty:(BOOL)arg1;
+ (void)setShouldIndexJunk:(BOOL)arg1;
+ (void)reimportJunk;
+ (void)setShouldIndexTrash:(BOOL)arg1;
+ (id)mailboxForDisplayForMessage:(id)arg1 mailboxCriteria:(id)arg2;
+ (id)_mailboxesFromCriterion:(id)arg1;
+ (id)mailboxFromPath:(id)arg1;
+ (id)mailboxWithIdentifier:(id)arg1;
+ (BOOL)mailboxTypeAllowsDeduplication:(int)arg1;
+ (BOOL)mailboxTypeIsAlwaysUnread:(int)arg1;
+ (BOOL)mailboxTypeAllowsConversations:(int)arg1;
+ (void)_removeLocalProperties:(id)arg1 fromSmartMailboxes:(id)arg2;
+ (void)_switchMailboxTypesFromPersistedTypesForMailboxDictionary:(id)arg1;
+ (void)_switchMailboxTypesToPersistedTypesForMailboxDictionary:(id)arg1 isRoot:(BOOL)arg2;
+ (id)smartMailboxesEnumeratorIncludingFlagMailboxes:(BOOL)arg1 VIPSenderMailboxes:(BOOL)arg2;
+ (id)smartMailboxWithIdentifier:(id)arg1;
+ (id)_smartMailboxWithIdentifier:(id)arg1 inArray:(id)arg2;
+ (void)setSmartMailboxes:(id)arg1;
+ (id)smartMailboxes;
+ (BOOL)logMailboxUUIDErrors;
+ (void)initialize;
+ (id)flagNameSyncLog;
@property(nonatomic) BOOL displayCountHasEverBeenSet; // @synthesize displayCountHasEverBeenSet=_displayCountHasEverBeenSet;
@property(retain, nonatomic) MFMessageCounts *savedDatabaseMessageCounts; // @synthesize savedDatabaseMessageCounts=_savedDatabaseMessageCounts;
@property(retain) NSOperationQueue *statusCountsQueue; // @synthesize statusCountsQueue=_statusCountsQueue;
@property BOOL needsToSaveMailboxName; // @synthesize needsToSaveMailboxName=_needsToSaveMailboxName;
@property BOOL uuidUpdatedInDatabase; // @synthesize uuidUpdatedInDatabase=_uuidUpdatedInDatabase;
@property BOOL storeIsReadOnly; // @synthesize storeIsReadOnly=_storeIsReadOnly;
@property(readonly, nonatomic) NSObject/*<OS_dispatch_queue>*/ *storeCreationQueue; // @synthesize storeCreationQueue=_storeCreationQueue;
@property long long unreadCountQueryObserverID; // @synthesize unreadCountQueryObserverID=_unreadCountQueryObserverID;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *pathComponent; // @synthesize pathComponent=_pathComponent;
@property(copy) NSString *name; // @synthesize name=_name;
@property BOOL isPublicOrShared; // @synthesize isPublicOrShared=_isPublicOrShared;
@property BOOL allCriteriaMustBeSatisfied; // @synthesize allCriteriaMustBeSatisfied=_allCriteriaMustBeSatisfied;
@property(copy) NSString *syncId; // @synthesize syncId=_syncId;
@property BOOL respectsMailboxExclusions; // @synthesize respectsMailboxExclusions=_respectsMailboxExclusions;
//- (void).cxx_destruct;
//- (void)enumerateDescendantsInOrder:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_VIPSendersChanged:(id)arg1;
- (void)_addressBookDidChange:(id)arg1;
- (BOOL)isEqualToSmartMailbox:(id)arg1;
@property(readonly, nonatomic) BOOL isValidDestinationMailbox;
@property(readonly, nonatomic) BOOL isPlaceholder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFailedToOpen:(BOOL)arg1 error:(id)arg2;
@property(readonly) NSError *openFailureError;
@property(readonly, nonatomic) BOOL failedToOpen;
- (BOOL)isStoreReadOnlyCreateIfNeeded:(BOOL)arg1;
- (id)storeCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) MFMessageStore *store;
@property(readonly, nonatomic) BOOL useTotalInsteadOfUnread;
@property BOOL useStatusCounts;
- (void)queueUpdateDisplayCountFromStatus:(unsigned long long)arg1;
- (void)_setDisplayCountWithMessageCounts:(id)arg1;
- (void)setMessageCounts:(id)arg1;
@property(readonly) unsigned long long deletedCount;
- (void)setDisplayCount:(unsigned long long)arg1;
@property(readonly) unsigned long long displayCount;
- (BOOL)_isNormalMailbox;
- (BOOL)criteriaAreValid:(id *)arg1;
- (id)_abGroupsUsedInCriteria;
- (id)_vipSendersCriterion:(id)arg1;
- (id)modifiedVIPCriterionForInboxOnly;
@property(readonly) MFCriterion *criterion;
- (id)_mailboxExclusionCriteria;
- (void)flushCriteria;
@property(copy) NSArray *criteria;
- (id)_ancestralAccount;
- (void)setUserInfoIsDirty:(BOOL)arg1;
- (BOOL)_userInfoIsDirty;
- (void)_saveMailboxesWithDirtyUserInfoWithDelay;
- (void)_saveMailboxesWithDirtyUserInfo;
@property(readonly, copy, nonatomic) NSString *coreSpotlightIdentifier;
@property(copy) NSDictionary *userInfoDictionary;
- (void)saveUserInfo;
- (void)assignNewUUID;
- (void)forceSaveUserInfo;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)userInfoObjectForKey:(id)arg1;
- (void)_userInfoDidLoad:(id)arg1;
- (id)_loadUserInfo;
@property(retain) NSDate *lastSyncDate;
@property(readonly) BOOL hasFirstTimeSyncBeenDetermined;
@property BOOL isFirstTimeSync;
- (void)_updateDontIndexFlagFile;
@property(readonly, nonatomic) BOOL isIndexable;
- (void)setPrimitiveAttributes:(unsigned long long)arg1;
@property unsigned long long attributes;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) BOOL preferredMessageType;
@property int mailboxType;
@property(readonly) long long type;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL isStoreConvertibleToFolder;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (unsigned long long)indexToInsertChildMailbox:(id)arg1;
- (id)_URLStringIsSyncable:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSString *syncableURLString;
@property(readonly, copy, nonatomic) NSString *URLString;
- (id)_URLStringWithAccount:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (id)pathRelativeToMailbox:(id)arg1;
@property(readonly, copy) NSString *realFullPath;
@property(readonly, copy, nonatomic) NSString *fullPath;
@property(readonly, copy, nonatomic) NSString *accountRelativeFilesystemPath;
@property(readonly, copy, nonatomic) NSString *accountRelativePath;
- (id)_stringByAppendingPathComponentsToAccountPath:(id)arg1 relativeToTree:(struct __CFTree *)arg2 generateFileSystemPath:(BOOL)arg3;
@property(readonly, nonatomic) BOOL isAllMailMailbox;
@property(readonly) BOOL isGmailStarredLabel;
@property(readonly) BOOL isGmailImportantLabel;
@property(readonly, nonatomic) BOOL isJunk;
@property(readonly, nonatomic) BOOL isSmartMailboxOrFolder;
@property(readonly, nonatomic) BOOL isGeneric;
@property(readonly) BOOL isSpecialMailbox;
@property(readonly, nonatomic) BOOL isStore;
@property(readonly, nonatomic) BOOL isContainer;
- (void)invalidate;
@property(readonly) BOOL isValid;
- (id)applescriptAccount;
@property(readonly, copy, nonatomic) NSString *accountURLString;
@property(readonly) MFMailAccount *account;
@property(retain) MFMailAccount *representedAccount;
- (id)deepCopy;
- (void)_saveMailboxNameIfNeeded;
@property(copy) MFMailbox *parent;
- (void)sortChildren;
- (void)invalidateChildren;
- (BOOL)setChildren:(id)arg1;
//- (CDUnknownBlockType)mailboxComparatorWithAccount:(id)arg1;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)arg1 hidingGmail:(BOOL)arg2;
- (id)mutableCopyOfChildren;
- (id)unusedChildPathComponent:(id)arg1;
- (id)childWithPathComponent:(id)arg1;
- (id)childWithName:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
@property(readonly, nonatomic) BOOL isValidGmailLabel;
- (BOOL)isGmailWhiteMailboxOrDescendant:(BOOL)arg1;
- (id)_gmailWhiteMailboxChild;
- (id)sortedChildAtIndex:(unsigned long long)arg1 hidingGmail:(BOOL)arg2;
- (id)visibleChildAtIndex:(unsigned long long)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfChildren;
@property(readonly, nonatomic) NSEnumerator *depthFirstEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
@property(readonly, nonatomic) NSEnumerator *childEnumerator;
- (unsigned long long)numberOfSortedChildrenHidingGmail:(BOOL)arg1;
- (unsigned long long)numberOfVisibleChildrenHidingGmail:(BOOL)arg1;
- (void)_updateSortedChildrenIfNeeded;
- (unsigned long long)suggestedDisplayIndexForChildMailbox:(id)arg1 hidingGmail:(BOOL)arg2;
@property BOOL isVisibleFlaggedMailbox;
@property BOOL isManuallySorted;
@property(readonly, nonatomic) BOOL displayIndexCanBeModified;
@property unsigned long long displayIndex;
- (void)_invalidateVisibleChildrenCaches;
@property(readonly) BOOL hasChildren;
@property(readonly, copy) NSArray *children;
@property(readonly, nonatomic) BOOL hasMessages;
@property(readonly) unsigned long long unseenCount;
@property(readonly) BOOL unseenCountIsKnown;
- (void)notifyForUnreadCount:(unsigned long long)arg1 andOldUnreadCount:(unsigned long long)arg2;
- (void)_enqueueUnreadCountChangeNotification;
- (void)setName:(id)arg1 pathComponent:(id)arg2;
@property(readonly, nonatomic) BOOL canBeRenamed;
- (void)setPendingNameChange:(id)arg1;
@property(readonly, copy, nonatomic) NSString *labelName;
@property(readonly, copy, nonatomic) NSString *genericDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)displayNameUsingAccountNameIfSpecial:(BOOL)arg1;
- (id)_displayNameWithoutPIIExtended:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSString *extendedDisplayNameWithoutPII;
@property(readonly, copy, nonatomic) NSString *displayNameWithoutPII;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
- (void)prepareForDeletion;
- (void)cancelUnreadCountQuery;
- (id)dictionaryRepresentationIncludePII:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSString *persistentID;
- (long long)databaseID;
@property(readonly, copy, nonatomic) NSString *persistentUIIdentifier;
- (id)initWithDictionaryRepresentation:(id)arg1 copyUUID:(BOOL)arg2;
- (id)initWithMailbox:(id)arg1;
- (id)initWithName:(id)arg1 pathComponent:(id)arg2 attributes:(unsigned long long)arg3 forAccount:(id)arg4;
- (id)initWithName:(id)arg1 attributes:(unsigned long long)arg2 forAccount:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_registerForCriteriaNotificationsForSpotlightMailbox;
@property(readonly, nonatomic) NSImage *accountIcon;
@property(readonly, nonatomic) BOOL isAccountActive;
@property(readonly, nonatomic) BOOL isLocal;
@property(readonly, nonatomic) BOOL isSpotlightMailbox;
@property(readonly) id backupID;
@property(readonly) long long backupType;
- (BOOL)isPointedToBySmartMailbox:(id)arg1;
- (BOOL)isPointedToBySmartMailbox:(id)arg1 traversedMailboxes:(id)arg2;
- (BOOL)isPointedToByCriterion:(id)arg1 traversedMailboxes:(id)arg2;
- (id)valueInMessagesWithUniqueID:(id)arg1;
@property(copy, nonatomic) NSString *mailboxName;
- (void)removeFromMessagesAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *messages;
- (id)applescriptChildren;
- (id)applescriptContainer;
- (id)objectSpecifier;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

