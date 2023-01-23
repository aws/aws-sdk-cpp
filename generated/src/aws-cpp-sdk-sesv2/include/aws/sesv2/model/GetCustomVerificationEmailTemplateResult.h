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
    AWS_SESV2_API GetCustomVerificationEmailTemplateResult();
    AWS_SESV2_API GetCustomVerificationEmailTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetCustomVerificationEmailTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateName = std::move(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddress = value; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddress = std::move(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddress.assign(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const{ return m_templateSubject; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const Aws::String& value) { m_templateSubject = value; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(Aws::String&& value) { m_templateSubject = std::move(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const char* value) { m_templateSubject.assign(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateSubject(const Aws::String& value) { SetTemplateSubject(value); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateSubject(Aws::String&& value) { SetTemplateSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateSubject(const char* value) { SetTemplateSubject(value); return *this;}


    /**
     * <p>The content of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateContent() const{ return m_templateContent; }

    /**
     * <p>The content of the custom verification email.</p>
     */
    inline void SetTemplateContent(const Aws::String& value) { m_templateContent = value; }

    /**
     * <p>The content of the custom verification email.</p>
     */
    inline void SetTemplateContent(Aws::String&& value) { m_templateContent = std::move(value); }

    /**
     * <p>The content of the custom verification email.</p>
     */
    inline void SetTemplateContent(const char* value) { m_templateContent.assign(value); }

    /**
     * <p>The content of the custom verification email.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateContent(const Aws::String& value) { SetTemplateContent(value); return *this;}

    /**
     * <p>The content of the custom verification email.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateContent(Aws::String&& value) { SetTemplateContent(std::move(value)); return *this;}

    /**
     * <p>The content of the custom verification email.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithTemplateContent(const char* value) { SetTemplateContent(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const{ return m_successRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const Aws::String& value) { m_successRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(Aws::String&& value) { m_successRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const char* value) { m_successRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithSuccessRedirectionURL(const Aws::String& value) { SetSuccessRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithSuccessRedirectionURL(Aws::String&& value) { SetSuccessRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithSuccessRedirectionURL(const char* value) { SetSuccessRedirectionURL(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const{ return m_failureRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const Aws::String& value) { m_failureRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(Aws::String&& value) { m_failureRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const char* value) { m_failureRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithFailureRedirectionURL(const Aws::String& value) { SetFailureRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithFailureRedirectionURL(Aws::String&& value) { SetFailureRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline GetCustomVerificationEmailTemplateResult& WithFailureRedirectionURL(const char* value) { SetFailureRedirectionURL(value); return *this;}

  private:

    Aws::String m_templateName;

    Aws::String m_fromEmailAddress;

    Aws::String m_templateSubject;

    Aws::String m_templateContent;

    Aws::String m_successRedirectionURL;

    Aws::String m_failureRedirectionURL;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
