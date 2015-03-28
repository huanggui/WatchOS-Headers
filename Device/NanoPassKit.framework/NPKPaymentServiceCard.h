//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface NPKPaymentServiceCard : NSObject <NSSecureCoding>
{
    NSString *_passUniqueIdentifier;
    NSString *_applicationIdentifier;
    int _paymentApplicationState;
}

+ (id)paymentServiceCardForPaymentPass:(id)arg1;
+ (id)paymentServiceCardForPassUniqueID:(id)arg1 paymentApplication:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(nonatomic) int paymentApplicationState; // @synthesize paymentApplicationState=_paymentApplicationState;
@property(readonly, nonatomic, getter=isReadyForPayment) BOOL availableForPayment;
- (id)initWithPassUniqueIdentifier:(id)arg1 applicationIdentifier:(id)arg2 paymentApplicationState:(int)arg3;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
