/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint-sms-voice-v2/model/DestinationCountryParameterKey.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class SendTextMessageRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SendTextMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendTextMessage"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendTextMessageRequest& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendTextMessageRequest& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendTextMessageRequest& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline SendTextMessageRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline SendTextMessageRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}

    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     */
    inline SendTextMessageRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}


    /**
     * <p>The body of the text message.</p>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    /**
     * <p>The body of the text message.</p>
     */
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }

    /**
     * <p>The body of the text message.</p>
     */
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>The body of the text message.</p>
     */
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }

    /**
     * <p>The body of the text message.</p>
     */
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    /**
     * <p>The body of the text message.</p>
     */
    inline SendTextMessageRequest& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    /**
     * <p>The body of the text message.</p>
     */
    inline SendTextMessageRequest& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}

    /**
     * <p>The body of the text message.</p>
     */
    inline SendTextMessageRequest& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}


    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline SendTextMessageRequest& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline SendTextMessageRequest& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline SendTextMessageRequest& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline SendTextMessageRequest& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don���t have a US short code, omit this attribute.</p>
     */
    inline SendTextMessageRequest& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendTextMessageRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendTextMessageRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendTextMessageRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline SendTextMessageRequest& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline SendTextMessageRequest& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message part. A text message can contain multiple parts.</p>
     */
    inline SendTextMessageRequest& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}


    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>How long the text message is valid for. By default this is 72 hours.</p>
     */
    inline SendTextMessageRequest& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendTextMessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline const Aws::Map<DestinationCountryParameterKey, Aws::String>& GetDestinationCountryParameters() const{ return m_destinationCountryParameters; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline bool DestinationCountryParametersHasBeenSet() const { return m_destinationCountryParametersHasBeenSet; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline void SetDestinationCountryParameters(const Aws::Map<DestinationCountryParameterKey, Aws::String>& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters = value; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline void SetDestinationCountryParameters(Aws::Map<DestinationCountryParameterKey, Aws::String>&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters = std::move(value); }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& WithDestinationCountryParameters(const Aws::Map<DestinationCountryParameterKey, Aws::String>& value) { SetDestinationCountryParameters(value); return *this;}

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& WithDestinationCountryParameters(Aws::Map<DestinationCountryParameterKey, Aws::String>&& value) { SetDestinationCountryParameters(std::move(value)); return *this;}

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, const Aws::String& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, value); return *this; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, const Aws::String& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, Aws::String&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, Aws::String&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, const char* value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p>
     */
    inline SendTextMessageRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, const char* value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, value); return *this; }


    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline SendTextMessageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    int m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::Map<DestinationCountryParameterKey, Aws::String> m_destinationCountryParameters;
    bool m_destinationCountryParametersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
