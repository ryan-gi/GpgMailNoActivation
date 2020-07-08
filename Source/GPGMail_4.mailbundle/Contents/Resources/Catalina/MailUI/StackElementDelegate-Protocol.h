//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import "NSObject-Protocol.h"

@class CALayer, StackElement;

@protocol StackElementDelegate <NSObject>
@property(readonly, nonatomic) BOOL stackIsTerminating;
@property(readonly, nonatomic) struct CGSize stackCenterOffset;
@property(readonly, nonatomic) CALayer *stackContainerLayer;
- (void)stackElement:(StackElement *)arg1 targetStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)stackElement:(StackElement *)arg1 currentStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (void)stackElement:(StackElement *)arg1 willRemoveLayer:(CALayer *)arg2;
- (CALayer *)layerForStackElement:(StackElement *)arg1;
@end

