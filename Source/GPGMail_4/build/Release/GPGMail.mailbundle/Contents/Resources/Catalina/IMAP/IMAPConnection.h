//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MCConnection.h>

@class IMAPMailbox, MCInvocationQueue, NSArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;
@protocol IMAPAccount, IMAPConnectionResponseDelegate;

@interface IMAPConnection : MCConnection
{
    NSRecursiveLock *_imapConnectionLock;
    unsigned long long _capabilityFlags;
    unsigned long long _enabledCapabilityFlags;
    long long _connectionState;
    NSMutableSet *_capabilities;
    NSString *_separatorChar;
    NSString *_selectedMailboxName;
    IMAPMailbox *_selectedIMAPMailbox;
    BOOL _selectedMailboxIsReadOnly;
    unsigned long long _commandNumber;
    unsigned int _readBufferSize;
    double _expirationTime;
    MCInvocationQueue *_streamEventQueue;
    NSMutableDictionary *_unhandledTaggedResponses;
    unsigned long long _lastIdleSequenceNumber;
    unsigned long long _lastIdleSessionNumber;
    BOOL _createsGateway;
    BOOL _executingInternalReconnect;
    BOOL _canStartIdle;
    BOOL _sentID;
    id /*<IMAPConnectionResponseDelegate>*/ _responseDelegate;
    NSString *_selectedMailboxNameForLogging;
}

+ (BOOL)automaticallyNotifiesObserversOfSelectedMailboxName;
+ (id)keyPathsForValuesAffecting_gateway;
+ (id)capabilityNameForCapability:(unsigned long long)arg1;
+ (BOOL)_defaultsToBackground;
+ (id)log;
@property(copy, nonatomic) NSString *selectedMailboxNameForLogging; // @synthesize selectedMailboxNameForLogging=_selectedMailboxNameForLogging;
@property BOOL sentID; // @synthesize sentID=_sentID;
@property(nonatomic) BOOL canStartIdle; // @synthesize canStartIdle=_canStartIdle;
@property __weak id /*<IMAPConnectionResponseDelegate>*/ responseDelegate; // @synthesize responseDelegate=_responseDelegate;
//- (void).cxx_destruct;
- (BOOL)_readDataWithRemainingByteCount:(long long)arg1 intoData:(id)arg2 error:(id *)arg3;
- (BOOL)_recordMailboxResponse:(id)arg1 forCommand:(id)arg2 exists:(unsigned long long *)arg3 receivedExists:(char *)arg4 fromIDLE:(BOOL)arg5;
- (BOOL)_recordMailboxResponse:(id)arg1 forCommand:(id)arg2;
- (void)_recordResponse:(id)arg1 forCommand:(id)arg2;
- (BOOL)_recordUntaggedResponse:(id)arg1 forCommand:(id)arg2 exists:(unsigned long long *)arg3 receivedExists:(char *)arg4 fromIDLE:(BOOL)arg5;
- (BOOL)_recordUntaggedResponse:(id)arg1 forCommand:(id)arg2;
- (BOOL)_isTemporaryError:(id)arg1;
- (id)_responseFromSendingCommand:(id)arg1 receivedExists:(char *)arg2;
- (BOOL)_correctMailboxIsSelectedForCommand:(id)arg1;
- (id)description;
- (id)_stateString;
- (BOOL)executeFetch:(id)arg1;
@property(nonatomic) unsigned int readBufferSize;
- (BOOL)executeNamespace:(id)arg1;
- (BOOL)executeAppend:(id)arg1;
- (BOOL)executeUIDCopyOrMove:(id)arg1;
- (id)_responseFromSendingCommand:(id)arg1 tryCreate:(char *)arg2 receivedExists:(char *)arg3;
- (BOOL)executeUIDStore:(id)arg1;
- (BOOL)executeUIDSearch:(id)arg1;
- (BOOL)executeSelectCommand:(id)arg1;
- (BOOL)executeSubscribeCommand:(id)arg1;
- (BOOL)executeAggregateStatus:(id)arg1;
- (BOOL)executeStatus:(id)arg1;
- (BOOL)executeUIDExpunge:(id)arg1;
- (BOOL)executeDone:(id)arg1;
- (BOOL)executeIdle:(id)arg1;
- (BOOL)exitIdle;
- (BOOL)startIdle;
@property(readonly, nonatomic) BOOL isIdle;
- (void)_handleBytesAvailable;
- (BOOL)executeUnselect:(id)arg1;
- (BOOL)executeListOrLSub:(id)arg1;
- (void)_fetchSeparatorCharIfNeeded;
@property(readonly, copy, nonatomic) NSString *separatorCharIfAvailable;
@property(copy) NSString *separatorChar;
- (BOOL)executeLogout:(id)arg1;
- (BOOL)executeLogin:(id)arg1;
- (BOOL)supportsPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (id)_getErrorFromFailedAuthenticationResponse:(id)arg1 forCommand:(id)arg2 usingSASL:(BOOL)arg3;
- (void)discoverAccountSettings;
- (BOOL)executeStartTLS:(id)arg1;
- (BOOL)_startTLS;
- (BOOL)executeAuthenticate:(id)arg1;
- (BOOL)_authenticateWithSASLClient:(id)arg1;
- (void)_enableCapabilities;
- (BOOL)authenticate;
- (id)authenticationMechanisms;
- (BOOL)executeNoop:(id)arg1;
- (BOOL)executeID:(id)arg1;
- (BOOL)sendIDIfNeeded;
- (BOOL)_capability:(unsigned long long *)arg1 forCapabilityName:(id)arg2;
- (BOOL)executeEnable:(id)arg1;
- (BOOL)capabilityIsEnabled:(unsigned long long)arg1;
- (void)_didEnableCapability:(unsigned long long)arg1;
- (BOOL)executeCapability:(id)arg1;
- (void)_fetchCapabilitiesIfNeeded;
- (void)_addToCapabilities:(id)arg1;
- (void)_clearCapabilities;
- (BOOL)supportsCapability:(unsigned long long)arg1;
@property(readonly, copy) NSArray *capabilities;
- (id)_errorForResponse:(id)arg1 command:(id)arg2;
- (id)_copyNextTaggedOrContinuationResponseForCommand:(id)arg1 exists:(unsigned long long *)arg2 receivedExists:(char *)arg3;
- (id)_copyNextTaggedOrContinuationResponseForCommand:(id)arg1;
- (id)_copyNextServerResponse:(id *)arg1 fetchResponseLog:(id *)arg2;
- (BOOL)_readBytesIntoData:(id)arg1 desiredLength:(long long)arg2 error:(id *)arg3;
- (BOOL)_readLineIntoData:(id)arg1 error:(id *)arg2;
- (BOOL)_writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange)arg2 error:(id *)arg3;
- (BOOL)_socketDiedError:(id *)arg1;
- (BOOL)_sendCommand:(id)arg1 response:(id *)arg2;
- (BOOL)executeClientCommand:(id)arg1;
- (BOOL)_synchronouslyExecuteDoneWithSequence:(unsigned long long)arg1 session:(unsigned long long)arg2;
- (BOOL)prepareAndExecuteCommand:(id)arg1;
@property(readonly, nonatomic) BOOL isDisconnected;
- (BOOL)isValidAllowNetworking:(BOOL)arg1;
- (BOOL)needsSelectForMailboxName:(id)arg1;
@property(retain, nonatomic) IMAPMailbox *selectedIMAPMailbox;
- (id)mailboxNameIfSelected:(BOOL)arg1;
- (void)_setSelectedMailboxName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *selectedMailboxName;
- (void)_transitionToState:(long long)arg1 selectedMailbox:(id)arg2 readOnly:(BOOL)arg3;
- (void)_transitionToState:(long long)arg1;
@property(readonly, nonatomic) long long currentConnectionState;
@property(readonly, nonatomic) long long connectionState;
- (void)quit;
- (void)disconnect;
- (void)disconnectAndNotify:(BOOL)arg1;
- (BOOL)_completeConnectionWithResult:(BOOL)arg1;
- (void)_setupConnection;
- (BOOL)_reconnect;
@property(readonly, copy, nonatomic) NSString *displayName;
@property __weak id /*<IMAPAccount>*/ account;
- (id)errorURLScheme;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

