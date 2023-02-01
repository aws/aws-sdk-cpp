/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/EmailTemplateContent.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following element is returned by the service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailTemplateResponse">AWS
   * API Reference</a></p>
   */
  class GetEmailTemplateResult
  {
  public:
    AWS_SESV2_API GetEmailTemplateResult();
    AWS_SESV2_API GetEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }

    /**
     * <p>The name of the template.</p>
     */
    inline GetEmailTemplateResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetEmailTemplateResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the template.</p>
     */
    inline GetEmailTemplateResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline const EmailTemplateContent& GetTemplateContent() const{ return m_templateContent; }

    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline void SetTemplateContent(const EmailTemplateContent& value) { m_templateContent = value; }

    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline void SetTemplateContent(EmailTemplateContent&& value) { m_templateContent = std::move(value); }

    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline GetEmailTemplateResult& WithTemplateContent(const EmailTemplateContent& value) { SetTemplateContent(value); return *this;}

    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline GetEmailTemplateResult& WithTemplateContent(EmailTemplateContent&& value) { SetTemplateContent(std::move(value)); return *this;}

  private:

    Aws::String m_templateName;

    EmailTemplateContent m_templateContent;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
