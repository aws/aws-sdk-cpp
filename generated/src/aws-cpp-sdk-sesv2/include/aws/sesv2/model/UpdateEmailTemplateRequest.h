/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/EmailTemplateContent.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to update an email template. For more information, see
   * the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateEmailTemplateRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API UpdateEmailTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEmailTemplate"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateEmailTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline const EmailTemplateContent& GetTemplateContent() const { return m_templateContent; }
    inline bool TemplateContentHasBeenSet() const { return m_templateContentHasBeenSet; }
    template<typename TemplateContentT = EmailTemplateContent>
    void SetTemplateContent(TemplateContentT&& value) { m_templateContentHasBeenSet = true; m_templateContent = std::forward<TemplateContentT>(value); }
    template<typename TemplateContentT = EmailTemplateContent>
    UpdateEmailTemplateRequest& WithTemplateContent(TemplateContentT&& value) { SetTemplateContent(std::forward<TemplateContentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    EmailTemplateContent m_templateContent;
    bool m_templateContentHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
