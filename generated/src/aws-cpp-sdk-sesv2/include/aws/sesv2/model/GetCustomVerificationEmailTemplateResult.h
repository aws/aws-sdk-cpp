/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The following elements are returned by the service.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetCustomVerificationEmailTemplateResponse">AWS
   * API Reference</a></p>
   */
  class GetCustomVerificationEmailTemplateResult
  {
  public:
    AWS_SESV2_API GetCustomVerificationEmailTemplateResult() = default;
    AWS_SESV2_API GetCustomVerificationEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetCustomVerificationEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    GetCustomVerificationEmailTemplateResult& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const { return m_fromEmailAddress; }
    template<typename FromEmailAddressT = Aws::String>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::String>
    GetCustomVerificationEmailTemplateResult& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const { return m_templateSubject; }
    template<typename TemplateSubjectT = Aws::String>
    void SetTemplateSubject(TemplateSubjectT&& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = std::forward<TemplateSubjectT>(value); }
    template<typename TemplateSubjectT = Aws::String>
    GetCustomVerificationEmailTemplateResult& WithTemplateSubject(TemplateSubjectT&& value) { SetTemplateSubject(std::forward<TemplateSubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateContent() const { return m_templateContent; }
    template<typename TemplateContentT = Aws::String>
    void SetTemplateContent(TemplateContentT&& value) { m_templateContentHasBeenSet = true; m_templateContent = std::forward<TemplateContentT>(value); }
    template<typename TemplateContentT = Aws::String>
    GetCustomVerificationEmailTemplateResult& WithTemplateContent(TemplateContentT&& value) { SetTemplateContent(std::forward<TemplateContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const { return m_successRedirectionURL; }
    template<typename SuccessRedirectionURLT = Aws::String>
    void SetSuccessRedirectionURL(SuccessRedirectionURLT&& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = std::forward<SuccessRedirectionURLT>(value); }
    template<typename SuccessRedirectionURLT = Aws::String>
    GetCustomVerificationEmailTemplateResult& WithSuccessRedirectionURL(SuccessRedirectionURLT&& value) { SetSuccessRedirectionURL(std::forward<SuccessRedirectionURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const { return m_failureRedirectionURL; }
    template<typename FailureRedirectionURLT = Aws::String>
    void SetFailureRedirectionURL(FailureRedirectionURLT&& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = std::forward<FailureRedirectionURLT>(value); }
    template<typename FailureRedirectionURLT = Aws::String>
    GetCustomVerificationEmailTemplateResult& WithFailureRedirectionURL(FailureRedirectionURLT&& value) { SetFailureRedirectionURL(std::forward<FailureRedirectionURLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCustomVerificationEmailTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::String m_templateSubject;
    bool m_templateSubjectHasBeenSet = false;

    Aws::String m_templateContent;
    bool m_templateContentHasBeenSet = false;

    Aws::String m_successRedirectionURL;
    bool m_successRedirectionURLHasBeenSet = false;

    Aws::String m_failureRedirectionURL;
    bool m_failureRedirectionURLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
