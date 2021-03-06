/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDCircleProxyImpl : NSObject <CDPDCircleProxy> {
    CDPContext * _cdpContext;
}

@property (nonatomic, retain) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canAuthenticate;
+ (bool)registerCredentialsFromContext:(id)arg1;
+ (bool)registerCredentialsFromContext:(id)arg1 force:(bool)arg2;
+ (bool)tryRegisteringCredentialsFromContext:(id)arg1;

- (void).cxx_destruct;
- (int)_authenticatedCircleStatus:(id*)arg1;
- (int)_circleStatus:(id*)arg1;
- (bool)_performSOSCBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)_viewMemberForView:(struct __CFString { }*)arg1 error:(id*)arg2;
- (bool)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
- (id)cdpContext;
- (int)circleStatus:(id*)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2;
- (id)generateVerifierWithRcoveryKey:(id)arg1 error:(id*)arg2;
- (bool)hasNonViewAwarePeers;
- (id)initWithContext:(id)arg1;
- (bool)isLastBackupMakingPeer:(id*)arg1;
- (unsigned long long)peerCount;
- (id)peerDeviceNamesByPeerID;
- (id)peerId;
- (bool)removeNonViewAwarePeers:(id*)arg1;
- (bool)removeThisDeviceFromCircle:(id*)arg1;
- (bool)requestToJoinCircle:(id*)arg1;
- (bool)requestToJoinCircleAfterRestore:(id*)arg1;
- (bool)requestToResetCircle:(id*)arg1;
- (bool)requestToResetCloudKitData:(id*)arg1;
- (void)setCdpContext:(id)arg1;
- (bool)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (bool)synchronizeCircleViews;
- (bool)viewMemberForAutofillPasswords:(id*)arg1;
- (bool)viewMemberForPCSMaster:(id*)arg1;

@end
