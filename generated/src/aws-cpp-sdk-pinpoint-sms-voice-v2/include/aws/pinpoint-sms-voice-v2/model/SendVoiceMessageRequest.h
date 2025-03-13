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
    AWS_PINPOINTSMSVOICEV2_API SendVoiceMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendVoiceMessage"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The destination phone number in E.164 format.</p>
     */
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    SendVoiceMessageRequest& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origination identity to use for the voice call. This can be the
     * PhoneNumber, PhoneNumberId, PhoneNumberArn, PoolId, or PoolArn.</p> 
     * <p>If you are using a shared AWS End User Messaging SMS and Voice resource then
     * you must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    SendVoiceMessageRequest& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text to convert to a voice message.</p>
     */
    inline const Aws::String& GetMessageBody() const { return m_messageBody; }
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }
    template<typename MessageBodyT = Aws::String>
    void SetMessageBody(MessageBodyT&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::forward<MessageBodyT>(value); }
    template<typename MessageBodyT = Aws::String>
    SendVoiceMessageRequest& WithMessageBody(MessageBodyT&& value) { SetMessageBody(std::forward<MessageBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the MessageBody field contains text or <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">speech synthesis
     * markup language (SSML)</a>.</p> <ul> <li> <p>TEXT: This is the default value.
     * When used the maximum character limit is 3000.</p> </li> <li> <p>SSML: When used
     * the maximum character limit is 6000 including SSML tagging.</p> </li> </ul>
     */
    inline VoiceMessageBodyTextType GetMessageBodyTextType() const { return m_messageBodyTextType; }
    inline bool MessageBodyTextTypeHasBeenSet() const { return m_messageBodyTextTypeHasBeenSet; }
    inline void SetMessageBodyTextType(VoiceMessageBodyTextType value) { m_messageBodyTextTypeHasBeenSet = true; m_messageBodyTextType = value; }
    inline SendVoiceMessageRequest& WithMessageBodyTextType(VoiceMessageBodyTextType value) { SetMessageBodyTextType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The voice for the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/what-is.html">Amazon Polly</a>
     * service to use. By default this is set to "MATTHEW".</p>
     */
    inline VoiceId GetVoiceId() const { return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    inline void SetVoiceId(VoiceId value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }
    inline SendVoiceMessageRequest& WithVoiceId(VoiceId value) { SetVoiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration set to use. This can be either the
     * ConfigurationSetName or ConfigurationSetArn.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    SendVoiceMessageRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount to spend per voice message, in US dollars.</p>
     */
    inline const Aws::String& GetMaxPricePerMinute() const { return m_maxPricePerMinute; }
    inline bool MaxPricePerMinuteHasBeenSet() const { return m_maxPricePerMinuteHasBeenSet; }
    template<typename MaxPricePerMinuteT = Aws::String>
    void SetMaxPricePerMinute(MaxPricePerMinuteT&& value) { m_maxPricePerMinuteHasBeenSet = true; m_maxPricePerMinute = std::forward<MaxPricePerMinuteT>(value); }
    template<typename MaxPricePerMinuteT = Aws::String>
    SendVoiceMessageRequest& WithMaxPricePerMinute(MaxPricePerMinuteT&& value) { SetMaxPricePerMinute(std::forward<MaxPricePerMinuteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long the voice message is valid for. By default this is 72 hours.</p>
     */
    inline int GetTimeToLive() const { return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }
    inline SendVoiceMessageRequest& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify custom data in this field. If you do, that data is logged to
     * the event destination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    SendVoiceMessageRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    SendVoiceMessageRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
      m_contextHasBeenSet = true; m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>When set to true, the message is checked and validated, but isn't sent to the
     * end recipient.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline SendVoiceMessageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    template<typename ProtectConfigurationIdT = Aws::String>
    void SetProtectConfigurationId(ProtectConfigurationIdT&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value); }
    template<typename ProtectConfigurationIdT = Aws::String>
    SendVoiceMessageRequest& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to true to enable message feedback for the message. When a user receives
     * the message you need to update the message status using
     * <a>PutMessageFeedback</a>.</p>
     */
    inline bool GetMessageFeedbackEnabled() const { return m_messageFeedbackEnabled; }
    inline bool MessageFeedbackEnabledHasBeenSet() const { return m_messageFeedbackEnabledHasBeenSet; }
    inline void SetMessageFeedbackEnabled(bool value) { m_messageFeedbackEnabledHasBeenSet = true; m_messageFeedbackEnabled = value; }
    inline SendVoiceMessageRequest& WithMessageFeedbackEnabled(bool value) { SetMessageFeedbackEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    VoiceMessageBodyTextType m_messageBodyTextType{VoiceMessageBodyTextType::NOT_SET};
    bool m_messageBodyTextTypeHasBeenSet = false;

    VoiceId m_voiceId{VoiceId::NOT_SET};
    bool m_voiceIdHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_maxPricePerMinute;
    bool m_maxPricePerMinuteHasBeenSet = false;

    int m_timeToLive{0};
    bool m_timeToLiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    bool m_messageFeedbackEnabled{false};
    bool m_messageFeedbackEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
