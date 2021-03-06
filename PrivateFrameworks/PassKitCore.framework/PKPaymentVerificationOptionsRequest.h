/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentVerificationOptionsRequest : PKPaymentWebServiceRequest {
    PKPaymentPass * _pass;
}

@property (nonatomic, retain) PKPaymentPass *pass;

+ (id)requestWithPass:(id)arg1;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (id)pass;
- (void)setPass:(id)arg1;

@end
