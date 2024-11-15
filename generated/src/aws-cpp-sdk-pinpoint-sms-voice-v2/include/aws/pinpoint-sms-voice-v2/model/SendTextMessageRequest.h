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


    ///@{
    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }
    inline SendTextMessageRequest& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}
    inline SendTextMessageRequest& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}
    inline SendTextMessageRequest& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     *  <p>If you are using a shared AWS End User Messaging SMS and Voice
     * resource then you must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }
    inline SendTextMessageRequest& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}
    inline SendTextMessageRequest& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}
    inline SendTextMessageRequest& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the text message.</p>
     */
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }
    inline SendTextMessageRequest& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}
    inline SendTextMessageRequest& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}
    inline SendTextMessageRequest& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are for messages that are critical or
     * time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }
    inline SendTextMessageRequest& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}
    inline SendTextMessageRequest& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you register a short code in the US, you must specify a program name. If
     * you don’t have a US short code, omit this attribute.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }
    inline SendTextMessageRequest& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}
    inline SendTextMessageRequest& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}
    inline SendTextMessageRequest& WithKeyword(const char* value) { SetKeyword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline SendTextMessageRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline SendTextMessageRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline SendTextMessageRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each text
     * message. If the calculated amount to send the text message is greater than
     * <code>MaxPrice</code>, the message is not sent and an error is returned.</p>
     */
    inline const Aws::String& GetMaxPrice() const{ return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    inline void SetMaxPrice(const Aws::String& value) { m_maxPriceHasBeenSet = true; m_maxPrice = value; }
    inline void SetMaxPrice(Aws::String&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::move(value); }
    inline void SetMaxPrice(const char* value) { m_maxPriceHasBeenSet = true; m_maxPrice.assign(value); }
    inline SendTextMessageRequest& WithMaxPrice(const Aws::String& value) { SetMaxPrice(value); return *this;}
    inline SendTextMessageRequest& WithMaxPrice(Aws::String&& value) { SetMaxPrice(std::move(value)); return *this;}
    inline SendTextMessageRequest& WithMaxPrice(const char* value) { SetMaxPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long the text message is valid for, in seconds. By default this is 72
     * hours. If the messages isn't handed off before the TTL expires we stop
     * attempting to hand off the message and return <code>TTL_EXPIRED</code>
     * event.</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }
    inline SendTextMessageRequest& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline SendTextMessageRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}
    inline SendTextMessageRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}
    inline SendTextMessageRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    inline SendTextMessageRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline SendTextMessageRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline SendTextMessageRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }
    inline SendTextMessageRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline SendTextMessageRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline SendTextMessageRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This field is used for any country-specific registration requirements.
     * Currently, this setting is only used when you send messages to recipients in
     * India using a sender ID. For more information see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-senderid-india.html">Special
     * requirements for sending SMS messages to recipients in India</a>. </p> <ul> <li>
     * <p> <code>IN_ENTITY_ID</code> The entity ID or Principal Entity (PE) ID that you
     * received after completing the sender ID registration process.</p> </li> <li> <p>
     * <code>IN_TEMPLATE_ID</code> The template ID that you received after completing
     * the sender ID registration process.</p>  <p>Make sure that the
     * Template ID that you specify matches your message template exactly. If your
     * message doesn't match the template that you provided during the registration
     * process, the mobile carriers might reject your message.</p>  </li>
     * </ul>
     */
    inline const Aws::Map<DestinationCountryParameterKey, Aws::String>& GetDestinationCountryParameters() const{ return m_destinationCountryParameters; }
    inline bool DestinationCountryParametersHasBeenSet() const { return m_destinationCountryParametersHasBeenSet; }
    inline void SetDestinationCountryParameters(const Aws::Map<DestinationCountryParameterKey, Aws::String>& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters = value; }
    inline void SetDestinationCountryParameters(Aws::Map<DestinationCountryParameterKey, Aws::String>&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters = std::move(value); }
    inline SendTextMessageRequest& WithDestinationCountryParameters(const Aws::Map<DestinationCountryParameterKey, Aws::String>& value) { SetDestinationCountryParameters(value); return *this;}
    inline SendTextMessageRequest& WithDestinationCountryParameters(Aws::Map<DestinationCountryParameterKey, Aws::String>&& value) { SetDestinationCountryParameters(std::move(value)); return *this;}
    inline SendTextMessageRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, const Aws::String& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, value); return *this; }
    inline SendTextMessageRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, const Aws::String& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), value); return *this; }
    inline SendTextMessageRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, Aws::String&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, std::move(value)); return *this; }
    inline SendTextMessageRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, Aws::String&& value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SendTextMessageRequest& AddDestinationCountryParameters(DestinationCountryParameterKey&& key, const char* value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(std::move(key), value); return *this; }
    inline SendTextMessageRequest& AddDestinationCountryParameters(const DestinationCountryParameterKey& key, const char* value) { m_destinationCountryParametersHasBeenSet = true; m_destinationCountryParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient. You are not charged for using <code>DryRun</code>.</p> <p>The
     * Message Parts per Second (MPS) limit when using <code>DryRun</code> is five. If
     * your origination identity has a lower MPS limit then the lower MPS limit is
     * used. For more information about MPS limits, see <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/sms-limitations-mps.html">Message
     * Parts per Second (MPS) limits</a> in the <i>AWS End User Messaging SMS User
     * Guide</i>..</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline SendTextMessageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId.assign(value); }
    inline SendTextMessageRequest& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline SendTextMessageRequest& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline SendTextMessageRequest& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true to enable message feedback for the message. When a user receives
     * the message you need to update the message status using
     * <a>PutMessageFeedback</a>.</p>
     */
    inline bool GetMessageFeedbackEnabled() const{ return m_messageFeedbackEnabled; }
    inline bool MessageFeedbackEnabledHasBeenSet() const { return m_messageFeedbackEnabledHasBeenSet; }
    inline void SetMessageFeedbackEnabled(bool value) { m_messageFeedbackEnabledHasBeenSet = true; m_messageFeedbackEnabled = value; }
    inline SendTextMessageRequest& WithMessageFeedbackEnabled(bool value) { SetMessageFeedbackEnabled(value); return *this;}
    ///@}
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

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    bool m_messageFeedbackEnabled;
    bool m_messageFeedbackEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
