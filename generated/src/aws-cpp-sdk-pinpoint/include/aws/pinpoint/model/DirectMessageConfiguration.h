/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ADMMessage.h>
#include <aws/pinpoint/model/APNSMessage.h>
#include <aws/pinpoint/model/BaiduMessage.h>
#include <aws/pinpoint/model/DefaultMessage.h>
#include <aws/pinpoint/model/DefaultPushNotificationMessage.h>
#include <aws/pinpoint/model/EmailMessage.h>
#include <aws/pinpoint/model/GCMMessage.h>
#include <aws/pinpoint/model/SMSMessage.h>
#include <aws/pinpoint/model/VoiceMessage.h>
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
   * <p>Specifies the settings and content for the default message and any default
   * messages that you tailored for specific channels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DirectMessageConfiguration">AWS
   * API Reference</a></p>
   */
  class DirectMessageConfiguration
  {
  public:
    AWS_PINPOINT_API DirectMessageConfiguration() = default;
    AWS_PINPOINT_API DirectMessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API DirectMessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default push notification message for the ADM (Amazon Device Messaging)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline const ADMMessage& GetADMMessage() const { return m_aDMMessage; }
    inline bool ADMMessageHasBeenSet() const { return m_aDMMessageHasBeenSet; }
    template<typename ADMMessageT = ADMMessage>
    void SetADMMessage(ADMMessageT&& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = std::forward<ADMMessageT>(value); }
    template<typename ADMMessageT = ADMMessage>
    DirectMessageConfiguration& WithADMMessage(ADMMessageT&& value) { SetADMMessage(std::forward<ADMMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default push notification message for the APNs (Apple Push Notification
     * service) channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline const APNSMessage& GetAPNSMessage() const { return m_aPNSMessage; }
    inline bool APNSMessageHasBeenSet() const { return m_aPNSMessageHasBeenSet; }
    template<typename APNSMessageT = APNSMessage>
    void SetAPNSMessage(APNSMessageT&& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = std::forward<APNSMessageT>(value); }
    template<typename APNSMessageT = APNSMessage>
    DirectMessageConfiguration& WithAPNSMessage(APNSMessageT&& value) { SetAPNSMessage(std::forward<APNSMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default push notification message for the Baidu (Baidu Cloud Push)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline const BaiduMessage& GetBaiduMessage() const { return m_baiduMessage; }
    inline bool BaiduMessageHasBeenSet() const { return m_baiduMessageHasBeenSet; }
    template<typename BaiduMessageT = BaiduMessage>
    void SetBaiduMessage(BaiduMessageT&& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = std::forward<BaiduMessageT>(value); }
    template<typename BaiduMessageT = BaiduMessage>
    DirectMessageConfiguration& WithBaiduMessage(BaiduMessageT&& value) { SetBaiduMessage(std::forward<BaiduMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message for all channels.</p>
     */
    inline const DefaultMessage& GetDefaultMessage() const { return m_defaultMessage; }
    inline bool DefaultMessageHasBeenSet() const { return m_defaultMessageHasBeenSet; }
    template<typename DefaultMessageT = DefaultMessage>
    void SetDefaultMessage(DefaultMessageT&& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = std::forward<DefaultMessageT>(value); }
    template<typename DefaultMessageT = DefaultMessage>
    DirectMessageConfiguration& WithDefaultMessage(DefaultMessageT&& value) { SetDefaultMessage(std::forward<DefaultMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default push notification message for all push notification channels.</p>
     */
    inline const DefaultPushNotificationMessage& GetDefaultPushNotificationMessage() const { return m_defaultPushNotificationMessage; }
    inline bool DefaultPushNotificationMessageHasBeenSet() const { return m_defaultPushNotificationMessageHasBeenSet; }
    template<typename DefaultPushNotificationMessageT = DefaultPushNotificationMessage>
    void SetDefaultPushNotificationMessage(DefaultPushNotificationMessageT&& value) { m_defaultPushNotificationMessageHasBeenSet = true; m_defaultPushNotificationMessage = std::forward<DefaultPushNotificationMessageT>(value); }
    template<typename DefaultPushNotificationMessageT = DefaultPushNotificationMessage>
    DirectMessageConfiguration& WithDefaultPushNotificationMessage(DefaultPushNotificationMessageT&& value) { SetDefaultPushNotificationMessage(std::forward<DefaultPushNotificationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message for the email channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline const EmailMessage& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = EmailMessage>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = EmailMessage>
    DirectMessageConfiguration& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default push notification message for the GCM channel, which is used to
     * send notifications through the Firebase Cloud Messaging (FCM), formerly Google
     * Cloud Messaging (GCM), service. This message overrides the default push
     * notification message (DefaultPushNotificationMessage).</p>
     */
    inline const GCMMessage& GetGCMMessage() const { return m_gCMMessage; }
    inline bool GCMMessageHasBeenSet() const { return m_gCMMessageHasBeenSet; }
    template<typename GCMMessageT = GCMMessage>
    void SetGCMMessage(GCMMessageT&& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = std::forward<GCMMessageT>(value); }
    template<typename GCMMessageT = GCMMessage>
    DirectMessageConfiguration& WithGCMMessage(GCMMessageT&& value) { SetGCMMessage(std::forward<GCMMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message for the SMS channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline const SMSMessage& GetSMSMessage() const { return m_sMSMessage; }
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }
    template<typename SMSMessageT = SMSMessage>
    void SetSMSMessage(SMSMessageT&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::forward<SMSMessageT>(value); }
    template<typename SMSMessageT = SMSMessage>
    DirectMessageConfiguration& WithSMSMessage(SMSMessageT&& value) { SetSMSMessage(std::forward<SMSMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default message for the voice channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline const VoiceMessage& GetVoiceMessage() const { return m_voiceMessage; }
    inline bool VoiceMessageHasBeenSet() const { return m_voiceMessageHasBeenSet; }
    template<typename VoiceMessageT = VoiceMessage>
    void SetVoiceMessage(VoiceMessageT&& value) { m_voiceMessageHasBeenSet = true; m_voiceMessage = std::forward<VoiceMessageT>(value); }
    template<typename VoiceMessageT = VoiceMessage>
    DirectMessageConfiguration& WithVoiceMessage(VoiceMessageT&& value) { SetVoiceMessage(std::forward<VoiceMessageT>(value)); return *this;}
    ///@}
  private:

    ADMMessage m_aDMMessage;
    bool m_aDMMessageHasBeenSet = false;

    APNSMessage m_aPNSMessage;
    bool m_aPNSMessageHasBeenSet = false;

    BaiduMessage m_baiduMessage;
    bool m_baiduMessageHasBeenSet = false;

    DefaultMessage m_defaultMessage;
    bool m_defaultMessageHasBeenSet = false;

    DefaultPushNotificationMessage m_defaultPushNotificationMessage;
    bool m_defaultPushNotificationMessageHasBeenSet = false;

    EmailMessage m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    GCMMessage m_gCMMessage;
    bool m_gCMMessageHasBeenSet = false;

    SMSMessage m_sMSMessage;
    bool m_sMSMessageHasBeenSet = false;

    VoiceMessage m_voiceMessage;
    bool m_voiceMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
