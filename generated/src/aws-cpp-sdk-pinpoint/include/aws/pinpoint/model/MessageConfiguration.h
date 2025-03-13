/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Message.h>
#include <aws/pinpoint/model/CampaignCustomMessage.h>
#include <aws/pinpoint/model/CampaignEmailMessage.h>
#include <aws/pinpoint/model/CampaignSmsMessage.h>
#include <aws/pinpoint/model/CampaignInAppMessage.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the message configuration settings for a campaign.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageConfiguration">AWS
   * API Reference</a></p>
   */
  class MessageConfiguration
  {
  public:
    AWS_PINPOINT_API MessageConfiguration() = default;
    AWS_PINPOINT_API MessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message that the campaign sends through the ADM (Amazon Device Messaging)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline const Message& GetADMMessage() const { return m_aDMMessage; }
    inline bool ADMMessageHasBeenSet() const { return m_aDMMessageHasBeenSet; }
    template<typename ADMMessageT = Message>
    void SetADMMessage(ADMMessageT&& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = std::forward<ADMMessageT>(value); }
    template<typename ADMMessageT = Message>
    MessageConfiguration& WithADMMessage(ADMMessageT&& value) { SetADMMessage(std::forward<ADMMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the campaign sends through the APNs (Apple Push Notification
     * service) channel. If specified, this message overrides the default message.</p>
     */
    inline const Message& GetAPNSMessage() const { return m_aPNSMessage; }
    inline bool APNSMessageHasBeenSet() const { return m_aPNSMessageHasBeenSet; }
    template<typename APNSMessageT = Message>
    void SetAPNSMessage(APNSMessageT&& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = std::forward<APNSMessageT>(value); }
    template<typename APNSMessageT = Message>
    MessageConfiguration& WithAPNSMessage(APNSMessageT&& value) { SetAPNSMessage(std::forward<APNSMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the campaign sends through the Baidu (Baidu Cloud Push)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline const Message& GetBaiduMessage() const { return m_baiduMessage; }
    inline bool BaiduMessageHasBeenSet() const { return m_baiduMessageHasBeenSet; }
    template<typename BaiduMessageT = Message>
    void SetBaiduMessage(BaiduMessageT&& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = std::forward<BaiduMessageT>(value); }
    template<typename BaiduMessageT = Message>
    MessageConfiguration& WithBaiduMessage(BaiduMessageT&& value) { SetBaiduMessage(std::forward<BaiduMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the campaign sends through a custom channel, as specified by
     * the delivery configuration (CustomDeliveryConfiguration) settings for the
     * campaign. If specified, this message overrides the default message.</p> 
     */
    inline const CampaignCustomMessage& GetCustomMessage() const { return m_customMessage; }
    inline bool CustomMessageHasBeenSet() const { return m_customMessageHasBeenSet; }
    template<typename CustomMessageT = CampaignCustomMessage>
    void SetCustomMessage(CustomMessageT&& value) { m_customMessageHasBeenSet = true; m_customMessage = std::forward<CustomMessageT>(value); }
    template<typename CustomMessageT = CampaignCustomMessage>
    MessageConfiguration& WithCustomMessage(CustomMessageT&& value) { SetCustomMessage(std::forward<CustomMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message that the campaign sends through all the channels that are
     * configured for the campaign.</p>
     */
    inline const Message& GetDefaultMessage() const { return m_defaultMessage; }
    inline bool DefaultMessageHasBeenSet() const { return m_defaultMessageHasBeenSet; }
    template<typename DefaultMessageT = Message>
    void SetDefaultMessage(DefaultMessageT&& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = std::forward<DefaultMessageT>(value); }
    template<typename DefaultMessageT = Message>
    MessageConfiguration& WithDefaultMessage(DefaultMessageT&& value) { SetDefaultMessage(std::forward<DefaultMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the campaign sends through the email channel. If specified,
     * this message overrides the default message.</p>
     */
    inline const CampaignEmailMessage& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = CampaignEmailMessage>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = CampaignEmailMessage>
    MessageConfiguration& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the campaign sends through the GCM channel, which enables
     * Amazon Pinpoint to send push notifications through the Firebase Cloud Messaging
     * (FCM), formerly Google Cloud Messaging (GCM), service. If specified, this
     * message overrides the default message.</p>
     */
    inline const Message& GetGCMMessage() const { return m_gCMMessage; }
    inline bool GCMMessageHasBeenSet() const { return m_gCMMessageHasBeenSet; }
    template<typename GCMMessageT = Message>
    void SetGCMMessage(GCMMessageT&& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = std::forward<GCMMessageT>(value); }
    template<typename GCMMessageT = Message>
    MessageConfiguration& WithGCMMessage(GCMMessageT&& value) { SetGCMMessage(std::forward<GCMMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that the campaign sends through the SMS channel. If specified,
     * this message overrides the default message.</p>
     */
    inline const CampaignSmsMessage& GetSMSMessage() const { return m_sMSMessage; }
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }
    template<typename SMSMessageT = CampaignSmsMessage>
    void SetSMSMessage(SMSMessageT&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::forward<SMSMessageT>(value); }
    template<typename SMSMessageT = CampaignSmsMessage>
    MessageConfiguration& WithSMSMessage(SMSMessageT&& value) { SetSMSMessage(std::forward<SMSMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The in-app message configuration.</p>
     */
    inline const CampaignInAppMessage& GetInAppMessage() const { return m_inAppMessage; }
    inline bool InAppMessageHasBeenSet() const { return m_inAppMessageHasBeenSet; }
    template<typename InAppMessageT = CampaignInAppMessage>
    void SetInAppMessage(InAppMessageT&& value) { m_inAppMessageHasBeenSet = true; m_inAppMessage = std::forward<InAppMessageT>(value); }
    template<typename InAppMessageT = CampaignInAppMessage>
    MessageConfiguration& WithInAppMessage(InAppMessageT&& value) { SetInAppMessage(std::forward<InAppMessageT>(value)); return *this;}
    ///@}
  private:

    Message m_aDMMessage;
    bool m_aDMMessageHasBeenSet = false;

    Message m_aPNSMessage;
    bool m_aPNSMessageHasBeenSet = false;

    Message m_baiduMessage;
    bool m_baiduMessageHasBeenSet = false;

    CampaignCustomMessage m_customMessage;
    bool m_customMessageHasBeenSet = false;

    Message m_defaultMessage;
    bool m_defaultMessageHasBeenSet = false;

    CampaignEmailMessage m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    Message m_gCMMessage;
    bool m_gCMMessageHasBeenSet = false;

    CampaignSmsMessage m_sMSMessage;
    bool m_sMSMessageHasBeenSet = false;

    CampaignInAppMessage m_inAppMessage;
    bool m_inAppMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
