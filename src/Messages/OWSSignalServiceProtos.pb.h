//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class OWSSignalServiceProtosAttachmentPointer;
@class OWSSignalServiceProtosAttachmentPointerBuilder;
@class OWSSignalServiceProtosCallMessage;
@class OWSSignalServiceProtosCallMessageAnswer;
@class OWSSignalServiceProtosCallMessageAnswerBuilder;
@class OWSSignalServiceProtosCallMessageBuilder;
@class OWSSignalServiceProtosCallMessageBusy;
@class OWSSignalServiceProtosCallMessageBusyBuilder;
@class OWSSignalServiceProtosCallMessageHangup;
@class OWSSignalServiceProtosCallMessageHangupBuilder;
@class OWSSignalServiceProtosCallMessageIceUpdate;
@class OWSSignalServiceProtosCallMessageIceUpdateBuilder;
@class OWSSignalServiceProtosCallMessageOffer;
@class OWSSignalServiceProtosCallMessageOfferBuilder;
@class OWSSignalServiceProtosContactDetails;
@class OWSSignalServiceProtosContactDetailsAvatar;
@class OWSSignalServiceProtosContactDetailsAvatarBuilder;
@class OWSSignalServiceProtosContactDetailsBuilder;
@class OWSSignalServiceProtosContent;
@class OWSSignalServiceProtosContentBuilder;
@class OWSSignalServiceProtosDataMessage;
@class OWSSignalServiceProtosDataMessageBuilder;
@class OWSSignalServiceProtosEnvelope;
@class OWSSignalServiceProtosEnvelopeBuilder;
@class OWSSignalServiceProtosGroupContext;
@class OWSSignalServiceProtosGroupContextBuilder;
@class OWSSignalServiceProtosGroupDetails;
@class OWSSignalServiceProtosGroupDetailsAvatar;
@class OWSSignalServiceProtosGroupDetailsAvatarBuilder;
@class OWSSignalServiceProtosGroupDetailsBuilder;
@class OWSSignalServiceProtosNullMessage;
@class OWSSignalServiceProtosNullMessageBuilder;
@class OWSSignalServiceProtosSyncMessage;
@class OWSSignalServiceProtosSyncMessageBlocked;
@class OWSSignalServiceProtosSyncMessageBlockedBuilder;
@class OWSSignalServiceProtosSyncMessageBuilder;
@class OWSSignalServiceProtosSyncMessageContacts;
@class OWSSignalServiceProtosSyncMessageContactsBuilder;
@class OWSSignalServiceProtosSyncMessageGroups;
@class OWSSignalServiceProtosSyncMessageGroupsBuilder;
@class OWSSignalServiceProtosSyncMessageRead;
@class OWSSignalServiceProtosSyncMessageReadBuilder;
@class OWSSignalServiceProtosSyncMessageRequest;
@class OWSSignalServiceProtosSyncMessageRequestBuilder;
@class OWSSignalServiceProtosSyncMessageSent;
@class OWSSignalServiceProtosSyncMessageSentBuilder;
@class OWSSignalServiceProtosVerified;
@class OWSSignalServiceProtosVerifiedBuilder;
@class ObjectiveCFileOptions;
@class ObjectiveCFileOptionsBuilder;
@class PBDescriptorProto;
@class PBDescriptorProtoBuilder;
@class PBDescriptorProtoExtensionRange;
@class PBDescriptorProtoExtensionRangeBuilder;
@class PBEnumDescriptorProto;
@class PBEnumDescriptorProtoBuilder;
@class PBEnumOptions;
@class PBEnumOptionsBuilder;
@class PBEnumValueDescriptorProto;
@class PBEnumValueDescriptorProtoBuilder;
@class PBEnumValueOptions;
@class PBEnumValueOptionsBuilder;
@class PBFieldDescriptorProto;
@class PBFieldDescriptorProtoBuilder;
@class PBFieldOptions;
@class PBFieldOptionsBuilder;
@class PBFileDescriptorProto;
@class PBFileDescriptorProtoBuilder;
@class PBFileDescriptorSet;
@class PBFileDescriptorSetBuilder;
@class PBFileOptions;
@class PBFileOptionsBuilder;
@class PBMessageOptions;
@class PBMessageOptionsBuilder;
@class PBMethodDescriptorProto;
@class PBMethodDescriptorProtoBuilder;
@class PBMethodOptions;
@class PBMethodOptionsBuilder;
@class PBOneofDescriptorProto;
@class PBOneofDescriptorProtoBuilder;
@class PBServiceDescriptorProto;
@class PBServiceDescriptorProtoBuilder;
@class PBServiceOptions;
@class PBServiceOptionsBuilder;
@class PBSourceCodeInfo;
@class PBSourceCodeInfoBuilder;
@class PBSourceCodeInfoLocation;
@class PBSourceCodeInfoLocationBuilder;
@class PBUninterpretedOption;
@class PBUninterpretedOptionBuilder;
@class PBUninterpretedOptionNamePart;
@class PBUninterpretedOptionNamePartBuilder;


typedef NS_ENUM(SInt32, OWSSignalServiceProtosEnvelopeType) {
  OWSSignalServiceProtosEnvelopeTypeUnknown = 0,
  OWSSignalServiceProtosEnvelopeTypeCiphertext = 1,
  OWSSignalServiceProtosEnvelopeTypeKeyExchange = 2,
  OWSSignalServiceProtosEnvelopeTypePrekeyBundle = 3,
  OWSSignalServiceProtosEnvelopeTypeReceipt = 5,
};

BOOL OWSSignalServiceProtosEnvelopeTypeIsValidValue(OWSSignalServiceProtosEnvelopeType value);
NSString *NSStringFromOWSSignalServiceProtosEnvelopeType(OWSSignalServiceProtosEnvelopeType value);

typedef NS_ENUM(SInt32, OWSSignalServiceProtosVerifiedState) {
  OWSSignalServiceProtosVerifiedStateDefault = 0,
  OWSSignalServiceProtosVerifiedStateVerified = 1,
  OWSSignalServiceProtosVerifiedStateUnverified = 2,
};

BOOL OWSSignalServiceProtosVerifiedStateIsValidValue(OWSSignalServiceProtosVerifiedState value);
NSString *NSStringFromOWSSignalServiceProtosVerifiedState(OWSSignalServiceProtosVerifiedState value);

typedef NS_ENUM(SInt32, OWSSignalServiceProtosDataMessageFlags) {
  OWSSignalServiceProtosDataMessageFlagsEndSession = 1,
  OWSSignalServiceProtosDataMessageFlagsExpirationTimerUpdate = 2,
};

BOOL OWSSignalServiceProtosDataMessageFlagsIsValidValue(OWSSignalServiceProtosDataMessageFlags value);
NSString *NSStringFromOWSSignalServiceProtosDataMessageFlags(OWSSignalServiceProtosDataMessageFlags value);

typedef NS_ENUM(SInt32, OWSSignalServiceProtosSyncMessageRequestType) {
  OWSSignalServiceProtosSyncMessageRequestTypeUnknown = 0,
  OWSSignalServiceProtosSyncMessageRequestTypeContacts = 1,
  OWSSignalServiceProtosSyncMessageRequestTypeGroups = 2,
  OWSSignalServiceProtosSyncMessageRequestTypeBlocked = 3,
};

BOOL OWSSignalServiceProtosSyncMessageRequestTypeIsValidValue(OWSSignalServiceProtosSyncMessageRequestType value);
NSString *NSStringFromOWSSignalServiceProtosSyncMessageRequestType(OWSSignalServiceProtosSyncMessageRequestType value);

typedef NS_ENUM(SInt32, OWSSignalServiceProtosAttachmentPointerFlags) {
  OWSSignalServiceProtosAttachmentPointerFlagsVoiceMessage = 1,
};

BOOL OWSSignalServiceProtosAttachmentPointerFlagsIsValidValue(OWSSignalServiceProtosAttachmentPointerFlags value);
NSString *NSStringFromOWSSignalServiceProtosAttachmentPointerFlags(OWSSignalServiceProtosAttachmentPointerFlags value);

typedef NS_ENUM(SInt32, OWSSignalServiceProtosGroupContextType) {
  OWSSignalServiceProtosGroupContextTypeUnknown = 0,
  OWSSignalServiceProtosGroupContextTypeUpdate = 1,
  OWSSignalServiceProtosGroupContextTypeDeliver = 2,
  OWSSignalServiceProtosGroupContextTypeQuit = 3,
  OWSSignalServiceProtosGroupContextTypeRequestInfo = 4,
};

BOOL OWSSignalServiceProtosGroupContextTypeIsValidValue(OWSSignalServiceProtosGroupContextType value);
NSString *NSStringFromOWSSignalServiceProtosGroupContextType(OWSSignalServiceProtosGroupContextType value);


@interface OWSSignalServiceProtosOwssignalServiceProtosRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define Envelope_type @"type"
#define Envelope_source @"source"
#define Envelope_sourceDevice @"sourceDevice"
#define Envelope_relay @"relay"
#define Envelope_timestamp @"timestamp"
#define Envelope_legacyMessage @"legacyMessage"
#define Envelope_content @"content"
@interface OWSSignalServiceProtosEnvelope : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTimestamp_:1;
  BOOL hasSource_:1;
  BOOL hasRelay_:1;
  BOOL hasLegacyMessage_:1;
  BOOL hasContent_:1;
  BOOL hasSourceDevice_:1;
  BOOL hasType_:1;
  UInt64 timestamp;
  NSString* source;
  NSString* relay;
  NSData* legacyMessage;
  NSData* content;
  UInt32 sourceDevice;
  OWSSignalServiceProtosEnvelopeType type;
}
- (BOOL) hasType;
- (BOOL) hasSource;
- (BOOL) hasSourceDevice;
- (BOOL) hasRelay;
- (BOOL) hasTimestamp;
- (BOOL) hasLegacyMessage;
- (BOOL) hasContent;
@property (readonly) OWSSignalServiceProtosEnvelopeType type;
@property (readonly, strong) NSString* source;
@property (readonly) UInt32 sourceDevice;
@property (readonly, strong) NSString* relay;
@property (readonly) UInt64 timestamp;
@property (readonly, strong) NSData* legacyMessage;
@property (readonly, strong) NSData* content;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosEnvelopeBuilder*) builder;
+ (OWSSignalServiceProtosEnvelopeBuilder*) builder;
+ (OWSSignalServiceProtosEnvelopeBuilder*) builderWithPrototype:(OWSSignalServiceProtosEnvelope*) prototype;
- (OWSSignalServiceProtosEnvelopeBuilder*) toBuilder;

+ (OWSSignalServiceProtosEnvelope*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosEnvelope*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosEnvelope*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosEnvelope*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosEnvelope*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosEnvelope*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosEnvelopeBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosEnvelope* resultEnvelope;
}

- (OWSSignalServiceProtosEnvelope*) defaultInstance;

- (OWSSignalServiceProtosEnvelopeBuilder*) clear;
- (OWSSignalServiceProtosEnvelopeBuilder*) clone;

- (OWSSignalServiceProtosEnvelope*) build;
- (OWSSignalServiceProtosEnvelope*) buildPartial;

- (OWSSignalServiceProtosEnvelopeBuilder*) mergeFrom:(OWSSignalServiceProtosEnvelope*) other;
- (OWSSignalServiceProtosEnvelopeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosEnvelopeBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (OWSSignalServiceProtosEnvelopeType) type;
- (OWSSignalServiceProtosEnvelopeBuilder*) setType:(OWSSignalServiceProtosEnvelopeType) value;
- (OWSSignalServiceProtosEnvelopeBuilder*) clearType;

- (BOOL) hasSource;
- (NSString*) source;
- (OWSSignalServiceProtosEnvelopeBuilder*) setSource:(NSString*) value;
- (OWSSignalServiceProtosEnvelopeBuilder*) clearSource;

- (BOOL) hasSourceDevice;
- (UInt32) sourceDevice;
- (OWSSignalServiceProtosEnvelopeBuilder*) setSourceDevice:(UInt32) value;
- (OWSSignalServiceProtosEnvelopeBuilder*) clearSourceDevice;

- (BOOL) hasRelay;
- (NSString*) relay;
- (OWSSignalServiceProtosEnvelopeBuilder*) setRelay:(NSString*) value;
- (OWSSignalServiceProtosEnvelopeBuilder*) clearRelay;

- (BOOL) hasTimestamp;
- (UInt64) timestamp;
- (OWSSignalServiceProtosEnvelopeBuilder*) setTimestamp:(UInt64) value;
- (OWSSignalServiceProtosEnvelopeBuilder*) clearTimestamp;

- (BOOL) hasLegacyMessage;
- (NSData*) legacyMessage;
- (OWSSignalServiceProtosEnvelopeBuilder*) setLegacyMessage:(NSData*) value;
- (OWSSignalServiceProtosEnvelopeBuilder*) clearLegacyMessage;

- (BOOL) hasContent;
- (NSData*) content;
- (OWSSignalServiceProtosEnvelopeBuilder*) setContent:(NSData*) value;
- (OWSSignalServiceProtosEnvelopeBuilder*) clearContent;
@end

#define Content_dataMessage @"dataMessage"
#define Content_syncMessage @"syncMessage"
#define Content_callMessage @"callMessage"
#define Content_nullMessage @"nullMessage"
@interface OWSSignalServiceProtosContent : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasDataMessage_:1;
  BOOL hasSyncMessage_:1;
  BOOL hasCallMessage_:1;
  BOOL hasNullMessage_:1;
  OWSSignalServiceProtosDataMessage* dataMessage;
  OWSSignalServiceProtosSyncMessage* syncMessage;
  OWSSignalServiceProtosCallMessage* callMessage;
  OWSSignalServiceProtosNullMessage* nullMessage;
}
- (BOOL) hasDataMessage;
- (BOOL) hasSyncMessage;
- (BOOL) hasCallMessage;
- (BOOL) hasNullMessage;
@property (readonly, strong) OWSSignalServiceProtosDataMessage* dataMessage;
@property (readonly, strong) OWSSignalServiceProtosSyncMessage* syncMessage;
@property (readonly, strong) OWSSignalServiceProtosCallMessage* callMessage;
@property (readonly, strong) OWSSignalServiceProtosNullMessage* nullMessage;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosContentBuilder*) builder;
+ (OWSSignalServiceProtosContentBuilder*) builder;
+ (OWSSignalServiceProtosContentBuilder*) builderWithPrototype:(OWSSignalServiceProtosContent*) prototype;
- (OWSSignalServiceProtosContentBuilder*) toBuilder;

+ (OWSSignalServiceProtosContent*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosContent*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosContent*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosContent*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosContent*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosContent*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosContentBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosContent* resultContent;
}

- (OWSSignalServiceProtosContent*) defaultInstance;

- (OWSSignalServiceProtosContentBuilder*) clear;
- (OWSSignalServiceProtosContentBuilder*) clone;

- (OWSSignalServiceProtosContent*) build;
- (OWSSignalServiceProtosContent*) buildPartial;

- (OWSSignalServiceProtosContentBuilder*) mergeFrom:(OWSSignalServiceProtosContent*) other;
- (OWSSignalServiceProtosContentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosContentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasDataMessage;
- (OWSSignalServiceProtosDataMessage*) dataMessage;
- (OWSSignalServiceProtosContentBuilder*) setDataMessage:(OWSSignalServiceProtosDataMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) setDataMessageBuilder:(OWSSignalServiceProtosDataMessageBuilder*) builderForValue;
- (OWSSignalServiceProtosContentBuilder*) mergeDataMessage:(OWSSignalServiceProtosDataMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) clearDataMessage;

- (BOOL) hasSyncMessage;
- (OWSSignalServiceProtosSyncMessage*) syncMessage;
- (OWSSignalServiceProtosContentBuilder*) setSyncMessage:(OWSSignalServiceProtosSyncMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) setSyncMessageBuilder:(OWSSignalServiceProtosSyncMessageBuilder*) builderForValue;
- (OWSSignalServiceProtosContentBuilder*) mergeSyncMessage:(OWSSignalServiceProtosSyncMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) clearSyncMessage;

- (BOOL) hasCallMessage;
- (OWSSignalServiceProtosCallMessage*) callMessage;
- (OWSSignalServiceProtosContentBuilder*) setCallMessage:(OWSSignalServiceProtosCallMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) setCallMessageBuilder:(OWSSignalServiceProtosCallMessageBuilder*) builderForValue;
- (OWSSignalServiceProtosContentBuilder*) mergeCallMessage:(OWSSignalServiceProtosCallMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) clearCallMessage;

- (BOOL) hasNullMessage;
- (OWSSignalServiceProtosNullMessage*) nullMessage;
- (OWSSignalServiceProtosContentBuilder*) setNullMessage:(OWSSignalServiceProtosNullMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) setNullMessageBuilder:(OWSSignalServiceProtosNullMessageBuilder*) builderForValue;
- (OWSSignalServiceProtosContentBuilder*) mergeNullMessage:(OWSSignalServiceProtosNullMessage*) value;
- (OWSSignalServiceProtosContentBuilder*) clearNullMessage;
@end

#define NullMessage_padding @"padding"
@interface OWSSignalServiceProtosNullMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasPadding_:1;
  NSData* padding;
}
- (BOOL) hasPadding;
@property (readonly, strong) NSData* padding;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosNullMessageBuilder*) builder;
+ (OWSSignalServiceProtosNullMessageBuilder*) builder;
+ (OWSSignalServiceProtosNullMessageBuilder*) builderWithPrototype:(OWSSignalServiceProtosNullMessage*) prototype;
- (OWSSignalServiceProtosNullMessageBuilder*) toBuilder;

+ (OWSSignalServiceProtosNullMessage*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosNullMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosNullMessage*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosNullMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosNullMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosNullMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosNullMessageBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosNullMessage* resultNullMessage;
}

- (OWSSignalServiceProtosNullMessage*) defaultInstance;

- (OWSSignalServiceProtosNullMessageBuilder*) clear;
- (OWSSignalServiceProtosNullMessageBuilder*) clone;

- (OWSSignalServiceProtosNullMessage*) build;
- (OWSSignalServiceProtosNullMessage*) buildPartial;

- (OWSSignalServiceProtosNullMessageBuilder*) mergeFrom:(OWSSignalServiceProtosNullMessage*) other;
- (OWSSignalServiceProtosNullMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosNullMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPadding;
- (NSData*) padding;
- (OWSSignalServiceProtosNullMessageBuilder*) setPadding:(NSData*) value;
- (OWSSignalServiceProtosNullMessageBuilder*) clearPadding;
@end

#define Verified_destination @"destination"
#define Verified_identityKey @"identityKey"
#define Verified_state @"state"
#define Verified_nullMessage @"nullMessage"
@interface OWSSignalServiceProtosVerified : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasDestination_:1;
  BOOL hasIdentityKey_:1;
  BOOL hasNullMessage_:1;
  BOOL hasState_:1;
  NSString* destination;
  NSData* identityKey;
  NSData* nullMessage;
  OWSSignalServiceProtosVerifiedState state;
}
- (BOOL) hasDestination;
- (BOOL) hasIdentityKey;
- (BOOL) hasState;
- (BOOL) hasNullMessage;
@property (readonly, strong) NSString* destination;
@property (readonly, strong) NSData* identityKey;
@property (readonly) OWSSignalServiceProtosVerifiedState state;
@property (readonly, strong) NSData* nullMessage;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosVerifiedBuilder*) builder;
+ (OWSSignalServiceProtosVerifiedBuilder*) builder;
+ (OWSSignalServiceProtosVerifiedBuilder*) builderWithPrototype:(OWSSignalServiceProtosVerified*) prototype;
- (OWSSignalServiceProtosVerifiedBuilder*) toBuilder;

+ (OWSSignalServiceProtosVerified*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosVerified*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosVerified*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosVerified*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosVerified*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosVerified*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosVerifiedBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosVerified* resultVerified;
}

- (OWSSignalServiceProtosVerified*) defaultInstance;

- (OWSSignalServiceProtosVerifiedBuilder*) clear;
- (OWSSignalServiceProtosVerifiedBuilder*) clone;

- (OWSSignalServiceProtosVerified*) build;
- (OWSSignalServiceProtosVerified*) buildPartial;

- (OWSSignalServiceProtosVerifiedBuilder*) mergeFrom:(OWSSignalServiceProtosVerified*) other;
- (OWSSignalServiceProtosVerifiedBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosVerifiedBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasDestination;
- (NSString*) destination;
- (OWSSignalServiceProtosVerifiedBuilder*) setDestination:(NSString*) value;
- (OWSSignalServiceProtosVerifiedBuilder*) clearDestination;

- (BOOL) hasIdentityKey;
- (NSData*) identityKey;
- (OWSSignalServiceProtosVerifiedBuilder*) setIdentityKey:(NSData*) value;
- (OWSSignalServiceProtosVerifiedBuilder*) clearIdentityKey;

- (BOOL) hasState;
- (OWSSignalServiceProtosVerifiedState) state;
- (OWSSignalServiceProtosVerifiedBuilder*) setState:(OWSSignalServiceProtosVerifiedState) value;
- (OWSSignalServiceProtosVerifiedBuilder*) clearState;

- (BOOL) hasNullMessage;
- (NSData*) nullMessage;
- (OWSSignalServiceProtosVerifiedBuilder*) setNullMessage:(NSData*) value;
- (OWSSignalServiceProtosVerifiedBuilder*) clearNullMessage;
@end

#define CallMessage_offer @"offer"
#define CallMessage_answer @"answer"
#define CallMessage_iceUpdate @"iceUpdate"
#define CallMessage_hangup @"hangup"
#define CallMessage_busy @"busy"
@interface OWSSignalServiceProtosCallMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasOffer_:1;
  BOOL hasAnswer_:1;
  BOOL hasHangup_:1;
  BOOL hasBusy_:1;
  OWSSignalServiceProtosCallMessageOffer* offer;
  OWSSignalServiceProtosCallMessageAnswer* answer;
  OWSSignalServiceProtosCallMessageHangup* hangup;
  OWSSignalServiceProtosCallMessageBusy* busy;
  NSMutableArray * iceUpdateArray;
}
- (BOOL) hasOffer;
- (BOOL) hasAnswer;
- (BOOL) hasHangup;
- (BOOL) hasBusy;
@property (readonly, strong) OWSSignalServiceProtosCallMessageOffer* offer;
@property (readonly, strong) OWSSignalServiceProtosCallMessageAnswer* answer;
@property (readonly, strong) NSArray<OWSSignalServiceProtosCallMessageIceUpdate*> * iceUpdate;
@property (readonly, strong) OWSSignalServiceProtosCallMessageHangup* hangup;
@property (readonly, strong) OWSSignalServiceProtosCallMessageBusy* busy;
- (OWSSignalServiceProtosCallMessageIceUpdate*)iceUpdateAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosCallMessageBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageBuilder*) builderWithPrototype:(OWSSignalServiceProtosCallMessage*) prototype;
- (OWSSignalServiceProtosCallMessageBuilder*) toBuilder;

+ (OWSSignalServiceProtosCallMessage*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosCallMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessage*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosCallMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosCallMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

#define Offer_id @"id"
#define Offer_sessionDescription @"sessionDescription"
@interface OWSSignalServiceProtosCallMessageOffer : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasSessionDescription_:1;
  UInt64 id;
  NSString* sessionDescription;
}
- (BOOL) hasId;
- (BOOL) hasSessionDescription;
@property (readonly) UInt64 id;
@property (readonly, strong) NSString* sessionDescription;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageOfferBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageOfferBuilder*) builderWithPrototype:(OWSSignalServiceProtosCallMessageOffer*) prototype;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) toBuilder;

+ (OWSSignalServiceProtosCallMessageOffer*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosCallMessageOffer*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageOffer*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosCallMessageOffer*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageOffer*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosCallMessageOffer*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosCallMessageOfferBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosCallMessageOffer* resultOffer;
}

- (OWSSignalServiceProtosCallMessageOffer*) defaultInstance;

- (OWSSignalServiceProtosCallMessageOfferBuilder*) clear;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) clone;

- (OWSSignalServiceProtosCallMessageOffer*) build;
- (OWSSignalServiceProtosCallMessageOffer*) buildPartial;

- (OWSSignalServiceProtosCallMessageOfferBuilder*) mergeFrom:(OWSSignalServiceProtosCallMessageOffer*) other;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) setId:(UInt64) value;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) clearId;

- (BOOL) hasSessionDescription;
- (NSString*) sessionDescription;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) setSessionDescription:(NSString*) value;
- (OWSSignalServiceProtosCallMessageOfferBuilder*) clearSessionDescription;
@end

#define Answer_id @"id"
#define Answer_sessionDescription @"sessionDescription"
@interface OWSSignalServiceProtosCallMessageAnswer : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasSessionDescription_:1;
  UInt64 id;
  NSString* sessionDescription;
}
- (BOOL) hasId;
- (BOOL) hasSessionDescription;
@property (readonly) UInt64 id;
@property (readonly, strong) NSString* sessionDescription;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageAnswerBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageAnswerBuilder*) builderWithPrototype:(OWSSignalServiceProtosCallMessageAnswer*) prototype;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) toBuilder;

+ (OWSSignalServiceProtosCallMessageAnswer*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosCallMessageAnswer*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageAnswer*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosCallMessageAnswer*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageAnswer*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosCallMessageAnswer*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosCallMessageAnswerBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosCallMessageAnswer* resultAnswer;
}

- (OWSSignalServiceProtosCallMessageAnswer*) defaultInstance;

- (OWSSignalServiceProtosCallMessageAnswerBuilder*) clear;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) clone;

- (OWSSignalServiceProtosCallMessageAnswer*) build;
- (OWSSignalServiceProtosCallMessageAnswer*) buildPartial;

- (OWSSignalServiceProtosCallMessageAnswerBuilder*) mergeFrom:(OWSSignalServiceProtosCallMessageAnswer*) other;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) setId:(UInt64) value;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) clearId;

- (BOOL) hasSessionDescription;
- (NSString*) sessionDescription;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) setSessionDescription:(NSString*) value;
- (OWSSignalServiceProtosCallMessageAnswerBuilder*) clearSessionDescription;
@end

#define IceUpdate_id @"id"
#define IceUpdate_sdpMid @"sdpMid"
#define IceUpdate_sdpMLineIndex @"sdpMlineIndex"
#define IceUpdate_sdp @"sdp"
@interface OWSSignalServiceProtosCallMessageIceUpdate : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasSdpMid_:1;
  BOOL hasSdp_:1;
  BOOL hasSdpMlineIndex_:1;
  UInt64 id;
  NSString* sdpMid;
  NSString* sdp;
  UInt32 sdpMlineIndex;
}
- (BOOL) hasId;
- (BOOL) hasSdpMid;
- (BOOL) hasSdpMlineIndex;
- (BOOL) hasSdp;
@property (readonly) UInt64 id;
@property (readonly, strong) NSString* sdpMid;
@property (readonly) UInt32 sdpMlineIndex;
@property (readonly, strong) NSString* sdp;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) builderWithPrototype:(OWSSignalServiceProtosCallMessageIceUpdate*) prototype;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) toBuilder;

+ (OWSSignalServiceProtosCallMessageIceUpdate*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosCallMessageIceUpdate*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageIceUpdate*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosCallMessageIceUpdate*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageIceUpdate*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosCallMessageIceUpdate*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosCallMessageIceUpdateBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosCallMessageIceUpdate* resultIceUpdate;
}

- (OWSSignalServiceProtosCallMessageIceUpdate*) defaultInstance;

- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) clear;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) clone;

- (OWSSignalServiceProtosCallMessageIceUpdate*) build;
- (OWSSignalServiceProtosCallMessageIceUpdate*) buildPartial;

- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) mergeFrom:(OWSSignalServiceProtosCallMessageIceUpdate*) other;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) setId:(UInt64) value;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) clearId;

- (BOOL) hasSdpMid;
- (NSString*) sdpMid;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) setSdpMid:(NSString*) value;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) clearSdpMid;

- (BOOL) hasSdpMlineIndex;
- (UInt32) sdpMlineIndex;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) setSdpMlineIndex:(UInt32) value;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) clearSdpMlineIndex;

- (BOOL) hasSdp;
- (NSString*) sdp;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) setSdp:(NSString*) value;
- (OWSSignalServiceProtosCallMessageIceUpdateBuilder*) clearSdp;
@end

#define Busy_id @"id"
@interface OWSSignalServiceProtosCallMessageBusy : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  UInt64 id;
}
- (BOOL) hasId;
@property (readonly) UInt64 id;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosCallMessageBusyBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageBusyBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageBusyBuilder*) builderWithPrototype:(OWSSignalServiceProtosCallMessageBusy*) prototype;
- (OWSSignalServiceProtosCallMessageBusyBuilder*) toBuilder;

+ (OWSSignalServiceProtosCallMessageBusy*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosCallMessageBusy*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageBusy*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosCallMessageBusy*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageBusy*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosCallMessageBusy*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosCallMessageBusyBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosCallMessageBusy* resultBusy;
}

- (OWSSignalServiceProtosCallMessageBusy*) defaultInstance;

- (OWSSignalServiceProtosCallMessageBusyBuilder*) clear;
- (OWSSignalServiceProtosCallMessageBusyBuilder*) clone;

- (OWSSignalServiceProtosCallMessageBusy*) build;
- (OWSSignalServiceProtosCallMessageBusy*) buildPartial;

- (OWSSignalServiceProtosCallMessageBusyBuilder*) mergeFrom:(OWSSignalServiceProtosCallMessageBusy*) other;
- (OWSSignalServiceProtosCallMessageBusyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosCallMessageBusyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (OWSSignalServiceProtosCallMessageBusyBuilder*) setId:(UInt64) value;
- (OWSSignalServiceProtosCallMessageBusyBuilder*) clearId;
@end

#define Hangup_id @"id"
@interface OWSSignalServiceProtosCallMessageHangup : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  UInt64 id;
}
- (BOOL) hasId;
@property (readonly) UInt64 id;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosCallMessageHangupBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageHangupBuilder*) builder;
+ (OWSSignalServiceProtosCallMessageHangupBuilder*) builderWithPrototype:(OWSSignalServiceProtosCallMessageHangup*) prototype;
- (OWSSignalServiceProtosCallMessageHangupBuilder*) toBuilder;

+ (OWSSignalServiceProtosCallMessageHangup*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosCallMessageHangup*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageHangup*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosCallMessageHangup*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosCallMessageHangup*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosCallMessageHangup*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosCallMessageHangupBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosCallMessageHangup* resultHangup;
}

- (OWSSignalServiceProtosCallMessageHangup*) defaultInstance;

- (OWSSignalServiceProtosCallMessageHangupBuilder*) clear;
- (OWSSignalServiceProtosCallMessageHangupBuilder*) clone;

- (OWSSignalServiceProtosCallMessageHangup*) build;
- (OWSSignalServiceProtosCallMessageHangup*) buildPartial;

- (OWSSignalServiceProtosCallMessageHangupBuilder*) mergeFrom:(OWSSignalServiceProtosCallMessageHangup*) other;
- (OWSSignalServiceProtosCallMessageHangupBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosCallMessageHangupBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (OWSSignalServiceProtosCallMessageHangupBuilder*) setId:(UInt64) value;
- (OWSSignalServiceProtosCallMessageHangupBuilder*) clearId;
@end

@interface OWSSignalServiceProtosCallMessageBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosCallMessage* resultCallMessage;
}

- (OWSSignalServiceProtosCallMessage*) defaultInstance;

- (OWSSignalServiceProtosCallMessageBuilder*) clear;
- (OWSSignalServiceProtosCallMessageBuilder*) clone;

- (OWSSignalServiceProtosCallMessage*) build;
- (OWSSignalServiceProtosCallMessage*) buildPartial;

- (OWSSignalServiceProtosCallMessageBuilder*) mergeFrom:(OWSSignalServiceProtosCallMessage*) other;
- (OWSSignalServiceProtosCallMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosCallMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasOffer;
- (OWSSignalServiceProtosCallMessageOffer*) offer;
- (OWSSignalServiceProtosCallMessageBuilder*) setOffer:(OWSSignalServiceProtosCallMessageOffer*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) setOfferBuilder:(OWSSignalServiceProtosCallMessageOfferBuilder*) builderForValue;
- (OWSSignalServiceProtosCallMessageBuilder*) mergeOffer:(OWSSignalServiceProtosCallMessageOffer*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) clearOffer;

- (BOOL) hasAnswer;
- (OWSSignalServiceProtosCallMessageAnswer*) answer;
- (OWSSignalServiceProtosCallMessageBuilder*) setAnswer:(OWSSignalServiceProtosCallMessageAnswer*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) setAnswerBuilder:(OWSSignalServiceProtosCallMessageAnswerBuilder*) builderForValue;
- (OWSSignalServiceProtosCallMessageBuilder*) mergeAnswer:(OWSSignalServiceProtosCallMessageAnswer*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) clearAnswer;

- (NSMutableArray<OWSSignalServiceProtosCallMessageIceUpdate*> *)iceUpdate;
- (OWSSignalServiceProtosCallMessageIceUpdate*)iceUpdateAtIndex:(NSUInteger)index;
- (OWSSignalServiceProtosCallMessageBuilder *)addIceUpdate:(OWSSignalServiceProtosCallMessageIceUpdate*)value;
- (OWSSignalServiceProtosCallMessageBuilder *)setIceUpdateArray:(NSArray<OWSSignalServiceProtosCallMessageIceUpdate*> *)array;
- (OWSSignalServiceProtosCallMessageBuilder *)clearIceUpdate;

- (BOOL) hasHangup;
- (OWSSignalServiceProtosCallMessageHangup*) hangup;
- (OWSSignalServiceProtosCallMessageBuilder*) setHangup:(OWSSignalServiceProtosCallMessageHangup*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) setHangupBuilder:(OWSSignalServiceProtosCallMessageHangupBuilder*) builderForValue;
- (OWSSignalServiceProtosCallMessageBuilder*) mergeHangup:(OWSSignalServiceProtosCallMessageHangup*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) clearHangup;

- (BOOL) hasBusy;
- (OWSSignalServiceProtosCallMessageBusy*) busy;
- (OWSSignalServiceProtosCallMessageBuilder*) setBusy:(OWSSignalServiceProtosCallMessageBusy*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) setBusyBuilder:(OWSSignalServiceProtosCallMessageBusyBuilder*) builderForValue;
- (OWSSignalServiceProtosCallMessageBuilder*) mergeBusy:(OWSSignalServiceProtosCallMessageBusy*) value;
- (OWSSignalServiceProtosCallMessageBuilder*) clearBusy;
@end

#define DataMessage_body @"body"
#define DataMessage_attachments @"attachments"
#define DataMessage_group @"group"
#define DataMessage_flags @"flags"
#define DataMessage_expireTimer @"expireTimer"
@interface OWSSignalServiceProtosDataMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasBody_:1;
  BOOL hasGroup_:1;
  BOOL hasFlags_:1;
  BOOL hasExpireTimer_:1;
  NSString* body;
  OWSSignalServiceProtosGroupContext* group;
  UInt32 flags;
  UInt32 expireTimer;
  NSMutableArray * attachmentsArray;
}
- (BOOL) hasBody;
- (BOOL) hasGroup;
- (BOOL) hasFlags;
- (BOOL) hasExpireTimer;
@property (readonly, strong) NSString* body;
@property (readonly, strong) NSArray<OWSSignalServiceProtosAttachmentPointer*> * attachments;
@property (readonly, strong) OWSSignalServiceProtosGroupContext* group;
@property (readonly) UInt32 flags;
@property (readonly) UInt32 expireTimer;
- (OWSSignalServiceProtosAttachmentPointer*)attachmentsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosDataMessageBuilder*) builder;
+ (OWSSignalServiceProtosDataMessageBuilder*) builder;
+ (OWSSignalServiceProtosDataMessageBuilder*) builderWithPrototype:(OWSSignalServiceProtosDataMessage*) prototype;
- (OWSSignalServiceProtosDataMessageBuilder*) toBuilder;

+ (OWSSignalServiceProtosDataMessage*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosDataMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosDataMessage*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosDataMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosDataMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosDataMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosDataMessageBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosDataMessage* resultDataMessage;
}

- (OWSSignalServiceProtosDataMessage*) defaultInstance;

- (OWSSignalServiceProtosDataMessageBuilder*) clear;
- (OWSSignalServiceProtosDataMessageBuilder*) clone;

- (OWSSignalServiceProtosDataMessage*) build;
- (OWSSignalServiceProtosDataMessage*) buildPartial;

- (OWSSignalServiceProtosDataMessageBuilder*) mergeFrom:(OWSSignalServiceProtosDataMessage*) other;
- (OWSSignalServiceProtosDataMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosDataMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasBody;
- (NSString*) body;
- (OWSSignalServiceProtosDataMessageBuilder*) setBody:(NSString*) value;
- (OWSSignalServiceProtosDataMessageBuilder*) clearBody;

- (NSMutableArray<OWSSignalServiceProtosAttachmentPointer*> *)attachments;
- (OWSSignalServiceProtosAttachmentPointer*)attachmentsAtIndex:(NSUInteger)index;
- (OWSSignalServiceProtosDataMessageBuilder *)addAttachments:(OWSSignalServiceProtosAttachmentPointer*)value;
- (OWSSignalServiceProtosDataMessageBuilder *)setAttachmentsArray:(NSArray<OWSSignalServiceProtosAttachmentPointer*> *)array;
- (OWSSignalServiceProtosDataMessageBuilder *)clearAttachments;

- (BOOL) hasGroup;
- (OWSSignalServiceProtosGroupContext*) group;
- (OWSSignalServiceProtosDataMessageBuilder*) setGroup:(OWSSignalServiceProtosGroupContext*) value;
- (OWSSignalServiceProtosDataMessageBuilder*) setGroupBuilder:(OWSSignalServiceProtosGroupContextBuilder*) builderForValue;
- (OWSSignalServiceProtosDataMessageBuilder*) mergeGroup:(OWSSignalServiceProtosGroupContext*) value;
- (OWSSignalServiceProtosDataMessageBuilder*) clearGroup;

- (BOOL) hasFlags;
- (UInt32) flags;
- (OWSSignalServiceProtosDataMessageBuilder*) setFlags:(UInt32) value;
- (OWSSignalServiceProtosDataMessageBuilder*) clearFlags;

- (BOOL) hasExpireTimer;
- (UInt32) expireTimer;
- (OWSSignalServiceProtosDataMessageBuilder*) setExpireTimer:(UInt32) value;
- (OWSSignalServiceProtosDataMessageBuilder*) clearExpireTimer;
@end

#define SyncMessage_sent @"sent"
#define SyncMessage_contacts @"contacts"
#define SyncMessage_groups @"groups"
#define SyncMessage_request @"request"
#define SyncMessage_read @"read"
#define SyncMessage_blocked @"blocked"
#define SyncMessage_verified @"verified"
#define SyncMessage_padding @"padding"
@interface OWSSignalServiceProtosSyncMessage : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasSent_:1;
  BOOL hasContacts_:1;
  BOOL hasGroups_:1;
  BOOL hasRequest_:1;
  BOOL hasBlocked_:1;
  BOOL hasVerified_:1;
  BOOL hasPadding_:1;
  OWSSignalServiceProtosSyncMessageSent* sent;
  OWSSignalServiceProtosSyncMessageContacts* contacts;
  OWSSignalServiceProtosSyncMessageGroups* groups;
  OWSSignalServiceProtosSyncMessageRequest* request;
  OWSSignalServiceProtosSyncMessageBlocked* blocked;
  OWSSignalServiceProtosVerified* verified;
  NSData* padding;
  NSMutableArray * readArray;
}
- (BOOL) hasSent;
- (BOOL) hasContacts;
- (BOOL) hasGroups;
- (BOOL) hasRequest;
- (BOOL) hasBlocked;
- (BOOL) hasVerified;
- (BOOL) hasPadding;
@property (readonly, strong) OWSSignalServiceProtosSyncMessageSent* sent;
@property (readonly, strong) OWSSignalServiceProtosSyncMessageContacts* contacts;
@property (readonly, strong) OWSSignalServiceProtosSyncMessageGroups* groups;
@property (readonly, strong) OWSSignalServiceProtosSyncMessageRequest* request;
@property (readonly, strong) NSArray<OWSSignalServiceProtosSyncMessageRead*> * read;
@property (readonly, strong) OWSSignalServiceProtosSyncMessageBlocked* blocked;
@property (readonly, strong) OWSSignalServiceProtosVerified* verified;
@property (readonly, strong) NSData* padding;
- (OWSSignalServiceProtosSyncMessageRead*)readAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosSyncMessageBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageBuilder*) builderWithPrototype:(OWSSignalServiceProtosSyncMessage*) prototype;
- (OWSSignalServiceProtosSyncMessageBuilder*) toBuilder;

+ (OWSSignalServiceProtosSyncMessage*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosSyncMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessage*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosSyncMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosSyncMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

#define Sent_destination @"destination"
#define Sent_timestamp @"timestamp"
#define Sent_message @"message"
#define Sent_expirationStartTimestamp @"expirationStartTimestamp"
@interface OWSSignalServiceProtosSyncMessageSent : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTimestamp_:1;
  BOOL hasExpirationStartTimestamp_:1;
  BOOL hasDestination_:1;
  BOOL hasMessage_:1;
  UInt64 timestamp;
  UInt64 expirationStartTimestamp;
  NSString* destination;
  OWSSignalServiceProtosDataMessage* message;
}
- (BOOL) hasDestination;
- (BOOL) hasTimestamp;
- (BOOL) hasMessage;
- (BOOL) hasExpirationStartTimestamp;
@property (readonly, strong) NSString* destination;
@property (readonly) UInt64 timestamp;
@property (readonly, strong) OWSSignalServiceProtosDataMessage* message;
@property (readonly) UInt64 expirationStartTimestamp;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageSentBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageSentBuilder*) builderWithPrototype:(OWSSignalServiceProtosSyncMessageSent*) prototype;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) toBuilder;

+ (OWSSignalServiceProtosSyncMessageSent*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosSyncMessageSent*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageSent*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageSent*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageSent*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageSent*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosSyncMessageSentBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosSyncMessageSent* resultSent;
}

- (OWSSignalServiceProtosSyncMessageSent*) defaultInstance;

- (OWSSignalServiceProtosSyncMessageSentBuilder*) clear;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) clone;

- (OWSSignalServiceProtosSyncMessageSent*) build;
- (OWSSignalServiceProtosSyncMessageSent*) buildPartial;

- (OWSSignalServiceProtosSyncMessageSentBuilder*) mergeFrom:(OWSSignalServiceProtosSyncMessageSent*) other;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasDestination;
- (NSString*) destination;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) setDestination:(NSString*) value;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) clearDestination;

- (BOOL) hasTimestamp;
- (UInt64) timestamp;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) setTimestamp:(UInt64) value;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) clearTimestamp;

- (BOOL) hasMessage;
- (OWSSignalServiceProtosDataMessage*) message;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) setMessage:(OWSSignalServiceProtosDataMessage*) value;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) setMessageBuilder:(OWSSignalServiceProtosDataMessageBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) mergeMessage:(OWSSignalServiceProtosDataMessage*) value;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) clearMessage;

- (BOOL) hasExpirationStartTimestamp;
- (UInt64) expirationStartTimestamp;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) setExpirationStartTimestamp:(UInt64) value;
- (OWSSignalServiceProtosSyncMessageSentBuilder*) clearExpirationStartTimestamp;
@end

#define Contacts_blob @"blob"
#define Contacts_isComplete @"isComplete"
@interface OWSSignalServiceProtosSyncMessageContacts : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasIsComplete_:1;
  BOOL hasBlob_:1;
  BOOL isComplete_:1;
  OWSSignalServiceProtosAttachmentPointer* blob;
}
- (BOOL) hasBlob;
- (BOOL) hasIsComplete;
@property (readonly, strong) OWSSignalServiceProtosAttachmentPointer* blob;
- (BOOL) isComplete;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageContactsBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageContactsBuilder*) builderWithPrototype:(OWSSignalServiceProtosSyncMessageContacts*) prototype;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) toBuilder;

+ (OWSSignalServiceProtosSyncMessageContacts*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosSyncMessageContacts*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageContacts*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageContacts*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageContacts*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageContacts*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosSyncMessageContactsBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosSyncMessageContacts* resultContacts;
}

- (OWSSignalServiceProtosSyncMessageContacts*) defaultInstance;

- (OWSSignalServiceProtosSyncMessageContactsBuilder*) clear;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) clone;

- (OWSSignalServiceProtosSyncMessageContacts*) build;
- (OWSSignalServiceProtosSyncMessageContacts*) buildPartial;

- (OWSSignalServiceProtosSyncMessageContactsBuilder*) mergeFrom:(OWSSignalServiceProtosSyncMessageContacts*) other;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasBlob;
- (OWSSignalServiceProtosAttachmentPointer*) blob;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) setBlob:(OWSSignalServiceProtosAttachmentPointer*) value;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) setBlobBuilder:(OWSSignalServiceProtosAttachmentPointerBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) mergeBlob:(OWSSignalServiceProtosAttachmentPointer*) value;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) clearBlob;

- (BOOL) hasIsComplete;
- (BOOL) isComplete;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) setIsComplete:(BOOL) value;
- (OWSSignalServiceProtosSyncMessageContactsBuilder*) clearIsComplete;
@end

#define Groups_blob @"blob"
@interface OWSSignalServiceProtosSyncMessageGroups : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasBlob_:1;
  OWSSignalServiceProtosAttachmentPointer* blob;
}
- (BOOL) hasBlob;
@property (readonly, strong) OWSSignalServiceProtosAttachmentPointer* blob;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageGroupsBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageGroupsBuilder*) builderWithPrototype:(OWSSignalServiceProtosSyncMessageGroups*) prototype;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) toBuilder;

+ (OWSSignalServiceProtosSyncMessageGroups*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosSyncMessageGroups*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageGroups*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageGroups*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageGroups*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageGroups*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosSyncMessageGroupsBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosSyncMessageGroups* resultGroups;
}

- (OWSSignalServiceProtosSyncMessageGroups*) defaultInstance;

- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) clear;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) clone;

- (OWSSignalServiceProtosSyncMessageGroups*) build;
- (OWSSignalServiceProtosSyncMessageGroups*) buildPartial;

- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) mergeFrom:(OWSSignalServiceProtosSyncMessageGroups*) other;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasBlob;
- (OWSSignalServiceProtosAttachmentPointer*) blob;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) setBlob:(OWSSignalServiceProtosAttachmentPointer*) value;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) setBlobBuilder:(OWSSignalServiceProtosAttachmentPointerBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) mergeBlob:(OWSSignalServiceProtosAttachmentPointer*) value;
- (OWSSignalServiceProtosSyncMessageGroupsBuilder*) clearBlob;
@end

#define Blocked_numbers @"numbers"
@interface OWSSignalServiceProtosSyncMessageBlocked : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  NSMutableArray * numbersArray;
}
@property (readonly, strong) NSArray * numbers;
- (NSString*)numbersAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageBlockedBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageBlockedBuilder*) builderWithPrototype:(OWSSignalServiceProtosSyncMessageBlocked*) prototype;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder*) toBuilder;

+ (OWSSignalServiceProtosSyncMessageBlocked*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosSyncMessageBlocked*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageBlocked*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageBlocked*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageBlocked*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageBlocked*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosSyncMessageBlockedBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosSyncMessageBlocked* resultBlocked;
}

- (OWSSignalServiceProtosSyncMessageBlocked*) defaultInstance;

- (OWSSignalServiceProtosSyncMessageBlockedBuilder*) clear;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder*) clone;

- (OWSSignalServiceProtosSyncMessageBlocked*) build;
- (OWSSignalServiceProtosSyncMessageBlocked*) buildPartial;

- (OWSSignalServiceProtosSyncMessageBlockedBuilder*) mergeFrom:(OWSSignalServiceProtosSyncMessageBlocked*) other;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray *)numbers;
- (NSString*)numbersAtIndex:(NSUInteger)index;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder *)addNumbers:(NSString*)value;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder *)setNumbersArray:(NSArray *)array;
- (OWSSignalServiceProtosSyncMessageBlockedBuilder *)clearNumbers;
@end

#define Request_type @"type"
@interface OWSSignalServiceProtosSyncMessageRequest : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasType_:1;
  OWSSignalServiceProtosSyncMessageRequestType type;
}
- (BOOL) hasType;
@property (readonly) OWSSignalServiceProtosSyncMessageRequestType type;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosSyncMessageRequestBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageRequestBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageRequestBuilder*) builderWithPrototype:(OWSSignalServiceProtosSyncMessageRequest*) prototype;
- (OWSSignalServiceProtosSyncMessageRequestBuilder*) toBuilder;

+ (OWSSignalServiceProtosSyncMessageRequest*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosSyncMessageRequest*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageRequest*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageRequest*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageRequest*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosSyncMessageRequestBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosSyncMessageRequest* resultRequest;
}

- (OWSSignalServiceProtosSyncMessageRequest*) defaultInstance;

- (OWSSignalServiceProtosSyncMessageRequestBuilder*) clear;
- (OWSSignalServiceProtosSyncMessageRequestBuilder*) clone;

- (OWSSignalServiceProtosSyncMessageRequest*) build;
- (OWSSignalServiceProtosSyncMessageRequest*) buildPartial;

- (OWSSignalServiceProtosSyncMessageRequestBuilder*) mergeFrom:(OWSSignalServiceProtosSyncMessageRequest*) other;
- (OWSSignalServiceProtosSyncMessageRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosSyncMessageRequestBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasType;
- (OWSSignalServiceProtosSyncMessageRequestType) type;
- (OWSSignalServiceProtosSyncMessageRequestBuilder*) setType:(OWSSignalServiceProtosSyncMessageRequestType) value;
- (OWSSignalServiceProtosSyncMessageRequestBuilder*) clearType;
@end

#define Read_sender @"sender"
#define Read_timestamp @"timestamp"
@interface OWSSignalServiceProtosSyncMessageRead : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTimestamp_:1;
  BOOL hasSender_:1;
  UInt64 timestamp;
  NSString* sender;
}
- (BOOL) hasSender;
- (BOOL) hasTimestamp;
@property (readonly, strong) NSString* sender;
@property (readonly) UInt64 timestamp;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageReadBuilder*) builder;
+ (OWSSignalServiceProtosSyncMessageReadBuilder*) builderWithPrototype:(OWSSignalServiceProtosSyncMessageRead*) prototype;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) toBuilder;

+ (OWSSignalServiceProtosSyncMessageRead*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosSyncMessageRead*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageRead*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageRead*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosSyncMessageRead*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosSyncMessageRead*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosSyncMessageReadBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosSyncMessageRead* resultRead;
}

- (OWSSignalServiceProtosSyncMessageRead*) defaultInstance;

- (OWSSignalServiceProtosSyncMessageReadBuilder*) clear;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) clone;

- (OWSSignalServiceProtosSyncMessageRead*) build;
- (OWSSignalServiceProtosSyncMessageRead*) buildPartial;

- (OWSSignalServiceProtosSyncMessageReadBuilder*) mergeFrom:(OWSSignalServiceProtosSyncMessageRead*) other;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSender;
- (NSString*) sender;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) setSender:(NSString*) value;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) clearSender;

- (BOOL) hasTimestamp;
- (UInt64) timestamp;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) setTimestamp:(UInt64) value;
- (OWSSignalServiceProtosSyncMessageReadBuilder*) clearTimestamp;
@end

@interface OWSSignalServiceProtosSyncMessageBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosSyncMessage* resultSyncMessage;
}

- (OWSSignalServiceProtosSyncMessage*) defaultInstance;

- (OWSSignalServiceProtosSyncMessageBuilder*) clear;
- (OWSSignalServiceProtosSyncMessageBuilder*) clone;

- (OWSSignalServiceProtosSyncMessage*) build;
- (OWSSignalServiceProtosSyncMessage*) buildPartial;

- (OWSSignalServiceProtosSyncMessageBuilder*) mergeFrom:(OWSSignalServiceProtosSyncMessage*) other;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasSent;
- (OWSSignalServiceProtosSyncMessageSent*) sent;
- (OWSSignalServiceProtosSyncMessageBuilder*) setSent:(OWSSignalServiceProtosSyncMessageSent*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) setSentBuilder:(OWSSignalServiceProtosSyncMessageSentBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeSent:(OWSSignalServiceProtosSyncMessageSent*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) clearSent;

- (BOOL) hasContacts;
- (OWSSignalServiceProtosSyncMessageContacts*) contacts;
- (OWSSignalServiceProtosSyncMessageBuilder*) setContacts:(OWSSignalServiceProtosSyncMessageContacts*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) setContactsBuilder:(OWSSignalServiceProtosSyncMessageContactsBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeContacts:(OWSSignalServiceProtosSyncMessageContacts*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) clearContacts;

- (BOOL) hasGroups;
- (OWSSignalServiceProtosSyncMessageGroups*) groups;
- (OWSSignalServiceProtosSyncMessageBuilder*) setGroups:(OWSSignalServiceProtosSyncMessageGroups*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) setGroupsBuilder:(OWSSignalServiceProtosSyncMessageGroupsBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeGroups:(OWSSignalServiceProtosSyncMessageGroups*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) clearGroups;

- (BOOL) hasRequest;
- (OWSSignalServiceProtosSyncMessageRequest*) request;
- (OWSSignalServiceProtosSyncMessageBuilder*) setRequest:(OWSSignalServiceProtosSyncMessageRequest*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) setRequestBuilder:(OWSSignalServiceProtosSyncMessageRequestBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeRequest:(OWSSignalServiceProtosSyncMessageRequest*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) clearRequest;

- (NSMutableArray<OWSSignalServiceProtosSyncMessageRead*> *)read;
- (OWSSignalServiceProtosSyncMessageRead*)readAtIndex:(NSUInteger)index;
- (OWSSignalServiceProtosSyncMessageBuilder *)addRead:(OWSSignalServiceProtosSyncMessageRead*)value;
- (OWSSignalServiceProtosSyncMessageBuilder *)setReadArray:(NSArray<OWSSignalServiceProtosSyncMessageRead*> *)array;
- (OWSSignalServiceProtosSyncMessageBuilder *)clearRead;

- (BOOL) hasBlocked;
- (OWSSignalServiceProtosSyncMessageBlocked*) blocked;
- (OWSSignalServiceProtosSyncMessageBuilder*) setBlocked:(OWSSignalServiceProtosSyncMessageBlocked*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) setBlockedBuilder:(OWSSignalServiceProtosSyncMessageBlockedBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeBlocked:(OWSSignalServiceProtosSyncMessageBlocked*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) clearBlocked;

- (BOOL) hasVerified;
- (OWSSignalServiceProtosVerified*) verified;
- (OWSSignalServiceProtosSyncMessageBuilder*) setVerified:(OWSSignalServiceProtosVerified*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) setVerifiedBuilder:(OWSSignalServiceProtosVerifiedBuilder*) builderForValue;
- (OWSSignalServiceProtosSyncMessageBuilder*) mergeVerified:(OWSSignalServiceProtosVerified*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) clearVerified;

- (BOOL) hasPadding;
- (NSData*) padding;
- (OWSSignalServiceProtosSyncMessageBuilder*) setPadding:(NSData*) value;
- (OWSSignalServiceProtosSyncMessageBuilder*) clearPadding;
@end

#define AttachmentPointer_id @"id"
#define AttachmentPointer_contentType @"contentType"
#define AttachmentPointer_key @"key"
#define AttachmentPointer_size @"size"
#define AttachmentPointer_thumbnail @"thumbnail"
#define AttachmentPointer_digest @"digest"
#define AttachmentPointer_fileName @"fileName"
#define AttachmentPointer_flags @"flags"
@interface OWSSignalServiceProtosAttachmentPointer : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasId_:1;
  BOOL hasContentType_:1;
  BOOL hasFileName_:1;
  BOOL hasKey_:1;
  BOOL hasThumbnail_:1;
  BOOL hasDigest_:1;
  BOOL hasSize_:1;
  BOOL hasFlags_:1;
  UInt64 id;
  NSString* contentType;
  NSString* fileName;
  NSData* key;
  NSData* thumbnail;
  NSData* digest;
  UInt32 size;
  UInt32 flags;
}
- (BOOL) hasId;
- (BOOL) hasContentType;
- (BOOL) hasKey;
- (BOOL) hasSize;
- (BOOL) hasThumbnail;
- (BOOL) hasDigest;
- (BOOL) hasFileName;
- (BOOL) hasFlags;
@property (readonly) UInt64 id;
@property (readonly, strong) NSString* contentType;
@property (readonly, strong) NSData* key;
@property (readonly) UInt32 size;
@property (readonly, strong) NSData* thumbnail;
@property (readonly, strong) NSData* digest;
@property (readonly, strong) NSString* fileName;
@property (readonly) UInt32 flags;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) builder;
+ (OWSSignalServiceProtosAttachmentPointerBuilder*) builder;
+ (OWSSignalServiceProtosAttachmentPointerBuilder*) builderWithPrototype:(OWSSignalServiceProtosAttachmentPointer*) prototype;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) toBuilder;

+ (OWSSignalServiceProtosAttachmentPointer*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosAttachmentPointer*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosAttachmentPointer*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosAttachmentPointer*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosAttachmentPointer*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosAttachmentPointer*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosAttachmentPointerBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosAttachmentPointer* resultAttachmentPointer;
}

- (OWSSignalServiceProtosAttachmentPointer*) defaultInstance;

- (OWSSignalServiceProtosAttachmentPointerBuilder*) clear;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clone;

- (OWSSignalServiceProtosAttachmentPointer*) build;
- (OWSSignalServiceProtosAttachmentPointer*) buildPartial;

- (OWSSignalServiceProtosAttachmentPointerBuilder*) mergeFrom:(OWSSignalServiceProtosAttachmentPointer*) other;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (UInt64) id;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setId:(UInt64) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearId;

- (BOOL) hasContentType;
- (NSString*) contentType;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setContentType:(NSString*) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearContentType;

- (BOOL) hasKey;
- (NSData*) key;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setKey:(NSData*) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearKey;

- (BOOL) hasSize;
- (UInt32) size;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setSize:(UInt32) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearSize;

- (BOOL) hasThumbnail;
- (NSData*) thumbnail;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setThumbnail:(NSData*) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearThumbnail;

- (BOOL) hasDigest;
- (NSData*) digest;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setDigest:(NSData*) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearDigest;

- (BOOL) hasFileName;
- (NSString*) fileName;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setFileName:(NSString*) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearFileName;

- (BOOL) hasFlags;
- (UInt32) flags;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) setFlags:(UInt32) value;
- (OWSSignalServiceProtosAttachmentPointerBuilder*) clearFlags;
@end

#define GroupContext_id @"id"
#define GroupContext_type @"type"
#define GroupContext_name @"name"
#define GroupContext_members @"members"
#define GroupContext_avatar @"avatar"
@interface OWSSignalServiceProtosGroupContext : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasName_:1;
  BOOL hasAvatar_:1;
  BOOL hasId_:1;
  BOOL hasType_:1;
  NSString* name;
  OWSSignalServiceProtosAttachmentPointer* avatar;
  NSData* id;
  OWSSignalServiceProtosGroupContextType type;
  NSMutableArray * membersArray;
}
- (BOOL) hasId;
- (BOOL) hasType;
- (BOOL) hasName;
- (BOOL) hasAvatar;
@property (readonly, strong) NSData* id;
@property (readonly) OWSSignalServiceProtosGroupContextType type;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSArray * members;
@property (readonly, strong) OWSSignalServiceProtosAttachmentPointer* avatar;
- (NSString*)membersAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosGroupContextBuilder*) builder;
+ (OWSSignalServiceProtosGroupContextBuilder*) builder;
+ (OWSSignalServiceProtosGroupContextBuilder*) builderWithPrototype:(OWSSignalServiceProtosGroupContext*) prototype;
- (OWSSignalServiceProtosGroupContextBuilder*) toBuilder;

+ (OWSSignalServiceProtosGroupContext*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosGroupContext*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosGroupContext*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosGroupContext*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosGroupContext*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosGroupContext*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosGroupContextBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosGroupContext* resultGroupContext;
}

- (OWSSignalServiceProtosGroupContext*) defaultInstance;

- (OWSSignalServiceProtosGroupContextBuilder*) clear;
- (OWSSignalServiceProtosGroupContextBuilder*) clone;

- (OWSSignalServiceProtosGroupContext*) build;
- (OWSSignalServiceProtosGroupContext*) buildPartial;

- (OWSSignalServiceProtosGroupContextBuilder*) mergeFrom:(OWSSignalServiceProtosGroupContext*) other;
- (OWSSignalServiceProtosGroupContextBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosGroupContextBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSData*) id;
- (OWSSignalServiceProtosGroupContextBuilder*) setId:(NSData*) value;
- (OWSSignalServiceProtosGroupContextBuilder*) clearId;

- (BOOL) hasType;
- (OWSSignalServiceProtosGroupContextType) type;
- (OWSSignalServiceProtosGroupContextBuilder*) setType:(OWSSignalServiceProtosGroupContextType) value;
- (OWSSignalServiceProtosGroupContextBuilder*) clearType;

- (BOOL) hasName;
- (NSString*) name;
- (OWSSignalServiceProtosGroupContextBuilder*) setName:(NSString*) value;
- (OWSSignalServiceProtosGroupContextBuilder*) clearName;

- (NSMutableArray *)members;
- (NSString*)membersAtIndex:(NSUInteger)index;
- (OWSSignalServiceProtosGroupContextBuilder *)addMembers:(NSString*)value;
- (OWSSignalServiceProtosGroupContextBuilder *)setMembersArray:(NSArray *)array;
- (OWSSignalServiceProtosGroupContextBuilder *)clearMembers;

- (BOOL) hasAvatar;
- (OWSSignalServiceProtosAttachmentPointer*) avatar;
- (OWSSignalServiceProtosGroupContextBuilder*) setAvatar:(OWSSignalServiceProtosAttachmentPointer*) value;
- (OWSSignalServiceProtosGroupContextBuilder*) setAvatarBuilder:(OWSSignalServiceProtosAttachmentPointerBuilder*) builderForValue;
- (OWSSignalServiceProtosGroupContextBuilder*) mergeAvatar:(OWSSignalServiceProtosAttachmentPointer*) value;
- (OWSSignalServiceProtosGroupContextBuilder*) clearAvatar;
@end

#define ContactDetails_number @"number"
#define ContactDetails_name @"name"
#define ContactDetails_avatar @"avatar"
#define ContactDetails_color @"color"
#define ContactDetails_verified @"verified"
@interface OWSSignalServiceProtosContactDetails : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasNumber_:1;
  BOOL hasName_:1;
  BOOL hasColor_:1;
  BOOL hasAvatar_:1;
  BOOL hasVerified_:1;
  NSString* number;
  NSString* name;
  NSString* color;
  OWSSignalServiceProtosContactDetailsAvatar* avatar;
  OWSSignalServiceProtosVerified* verified;
}
- (BOOL) hasNumber;
- (BOOL) hasName;
- (BOOL) hasAvatar;
- (BOOL) hasColor;
- (BOOL) hasVerified;
@property (readonly, strong) NSString* number;
@property (readonly, strong) NSString* name;
@property (readonly, strong) OWSSignalServiceProtosContactDetailsAvatar* avatar;
@property (readonly, strong) NSString* color;
@property (readonly, strong) OWSSignalServiceProtosVerified* verified;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosContactDetailsBuilder*) builder;
+ (OWSSignalServiceProtosContactDetailsBuilder*) builder;
+ (OWSSignalServiceProtosContactDetailsBuilder*) builderWithPrototype:(OWSSignalServiceProtosContactDetails*) prototype;
- (OWSSignalServiceProtosContactDetailsBuilder*) toBuilder;

+ (OWSSignalServiceProtosContactDetails*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosContactDetails*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosContactDetails*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosContactDetails*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosContactDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosContactDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

#define Avatar_contentType @"contentType"
#define Avatar_length @"length"
@interface OWSSignalServiceProtosContactDetailsAvatar : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasContentType_:1;
  BOOL hasLength_:1;
  NSString* contentType;
  UInt32 length;
}
- (BOOL) hasContentType;
- (BOOL) hasLength;
@property (readonly, strong) NSString* contentType;
@property (readonly) UInt32 length;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) builder;
+ (OWSSignalServiceProtosContactDetailsAvatarBuilder*) builder;
+ (OWSSignalServiceProtosContactDetailsAvatarBuilder*) builderWithPrototype:(OWSSignalServiceProtosContactDetailsAvatar*) prototype;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) toBuilder;

+ (OWSSignalServiceProtosContactDetailsAvatar*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosContactDetailsAvatar*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosContactDetailsAvatar*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosContactDetailsAvatar*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosContactDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosContactDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosContactDetailsAvatarBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosContactDetailsAvatar* resultAvatar;
}

- (OWSSignalServiceProtosContactDetailsAvatar*) defaultInstance;

- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) clear;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) clone;

- (OWSSignalServiceProtosContactDetailsAvatar*) build;
- (OWSSignalServiceProtosContactDetailsAvatar*) buildPartial;

- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) mergeFrom:(OWSSignalServiceProtosContactDetailsAvatar*) other;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasContentType;
- (NSString*) contentType;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) setContentType:(NSString*) value;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) clearContentType;

- (BOOL) hasLength;
- (UInt32) length;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) setLength:(UInt32) value;
- (OWSSignalServiceProtosContactDetailsAvatarBuilder*) clearLength;
@end

@interface OWSSignalServiceProtosContactDetailsBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosContactDetails* resultContactDetails;
}

- (OWSSignalServiceProtosContactDetails*) defaultInstance;

- (OWSSignalServiceProtosContactDetailsBuilder*) clear;
- (OWSSignalServiceProtosContactDetailsBuilder*) clone;

- (OWSSignalServiceProtosContactDetails*) build;
- (OWSSignalServiceProtosContactDetails*) buildPartial;

- (OWSSignalServiceProtosContactDetailsBuilder*) mergeFrom:(OWSSignalServiceProtosContactDetails*) other;
- (OWSSignalServiceProtosContactDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosContactDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasNumber;
- (NSString*) number;
- (OWSSignalServiceProtosContactDetailsBuilder*) setNumber:(NSString*) value;
- (OWSSignalServiceProtosContactDetailsBuilder*) clearNumber;

- (BOOL) hasName;
- (NSString*) name;
- (OWSSignalServiceProtosContactDetailsBuilder*) setName:(NSString*) value;
- (OWSSignalServiceProtosContactDetailsBuilder*) clearName;

- (BOOL) hasAvatar;
- (OWSSignalServiceProtosContactDetailsAvatar*) avatar;
- (OWSSignalServiceProtosContactDetailsBuilder*) setAvatar:(OWSSignalServiceProtosContactDetailsAvatar*) value;
- (OWSSignalServiceProtosContactDetailsBuilder*) setAvatarBuilder:(OWSSignalServiceProtosContactDetailsAvatarBuilder*) builderForValue;
- (OWSSignalServiceProtosContactDetailsBuilder*) mergeAvatar:(OWSSignalServiceProtosContactDetailsAvatar*) value;
- (OWSSignalServiceProtosContactDetailsBuilder*) clearAvatar;

- (BOOL) hasColor;
- (NSString*) color;
- (OWSSignalServiceProtosContactDetailsBuilder*) setColor:(NSString*) value;
- (OWSSignalServiceProtosContactDetailsBuilder*) clearColor;

- (BOOL) hasVerified;
- (OWSSignalServiceProtosVerified*) verified;
- (OWSSignalServiceProtosContactDetailsBuilder*) setVerified:(OWSSignalServiceProtosVerified*) value;
- (OWSSignalServiceProtosContactDetailsBuilder*) setVerifiedBuilder:(OWSSignalServiceProtosVerifiedBuilder*) builderForValue;
- (OWSSignalServiceProtosContactDetailsBuilder*) mergeVerified:(OWSSignalServiceProtosVerified*) value;
- (OWSSignalServiceProtosContactDetailsBuilder*) clearVerified;
@end

#define GroupDetails_id @"id"
#define GroupDetails_name @"name"
#define GroupDetails_members @"members"
#define GroupDetails_avatar @"avatar"
#define GroupDetails_active @"active"
@interface OWSSignalServiceProtosGroupDetails : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasActive_:1;
  BOOL hasName_:1;
  BOOL hasAvatar_:1;
  BOOL hasId_:1;
  BOOL active_:1;
  NSString* name;
  OWSSignalServiceProtosGroupDetailsAvatar* avatar;
  NSData* id;
  NSMutableArray * membersArray;
}
- (BOOL) hasId;
- (BOOL) hasName;
- (BOOL) hasAvatar;
- (BOOL) hasActive;
@property (readonly, strong) NSData* id;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSArray * members;
@property (readonly, strong) OWSSignalServiceProtosGroupDetailsAvatar* avatar;
- (BOOL) active;
- (NSString*)membersAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosGroupDetailsBuilder*) builder;
+ (OWSSignalServiceProtosGroupDetailsBuilder*) builder;
+ (OWSSignalServiceProtosGroupDetailsBuilder*) builderWithPrototype:(OWSSignalServiceProtosGroupDetails*) prototype;
- (OWSSignalServiceProtosGroupDetailsBuilder*) toBuilder;

+ (OWSSignalServiceProtosGroupDetails*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosGroupDetails*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosGroupDetails*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosGroupDetails*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosGroupDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosGroupDetails*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

#define Avatar_contentType @"contentType"
#define Avatar_length @"length"
@interface OWSSignalServiceProtosGroupDetailsAvatar : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasContentType_:1;
  BOOL hasLength_:1;
  NSString* contentType;
  UInt32 length;
}
- (BOOL) hasContentType;
- (BOOL) hasLength;
@property (readonly, strong) NSString* contentType;
@property (readonly) UInt32 length;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) builder;
+ (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) builder;
+ (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) builderWithPrototype:(OWSSignalServiceProtosGroupDetailsAvatar*) prototype;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) toBuilder;

+ (OWSSignalServiceProtosGroupDetailsAvatar*) parseFromData:(NSData*) data;
+ (OWSSignalServiceProtosGroupDetailsAvatar*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosGroupDetailsAvatar*) parseFromInputStream:(NSInputStream*) input;
+ (OWSSignalServiceProtosGroupDetailsAvatar*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (OWSSignalServiceProtosGroupDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (OWSSignalServiceProtosGroupDetailsAvatar*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface OWSSignalServiceProtosGroupDetailsAvatarBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosGroupDetailsAvatar* resultAvatar;
}

- (OWSSignalServiceProtosGroupDetailsAvatar*) defaultInstance;

- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) clear;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) clone;

- (OWSSignalServiceProtosGroupDetailsAvatar*) build;
- (OWSSignalServiceProtosGroupDetailsAvatar*) buildPartial;

- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) mergeFrom:(OWSSignalServiceProtosGroupDetailsAvatar*) other;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasContentType;
- (NSString*) contentType;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) setContentType:(NSString*) value;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) clearContentType;

- (BOOL) hasLength;
- (UInt32) length;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) setLength:(UInt32) value;
- (OWSSignalServiceProtosGroupDetailsAvatarBuilder*) clearLength;
@end

@interface OWSSignalServiceProtosGroupDetailsBuilder : PBGeneratedMessageBuilder {
@private
  OWSSignalServiceProtosGroupDetails* resultGroupDetails;
}

- (OWSSignalServiceProtosGroupDetails*) defaultInstance;

- (OWSSignalServiceProtosGroupDetailsBuilder*) clear;
- (OWSSignalServiceProtosGroupDetailsBuilder*) clone;

- (OWSSignalServiceProtosGroupDetails*) build;
- (OWSSignalServiceProtosGroupDetails*) buildPartial;

- (OWSSignalServiceProtosGroupDetailsBuilder*) mergeFrom:(OWSSignalServiceProtosGroupDetails*) other;
- (OWSSignalServiceProtosGroupDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (OWSSignalServiceProtosGroupDetailsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (NSData*) id;
- (OWSSignalServiceProtosGroupDetailsBuilder*) setId:(NSData*) value;
- (OWSSignalServiceProtosGroupDetailsBuilder*) clearId;

- (BOOL) hasName;
- (NSString*) name;
- (OWSSignalServiceProtosGroupDetailsBuilder*) setName:(NSString*) value;
- (OWSSignalServiceProtosGroupDetailsBuilder*) clearName;

- (NSMutableArray *)members;
- (NSString*)membersAtIndex:(NSUInteger)index;
- (OWSSignalServiceProtosGroupDetailsBuilder *)addMembers:(NSString*)value;
- (OWSSignalServiceProtosGroupDetailsBuilder *)setMembersArray:(NSArray *)array;
- (OWSSignalServiceProtosGroupDetailsBuilder *)clearMembers;

- (BOOL) hasAvatar;
- (OWSSignalServiceProtosGroupDetailsAvatar*) avatar;
- (OWSSignalServiceProtosGroupDetailsBuilder*) setAvatar:(OWSSignalServiceProtosGroupDetailsAvatar*) value;
- (OWSSignalServiceProtosGroupDetailsBuilder*) setAvatarBuilder:(OWSSignalServiceProtosGroupDetailsAvatarBuilder*) builderForValue;
- (OWSSignalServiceProtosGroupDetailsBuilder*) mergeAvatar:(OWSSignalServiceProtosGroupDetailsAvatar*) value;
- (OWSSignalServiceProtosGroupDetailsBuilder*) clearAvatar;

- (BOOL) hasActive;
- (BOOL) active;
- (OWSSignalServiceProtosGroupDetailsBuilder*) setActive:(BOOL) value;
- (OWSSignalServiceProtosGroupDetailsBuilder*) clearActive;
@end


// @@protoc_insertion_point(global_scope)
