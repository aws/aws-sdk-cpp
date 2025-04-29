/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class SendMediaMessageRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SendMediaMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMediaMessage"; }

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
    SendMediaMessageRequest& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origination identity of the message. This can be either the PhoneNumber,
     * PhoneNumberId, PhoneNumberArn, SenderId, SenderIdArn, PoolId, or PoolArn.</p>
     *  <p>If you are using a shared AWS End User Messaging SMS and Voice
     * resource then you must use the full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    SendMediaMessageRequest& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text body of the message.</p>
     */
    inline const Aws::String& GetMessageBody() const { return m_messageBody; }
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }
    template<typename MessageBodyT = Aws::String>
    void SetMessageBody(MessageBodyT&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::forward<MessageBodyT>(value); }
    template<typename MessageBodyT = Aws::String>
    SendMediaMessageRequest& WithMessageBody(MessageBodyT&& value) { SetMessageBody(std::forward<MessageBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of URLs to each media file to send. </p> <p>The media files have to
     * be stored in an S3 bucket. Supported media file formats are listed in <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/mms-limitations-character.html">MMS
     * file types, size and character limits</a>. For more information on creating an
     * S3 bucket and managing objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-bucket-overview.html">Creating
     * a bucket</a>, <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/upload-objects.html">Uploading
     * objects</a> in the <i>Amazon S3 User Guide</i>, and <a
     * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/send-mms-message.html#send-mms-message-bucket">Setting
     * up an Amazon S3 bucket for MMS files</a> in the <i>Amazon Web Services End User
     * Messaging SMS User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMediaUrls() const { return m_mediaUrls; }
    inline bool MediaUrlsHasBeenSet() const { return m_mediaUrlsHasBeenSet; }
    template<typename MediaUrlsT = Aws::Vector<Aws::String>>
    void SetMediaUrls(MediaUrlsT&& value) { m_mediaUrlsHasBeenSet = true; m_mediaUrls = std::forward<MediaUrlsT>(value); }
    template<typename MediaUrlsT = Aws::Vector<Aws::String>>
    SendMediaMessageRequest& WithMediaUrls(MediaUrlsT&& value) { SetMediaUrls(std::forward<MediaUrlsT>(value)); return *this;}
    template<typename MediaUrlsT = Aws::String>
    SendMediaMessageRequest& AddMediaUrls(MediaUrlsT&& value) { m_mediaUrlsHasBeenSet = true; m_mediaUrls.emplace_back(std::forward<MediaUrlsT>(value)); return *this; }
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
    SendMediaMessageRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount that you want to spend, in US dollars, per each MMS
     * message.</p>
     */
    inline const Aws::String& GetMaxPrice() const { return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    template<typename MaxPriceT = Aws::String>
    void SetMaxPrice(MaxPriceT&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::forward<MaxPriceT>(value); }
    template<typename MaxPriceT = Aws::String>
    SendMediaMessageRequest& WithMaxPrice(MaxPriceT&& value) { SetMaxPrice(std::forward<MaxPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long the media message is valid for. By default this is 72 hours.</p>
     */
    inline int GetTimeToLive() const { return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }
    inline SendMediaMessageRequest& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}
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
    SendMediaMessageRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    SendMediaMessageRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
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
    inline SendMediaMessageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the protect configuration to use.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    template<typename ProtectConfigurationIdT = Aws::String>
    void SetProtectConfigurationId(ProtectConfigurationIdT&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value); }
    template<typename ProtectConfigurationIdT = Aws::String>
    SendMediaMessageRequest& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
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
    inline SendMediaMessageRequest& WithMessageFeedbackEnabled(bool value) { SetMessageFeedbackEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    Aws::Vector<Aws::String> m_mediaUrls;
    bool m_mediaUrlsHasBeenSet = false;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

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
