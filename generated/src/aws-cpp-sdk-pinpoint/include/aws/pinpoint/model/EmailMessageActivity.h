/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/JourneyEmailMessage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies the settings for an email activity in a journey. This type of
   * activity sends an email message to participants.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailMessageActivity">AWS
   * API Reference</a></p>
   */
  class EmailMessageActivity
  {
  public:
    AWS_PINPOINT_API EmailMessageActivity();
    AWS_PINPOINT_API EmailMessageActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EmailMessageActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the sender address for an email message that's sent to participants
     * in the journey.</p>
     */
    inline const JourneyEmailMessage& GetMessageConfig() const{ return m_messageConfig; }
    inline bool MessageConfigHasBeenSet() const { return m_messageConfigHasBeenSet; }
    inline void SetMessageConfig(const JourneyEmailMessage& value) { m_messageConfigHasBeenSet = true; m_messageConfig = value; }
    inline void SetMessageConfig(JourneyEmailMessage&& value) { m_messageConfigHasBeenSet = true; m_messageConfig = std::move(value); }
    inline EmailMessageActivity& WithMessageConfig(const JourneyEmailMessage& value) { SetMessageConfig(value); return *this;}
    inline EmailMessageActivity& WithMessageConfig(JourneyEmailMessage&& value) { SetMessageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the next activity to perform, after the message is
     * sent.</p>
     */
    inline const Aws::String& GetNextActivity() const{ return m_nextActivity; }
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }
    inline void SetNextActivity(const Aws::String& value) { m_nextActivityHasBeenSet = true; m_nextActivity = value; }
    inline void SetNextActivity(Aws::String&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::move(value); }
    inline void SetNextActivity(const char* value) { m_nextActivityHasBeenSet = true; m_nextActivity.assign(value); }
    inline EmailMessageActivity& WithNextActivity(const Aws::String& value) { SetNextActivity(value); return *this;}
    inline EmailMessageActivity& WithNextActivity(Aws::String&& value) { SetNextActivity(std::move(value)); return *this;}
    inline EmailMessageActivity& WithNextActivity(const char* value) { SetNextActivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the email message template to use for the message. If specified,
     * this value must match the name of an existing message template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline EmailMessageActivity& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline EmailMessageActivity& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline EmailMessageActivity& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the version of the email template to use for the
     * message. If specified, this value must match the identifier for an existing
     * template version. To retrieve a list of versions and version identifiers for a
     * template, use the <link 
     * linkend="templates-template-name-template-type-versions">Template
     * Versions</link> resource.</p> <p>If you don't specify a value for this property,
     * Amazon Pinpoint uses the <i>active version</i> of the template. The <i>active
     * version</i> is typically the version of a template that's been most recently
     * reviewed and approved for use, depending on your workflow. It isn't necessarily
     * the latest version of a template.</p>
     */
    inline const Aws::String& GetTemplateVersion() const{ return m_templateVersion; }
    inline bool TemplateVersionHasBeenSet() const { return m_templateVersionHasBeenSet; }
    inline void SetTemplateVersion(const Aws::String& value) { m_templateVersionHasBeenSet = true; m_templateVersion = value; }
    inline void SetTemplateVersion(Aws::String&& value) { m_templateVersionHasBeenSet = true; m_templateVersion = std::move(value); }
    inline void SetTemplateVersion(const char* value) { m_templateVersionHasBeenSet = true; m_templateVersion.assign(value); }
    inline EmailMessageActivity& WithTemplateVersion(const Aws::String& value) { SetTemplateVersion(value); return *this;}
    inline EmailMessageActivity& WithTemplateVersion(Aws::String&& value) { SetTemplateVersion(std::move(value)); return *this;}
    inline EmailMessageActivity& WithTemplateVersion(const char* value) { SetTemplateVersion(value); return *this;}
    ///@}
  private:

    JourneyEmailMessage m_messageConfig;
    bool m_messageConfigHasBeenSet = false;

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateVersion;
    bool m_templateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
