/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAViewServiceRequest : NSObject <NSCopying, NSSecureCoding> {
    VSAccountMetadataRequest * _accountMetadataRequest;
    VSResourceAuthorizationRequest * _authorizationRequest;
    NSString * _requestingAppDisplayName;
    bool  _supportsAdditionalIdentityProviders;
}

@property (nonatomic, copy) VSAccountMetadataRequest *accountMetadataRequest;
@property (nonatomic, readonly) bool allowsAuthenticationUI;
@property (nonatomic, copy) VSResourceAuthorizationRequest *authorizationRequest;
@property (nonatomic, copy) NSString *requestingAppDisplayName;
@property (nonatomic) bool supportsAdditionalIdentityProviders;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountMetadataRequest;
- (bool)allowsAuthenticationUI;
- (id)authorizationRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)requestingAppDisplayName;
- (void)setAccountMetadataRequest:(id)arg1;
- (void)setAuthorizationRequest:(id)arg1;
- (void)setRequestingAppDisplayName:(id)arg1;
- (void)setSupportsAdditionalIdentityProviders:(bool)arg1;
- (bool)supportsAdditionalIdentityProviders;

@end
