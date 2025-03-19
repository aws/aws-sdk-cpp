/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Template.h>
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
   * <p>Specifies the message template to use for the message, for each type of
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class TemplateConfiguration
  {
  public:
    AWS_PINPOINT_API TemplateConfiguration() = default;
    AWS_PINPOINT_API TemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email template to use for the message.</p>
     */
    inline const Template& GetEmailTemplate() const { return m_emailTemplate; }
    inline bool EmailTemplateHasBeenSet() const { return m_emailTemplateHasBeenSet; }
    template<typename EmailTemplateT = Template>
    void SetEmailTemplate(EmailTemplateT&& value) { m_emailTemplateHasBeenSet = true; m_emailTemplate = std::forward<EmailTemplateT>(value); }
    template<typename EmailTemplateT = Template>
    TemplateConfiguration& WithEmailTemplate(EmailTemplateT&& value) { SetEmailTemplate(std::forward<EmailTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline const Template& GetPushTemplate() const { return m_pushTemplate; }
    inline bool PushTemplateHasBeenSet() const { return m_pushTemplateHasBeenSet; }
    template<typename PushTemplateT = Template>
    void SetPushTemplate(PushTemplateT&& value) { m_pushTemplateHasBeenSet = true; m_pushTemplate = std::forward<PushTemplateT>(value); }
    template<typename PushTemplateT = Template>
    TemplateConfiguration& WithPushTemplate(PushTemplateT&& value) { SetPushTemplate(std::forward<PushTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline const Template& GetSMSTemplate() const { return m_sMSTemplate; }
    inline bool SMSTemplateHasBeenSet() const { return m_sMSTemplateHasBeenSet; }
    template<typename SMSTemplateT = Template>
    void SetSMSTemplate(SMSTemplateT&& value) { m_sMSTemplateHasBeenSet = true; m_sMSTemplate = std::forward<SMSTemplateT>(value); }
    template<typename SMSTemplateT = Template>
    TemplateConfiguration& WithSMSTemplate(SMSTemplateT&& value) { SetSMSTemplate(std::forward<SMSTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The voice template to use for the message. This object isn't supported for
     * campaigns.</p>
     */
    inline const Template& GetVoiceTemplate() const { return m_voiceTemplate; }
    inline bool VoiceTemplateHasBeenSet() const { return m_voiceTemplateHasBeenSet; }
    template<typename VoiceTemplateT = Template>
    void SetVoiceTemplate(VoiceTemplateT&& value) { m_voiceTemplateHasBeenSet = true; m_voiceTemplate = std::forward<VoiceTemplateT>(value); }
    template<typename VoiceTemplateT = Template>
    TemplateConfiguration& WithVoiceTemplate(VoiceTemplateT&& value) { SetVoiceTemplate(std::forward<VoiceTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The InApp template to use for the message. The InApp template object is not
     * supported for SendMessages.</p>
     */
    inline const Template& GetInAppTemplate() const { return m_inAppTemplate; }
    inline bool InAppTemplateHasBeenSet() const { return m_inAppTemplateHasBeenSet; }
    template<typename InAppTemplateT = Template>
    void SetInAppTemplate(InAppTemplateT&& value) { m_inAppTemplateHasBeenSet = true; m_inAppTemplate = std::forward<InAppTemplateT>(value); }
    template<typename InAppTemplateT = Template>
    TemplateConfiguration& WithInAppTemplate(InAppTemplateT&& value) { SetInAppTemplate(std::forward<InAppTemplateT>(value)); return *this;}
    ///@}
  private:

    Template m_emailTemplate;
    bool m_emailTemplateHasBeenSet = false;

    Template m_pushTemplate;
    bool m_pushTemplateHasBeenSet = false;

    Template m_sMSTemplate;
    bool m_sMSTemplateHasBeenSet = false;

    Template m_voiceTemplate;
    bool m_voiceTemplateHasBeenSet = false;

    Template m_inAppTemplate;
    bool m_inAppTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
