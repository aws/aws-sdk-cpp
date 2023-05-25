/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/VoiceMessageBodyTextType.h>
#include <aws/pinpoint-sms-voice-v2/model/VoiceId.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class SendVoiceMessageRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SendVoiceMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendVoiceMessage"; }

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
    inline SendVoiceMessageRequest& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendVoiceMessageRequest& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline SendVoiceMessageRequest& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }

    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }

    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }

    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }

    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }

    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline SendVoiceMessageRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}

    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline SendVoiceMessageRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}

    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p>
     */
    inline SendVoiceMessageRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}


    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }

    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }

    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline SendVoiceMessageRequest& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline SendVoiceMessageRequest& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}

    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline SendVoiceMessageRequest& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}


    /**
     * <p>Specifies if the MessageBody field contains text or <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">speech synthesis
     * markup language (SSML)</a>.</p> <ul> <li> <p>TEXT: This is the default value.
     * When used the maximum character limit is 3000.</p> </li> <li> <p>SSML: When used
     * the maximum character limit is 6000 including SSML tagging.</p> </li> </ul>
     */
    inline const VoiceMessageBodyTextType& GetMessageBodyTextType() const{ return m_messageBodyTextType; }

    /**
     * <p>Specifies if the MessageBody field contains text or <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">speech synthesis
     * markup language (SSML)</a>.</p> <ul> <li> <p>TEXT: This is the default value.
     * When used the maximum character limit is 3000.</p> </li> <li> <p>SSML: When used
     * the maximum character limit is 6000 including SSML tagging.</p> </li> </ul>
     */
    inline bool MessageBodyTextTypeHasBeenSet() const { return m_messageBodyTextTypeHasBeenSet; }

    /**
     * <p>Specifies if the MessageBody field contains text or <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">speech synthesis
     * markup language (SSML)</a>.</p> <ul> <li> <p>TEXT: This is the default value.
     * When used the maximum character limit is 3000.</p> </li> <li> <p>SSML: When used
     * the maximum character limit is 6000 including SSML tagging.</p> </li> </ul>
     */
    inline void SetMessageBodyTextType(const VoiceMessageBodyTextType& value) { m_messageBodyTextTypeHasBeenSet = true; m_messageBodyTextType = value; }

    /**
     * <p>Specifies if the MessageBody field contains text or <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">speech synthesis
     * markup language (SSML)</a>.</p> <ul> <li> <p>TEXT: This is the default value.
     * When used the maximum character limit is 3000.</p> </li> <li> <p>SSML: When used
     * the maximum character limit is 6000 including SSML tagging.</p> </li> </ul>
     */
    inline void SetMessageBodyTextType(VoiceMessageBodyTextType&& value) { m_messageBodyTextTypeHasBeenSet = true; m_messageBodyTextType = std::move(value); }

    /**
     * <p>Specifies if the MessageBody field contains text or <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">speech synthesis
     * markup language (SSML)</a>.</p> <ul> <li> <p>TEXT: This is the default value.
     * When used the maximum character limit is 3000.</p> </li> <li> <p>SSML: When used
     * the maximum character limit is 6000 including SSML tagging.</p> </li> </ul>
     */
    inline SendVoiceMessageRequest& WithMessageBodyTextType(const VoiceMessageBodyTextType& value) { SetMessageBodyTextType(value); return *this;}

    /**
     * <p>Specifies if the MessageBody field contains text or <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">speech synthesis
     * markup language (SSML)</a>.</p> <ul> <li> <p>TEXT: This is the default value.
     * When used the maximum character limit is 3000.</p> </li> <li> <p>SSML: When used
     * the maximum character limit is 6000 including SSML tagging.</p> </li> </ul>
     */
    inline SendVoiceMessageRequest& WithMessageBodyTextType(VoiceMessageBodyTextType&& value) { SetMessageBodyTextType(std::move(value)); return *this;}


    /**
     * <p>The voice for the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly</a>
     * service to use. By default this is set to "MATTHEW".</p>
     */
    inline const VoiceId& GetVoiceId() const{ return m_voiceId; }

    /**
     * <p>The voice for the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly</a>
     * service to use. By default this is set to "MATTHEW".</p>
     */
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }

    /**
     * <p>The voice for the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly</a>
     * service to use. By default this is set to "MATTHEW".</p>
     */
    inline void SetVoiceId(const VoiceId& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }

    /**
     * <p>The voice for the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly</a>
     * service to use. By default this is set to "MATTHEW".</p>
     */
    inline void SetVoiceId(VoiceId&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }

    /**
     * <p>The voice for the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly</a>
     * service to use. By default this is set to "MATTHEW".</p>
     */
    inline SendVoiceMessageRequest& WithVoiceId(const VoiceId& value) { SetVoiceId(value); return *this;}

    /**
     * <p>The voice for the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly</a>
     * service to use. By default this is set to "MATTHEW".</p>
     */
    inline SendVoiceMessageRequest& WithVoiceId(VoiceId&& value) { SetVoiceId(std::move(value)); return *this;}


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
    inline SendVoiceMessageRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendVoiceMessageRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline SendVoiceMessageRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline const Aws::String& GetMaxPricePerMinute() const{ return m_maxPricePerMinute; }

    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline bool MaxPricePerMinuteHasBeenSet() const { return m_maxPricePerMinuteHasBeenSet; }

    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline void SetMaxPricePerMinute(const Aws::String& value) { m_maxPricePerMinuteHasBeenSet = true; m_maxPricePerMinute = value; }

    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline void SetMaxPricePerMinute(Aws::String&& value) { m_maxPricePerMinuteHasBeenSet = true; m_maxPricePerMinute = std::move(value); }

    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline void SetMaxPricePerMinute(const char* value) { m_maxPricePerMinuteHasBeenSet = true; m_maxPricePerMinute.assign(value); }

    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline SendVoiceMessageRequest& WithMaxPricePerMinute(const Aws::String& value) { SetMaxPricePerMinute(value); return *this;}

    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline SendVoiceMessageRequest& WithMaxPricePerMinute(Aws::String&& value) { SetMaxPricePerMinute(std::move(value)); return *this;}

    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline SendVoiceMessageRequest& WithMaxPricePerMinute(const char* value) { SetMaxPricePerMinute(value); return *this;}


    /**
     * <p>How long the voice message is valid for. By default this is 72 hours.</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>How long the voice message is valid for. By default this is 72 hours.</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>How long the voice message is valid for. By default this is 72 hours.</p>
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>How long the voice message is valid for. By default this is 72 hours.</p>
     */
    inline SendVoiceMessageRequest& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


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
    inline SendVoiceMessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }

    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline SendVoiceMessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }


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
    inline SendVoiceMessageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    VoiceMessageBodyTextType m_messageBodyTextType;
    bool m_messageBodyTextTypeHasBeenSet = false;

    VoiceId m_voiceId;
    bool m_voiceIdHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_maxPricePerMinute;
    bool m_maxPricePerMinuteHasBeenSet = false;

    int m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
