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
    AWS_PINPOINT_API TemplateConfiguration();
    AWS_PINPOINT_API TemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email template to use for the message.</p>
     */
    inline const Template& GetEmailTemplate() const{ return m_emailTemplate; }
    inline bool EmailTemplateHasBeenSet() const { return m_emailTemplateHasBeenSet; }
    inline void SetEmailTemplate(const Template& value) { m_emailTemplateHasBeenSet = true; m_emailTemplate = value; }
    inline void SetEmailTemplate(Template&& value) { m_emailTemplateHasBeenSet = true; m_emailTemplate = std::move(value); }
    inline TemplateConfiguration& WithEmailTemplate(const Template& value) { SetEmailTemplate(value); return *this;}
    inline TemplateConfiguration& WithEmailTemplate(Template&& value) { SetEmailTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The push notification template to use for the message.</p>
     */
    inline const Template& GetPushTemplate() const{ return m_pushTemplate; }
    inline bool PushTemplateHasBeenSet() const { return m_pushTemplateHasBeenSet; }
    inline void SetPushTemplate(const Template& value) { m_pushTemplateHasBeenSet = true; m_pushTemplate = value; }
    inline void SetPushTemplate(Template&& value) { m_pushTemplateHasBeenSet = true; m_pushTemplate = std::move(value); }
    inline TemplateConfiguration& WithPushTemplate(const Template& value) { SetPushTemplate(value); return *this;}
    inline TemplateConfiguration& WithPushTemplate(Template&& value) { SetPushTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMS template to use for the message.</p>
     */
    inline const Template& GetSMSTemplate() const{ return m_sMSTemplate; }
    inline bool SMSTemplateHasBeenSet() const { return m_sMSTemplateHasBeenSet; }
    inline void SetSMSTemplate(const Template& value) { m_sMSTemplateHasBeenSet = true; m_sMSTemplate = value; }
    inline void SetSMSTemplate(Template&& value) { m_sMSTemplateHasBeenSet = true; m_sMSTemplate = std::move(value); }
    inline TemplateConfiguration& WithSMSTemplate(const Template& value) { SetSMSTemplate(value); return *this;}
    inline TemplateConfiguration& WithSMSTemplate(Template&& value) { SetSMSTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The voice template to use for the message. This object isn't supported for
     * campaigns.</p>
     */
    inline const Template& GetVoiceTemplate() const{ return m_voiceTemplate; }
    inline bool VoiceTemplateHasBeenSet() const { return m_voiceTemplateHasBeenSet; }
    inline void SetVoiceTemplate(const Template& value) { m_voiceTemplateHasBeenSet = true; m_voiceTemplate = value; }
    inline void SetVoiceTemplate(Template&& value) { m_voiceTemplateHasBeenSet = true; m_voiceTemplate = std::move(value); }
    inline TemplateConfiguration& WithVoiceTemplate(const Template& value) { SetVoiceTemplate(value); return *this;}
    inline TemplateConfiguration& WithVoiceTemplate(Template&& value) { SetVoiceTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The InApp template to use for the message. The InApp template object is not
     * supported for SendMessages.</p>
     */
    inline const Template& GetInAppTemplate() const{ return m_inAppTemplate; }
    inline bool InAppTemplateHasBeenSet() const { return m_inAppTemplateHasBeenSet; }
    inline void SetInAppTemplate(const Template& value) { m_inAppTemplateHasBeenSet = true; m_inAppTemplate = value; }
    inline void SetInAppTemplate(Template&& value) { m_inAppTemplateHasBeenSet = true; m_inAppTemplate = std::move(value); }
    inline TemplateConfiguration& WithInAppTemplate(const Template& value) { SetInAppTemplate(value); return *this;}
    inline TemplateConfiguration& WithInAppTemplate(Template&& value) { SetInAppTemplate(std::move(value)); return *this;}
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
