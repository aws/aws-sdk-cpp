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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>Contains information about a custom verification email
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CustomVerificationEmailTemplateMetadata">AWS
   * API Reference</a></p>
   */
  class CustomVerificationEmailTemplateMetadata
  {
  public:
    AWS_SESV2_API CustomVerificationEmailTemplateMetadata() = default;
    AWS_SESV2_API CustomVerificationEmailTemplateMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API CustomVerificationEmailTemplateMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    CustomVerificationEmailTemplateMetadata& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
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
    CustomVerificationEmailTemplateMetadata& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
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
    CustomVerificationEmailTemplateMetadata& WithTemplateSubject(TemplateSubjectT&& value) { SetTemplateSubject(std::forward<TemplateSubjectT>(value)); return *this;}
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
    CustomVerificationEmailTemplateMetadata& WithSuccessRedirectionURL(SuccessRedirectionURLT&& value) { SetSuccessRedirectionURL(std::forward<SuccessRedirectionURLT>(value)); return *this;}
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
    CustomVerificationEmailTemplateMetadata& WithFailureRedirectionURL(FailureRedirectionURLT&& value) { SetFailureRedirectionURL(std::forward<FailureRedirectionURLT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::String m_templateSubject;
    bool m_templateSubjectHasBeenSet = false;

    Aws::String m_successRedirectionURL;
    bool m_successRedirectionURLHasBeenSet = false;

    Aws::String m_failureRedirectionURL;
    bool m_failureRedirectionURLHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
