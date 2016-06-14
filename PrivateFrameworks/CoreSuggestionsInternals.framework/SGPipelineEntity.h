/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPipelineEntity : SGEntity {
    bool  _contactInformationExtracted;
    NSData * _contentHash;
    struct __DDResult { } * _dataDetectorsSignature;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _dissectorLock;
    NSMutableDictionary * _emailToCanonicalEmailCache;
    NSMutableArray * _enrichments;
    bool  _fullDownloadRequested;
    unsigned long long * _htmlOffsets;
    struct { 
        struct { 
            unsigned short bom; 
            unsigned short tag; 
        } _featureType; 
        bool hasInhumanHeaders; 
        bool inhumanEmailAddress; 
        bool inhumanAuthorName; 
        bool inhumanBody; 
        bool isTemplate; 
    }  _inhumanFeatures;
    NSArray * _instantMessageAddresses;
    NSArray * _invalidatedMessageIdentifiers;
    SGMessage * _message;
    bool  _pendingGeocode;
    NSString * _plainTextContentCache;
    bool  _plainTextContentCacheGenerated;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _plainTextContentCacheLock;
    NSArray * _plainTextDetectedData;
    NSArray * _plainTextLines;
    NSIndexSet * _plainTextQuotedRegions;
    NSIndexSet * _plainTextSigHtmlBlockRegions;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _plainTextSigRange;
    NSIndexSet * _plainTextTabularRegions;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, readonly) NSString *authorEmail;
@property (nonatomic) bool contactInformationExtracted;
@property (nonatomic, retain) NSData *contentHash;
@property (nonatomic) struct __DDResult { }*dataDetectorsSignature;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSMutableDictionary *emailToCanonicalEmailCache;
@property (nonatomic, retain) NSArray *enrichments;
@property (getter=hasFullDownloadBeenRequested, readonly) bool fullDownloadRequested;
@property (nonatomic, readonly) unsigned long long*htmlOffsets;
@property (nonatomic, readonly) struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; }*inhumanFeatures;
@property (nonatomic, readonly) NSArray *instantMessageAddresses;
@property (retain) NSArray *invalidatedMessageIdentifiers;
@property (nonatomic, readonly) SGMessage *message;
@property (nonatomic) bool pendingGeocode;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSString *plainTextContent;
@property (nonatomic, retain) NSArray *plainTextDetectedData;
@property (nonatomic, readonly) NSArray *plainTextLines;
@property (nonatomic, retain) NSIndexSet *plainTextQuotedRegions;
@property (nonatomic, retain) NSIndexSet *plainTextSigHtmlBlockRegions;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } plainTextSigRange;
@property (nonatomic, retain) NSIndexSet *plainTextTabularRegions;

+ (id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionType:(unsigned long long)arg7;
+ (id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionType:(unsigned long long)arg7;
+ (id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(bool)arg4 context:(id)arg5 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 extractionType:(unsigned long long)arg7;

- (void).cxx_destruct;
- (void)acquireDissectorLock;
- (void)addCuratedEmailAddress:(id)arg1;
- (void)addCuratedPhoneNumber:(id)arg1;
- (void)addCuratedPostalAddress:(id)arg1;
- (void)addDetectedEmailAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionType:(unsigned long long)arg5;
- (void)addDetectedPhoneNumber:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionType:(unsigned long long)arg5;
- (void)addDetectedPostalAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 extractionType:(unsigned long long)arg5;
- (void)addDetection:(id)arg1 forIdentity:(id)arg2 extractionType:(unsigned long long)arg3;
- (void)addEmailAddressEnrichment:(id)arg1;
- (void)addEnrichment:(id)arg1;
- (void)addUnrecognizedLookupEmailAddress:(id)arg1;
- (void)addUnrecognizedLookupPhoneNumber:(id)arg1;
- (id)addresses;
- (id)authorEmail;
- (void)chopOffContentAfterIndex:(unsigned long long)arg1;
- (void)chopOffContentBeforeIndex:(unsigned long long)arg1;
- (id)contactDetailsWithType:(unsigned long long)arg1;
- (bool)contactInformationExtracted;
- (id)contentHash;
- (struct __DDResult { }*)dataDetectorsSignature;
- (void)dealloc;
- (id)emailAddresses;
- (id)emailToCanonicalEmailCache;
- (id)enrichments;
- (void)enumeratePeople:(id /* block */)arg1;
- (void)enumeratePlainTextLines:(id /* block */)arg1;
- (bool)hasEventEnrichment;
- (bool)hasFullDownloadBeenRequested;
- (unsigned long long*)htmlOffsets;
- (struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; }*)inhumanFeatures;
- (id)initWithContactDetailWithKey:(id)arg1 type:(unsigned long long)arg2 extractionType:(unsigned long long)arg3 curated:(bool)arg4 parent:(id)arg5 value:(id)arg6 context:(id)arg7 contextRangeOfInterest:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg8;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3;
- (id)initWithEmailMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithIntentPersonAtDate:(id)arg1 bundleId:(id)arg2 handle:(id)arg3 displayName:(id)arg4;
- (id)initWithMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)initWithTextMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithUnrecognizedContactWithKey:(id)arg1;
- (id)instantMessageAddresses;
- (id)invalidatedMessageIdentifiers;
- (bool)isEvent;
- (bool)isPerson;
- (id)message;
- (bool)pendingGeocode;
- (id)phoneNumbers;
- (id)plainTextContent;
- (id)plainTextDetectedData;
- (id)plainTextLines;
- (id)plainTextQuotedRegions;
- (id)plainTextSigHtmlBlockRegions;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })plainTextSigRange;
- (id)plainTextTabularRegions;
- (void)releaseDissectorLock;
- (void)requestFullDownload;
- (void)setAuthor:(id)arg1;
- (void)setContactInformationExtracted:(bool)arg1;
- (void)setContentHash:(id)arg1;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setDataDetectorsSignature:(struct __DDResult { }*)arg1;
- (void)setEnrichments:(id)arg1;
- (void)setInvalidatedMessageIdentifiers:(id)arg1;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ { double x1; })arg1;
- (void)setPendingGeocode:(bool)arg1;
- (void)setPlainTextDetectedData:(id)arg1;
- (void)setPlainTextLines:(id)arg1;
- (void)setPlainTextLines:(id)arg1 utf8Offsets:(id)arg2 isAscii:(bool)arg3;
- (void)setPlainTextQuotedRegions:(id)arg1;
- (void)setPlainTextSigHtmlBlockRegions:(id)arg1;
- (void)setPlainTextSigRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPlainTextTabularRegions:(id)arg1;
- (void)stripContactInformation;
- (void)stripEventInformation;

@end