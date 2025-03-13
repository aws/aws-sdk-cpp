/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to update an existing custom verification email
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateCustomVerificationEmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCustomVerificationEmailTemplateRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API UpdateCustomVerificationEmailTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomVerificationEmailTemplate"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the custom verification email template that you want to
     * update.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateCustomVerificationEmailTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = Aws::String>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::String>
    UpdateCustomVerificationEmailTemplateRequest& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const { return m_templateSubject; }
    inline bool TemplateSubjectHasBeenSet() const { return m_templateSubjectHasBeenSet; }
    template<typename TemplateSubjectT = Aws::String>
    void SetTemplateSubject(TemplateSubjectT&& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = std::forward<TemplateSubjectT>(value); }
    template<typename TemplateSubjectT = Aws::String>
    UpdateCustomVerificationEmailTemplateRequest& WithTemplateSubject(TemplateSubjectT&& value) { SetTemplateSubject(std::forward<TemplateSubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom-faq">Custom
     * verification email frequently asked questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTemplateContent() const { return m_templateContent; }
    inline bool TemplateContentHasBeenSet() const { return m_templateContentHasBeenSet; }
    template<typename TemplateContentT = Aws::String>
    void SetTemplateContent(TemplateContentT&& value) { m_templateContentHasBeenSet = true; m_templateContent = std::forward<TemplateContentT>(value); }
    template<typename TemplateContentT = Aws::String>
    UpdateCustomVerificationEmailTemplateRequest& WithTemplateContent(TemplateContentT&& value) { SetTemplateContent(std::forward<TemplateContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const { return m_successRedirectionURL; }
    inline bool SuccessRedirectionURLHasBeenSet() const { return m_successRedirectionURLHasBeenSet; }
    template<typename SuccessRedirectionURLT = Aws::String>
    void SetSuccessRedirectionURL(SuccessRedirectionURLT&& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = std::forward<SuccessRedirectionURLT>(value); }
    template<typename SuccessRedirectionURLT = Aws::String>
    UpdateCustomVerificationEmailTemplateRequest& WithSuccessRedirectionURL(SuccessRedirectionURLT&& value) { SetSuccessRedirectionURL(std::forward<SuccessRedirectionURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const { return m_failureRedirectionURL; }
    inline bool FailureRedirectionURLHasBeenSet() const { return m_failureRedirectionURLHasBeenSet; }
    template<typename FailureRedirectionURLT = Aws::String>
    void SetFailureRedirectionURL(FailureRedirectionURLT&& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = std::forward<FailureRedirectionURLT>(value); }
    template<typename FailureRedirectionURLT = Aws::String>
    UpdateCustomVerificationEmailTemplateRequest& WithFailureRedirectionURL(FailureRedirectionURLT&& value) { SetFailureRedirectionURL(std::forward<FailureRedirectionURLT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
