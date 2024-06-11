﻿/**
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
   * <p>Represents a request to create an email template. For more information, see
   * the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class CreateEmailTemplateRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateEmailTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEmailTemplate"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline CreateEmailTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateEmailTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateEmailTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline const EmailTemplateContent& GetTemplateContent() const{ return m_templateContent; }
    inline bool TemplateContentHasBeenSet() const { return m_templateContentHasBeenSet; }
    inline void SetTemplateContent(const EmailTemplateContent& value) { m_templateContentHasBeenSet = true; m_templateContent = value; }
    inline void SetTemplateContent(EmailTemplateContent&& value) { m_templateContentHasBeenSet = true; m_templateContent = std::move(value); }
    inline CreateEmailTemplateRequest& WithTemplateContent(const EmailTemplateContent& value) { SetTemplateContent(value); return *this;}
    inline CreateEmailTemplateRequest& WithTemplateContent(EmailTemplateContent&& value) { SetTemplateContent(std::move(value)); return *this;}
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
