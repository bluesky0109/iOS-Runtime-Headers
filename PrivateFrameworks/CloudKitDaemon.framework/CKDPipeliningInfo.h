/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPipeliningInfo : NSObject {
    <CKDOperationPipelining> * _operation;
    NSMutableArray * _perRequestCallbackBlocks;
    NSObject<OS_dispatch_group> * _perRequestCallbackGroup;
    NSObject<OS_dispatch_queue> * _perRequestCallbackQueue;
    NSObject<OS_dispatch_group> * _perRequestGroup;
    <CKDURLRequestPipelining> * _request;
}

@property (nonatomic) <CKDOperationPipelining> *operation;
@property (nonatomic, retain) NSMutableArray *perRequestCallbackBlocks;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *perRequestCallbackGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *perRequestCallbackQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *perRequestGroup;
@property (nonatomic, retain) <CKDURLRequestPipelining> *request;

- (void).cxx_destruct;
- (void)addPerRequestCallbackBlock:(id /* block */)arg1;
- (void)cancelAndDisablePerRequestCallbackBlocks;
- (void)disablePerRequestCallbackBlocks;
- (id)initWithRequest:(id)arg1 operation:(id)arg2;
- (id)operation;
- (id)perRequestCallbackBlocks;
- (id)perRequestCallbackGroup;
- (id)perRequestCallbackQueue;
- (id)perRequestGroup;
- (id)request;
- (void)setOperation:(id)arg1;
- (void)setPerRequestCallbackBlocks:(id)arg1;
- (void)setPerRequestCallbackGroup:(id)arg1;
- (void)setPerRequestCallbackQueue:(id)arg1;
- (void)setPerRequestGroup:(id)arg1;
- (void)setRequest:(id)arg1;

@end
