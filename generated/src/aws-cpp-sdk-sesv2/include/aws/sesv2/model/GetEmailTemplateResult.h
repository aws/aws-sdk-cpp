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
    AWS_SESV2_API GetEmailTemplateResult() = default;
    AWS_SESV2_API GetEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    GetEmailTemplateResult& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the email template, composed of a subject line, an HTML part,
     * and a text-only part.</p>
     */
    inline const EmailTemplateContent& GetTemplateContent() const { return m_templateContent; }
    template<typename TemplateContentT = EmailTemplateContent>
    void SetTemplateContent(TemplateContentT&& value) { m_templateContentHasBeenSet = true; m_templateContent = std::forward<TemplateContentT>(value); }
    template<typename TemplateContentT = EmailTemplateContent>
    GetEmailTemplateResult& WithTemplateContent(TemplateContentT&& value) { SetTemplateContent(std::forward<TemplateContentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEmailTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    EmailTemplateContent m_templateContent;
    bool m_templateContentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
