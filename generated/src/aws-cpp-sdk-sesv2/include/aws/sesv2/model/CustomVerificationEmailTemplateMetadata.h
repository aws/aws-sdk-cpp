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
    AWS_SESV2_API CustomVerificationEmailTemplateMetadata();
    AWS_SESV2_API CustomVerificationEmailTemplateMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API CustomVerificationEmailTemplateMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const{ return m_templateSubject; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline bool TemplateSubjectHasBeenSet() const { return m_templateSubjectHasBeenSet; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const Aws::String& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = value; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(Aws::String&& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = std::move(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const char* value) { m_templateSubjectHasBeenSet = true; m_templateSubject.assign(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithTemplateSubject(const Aws::String& value) { SetTemplateSubject(value); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithTemplateSubject(Aws::String&& value) { SetTemplateSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithTemplateSubject(const char* value) { SetTemplateSubject(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const{ return m_successRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline bool SuccessRedirectionURLHasBeenSet() const { return m_successRedirectionURLHasBeenSet; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const Aws::String& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(Aws::String&& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const char* value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithSuccessRedirectionURL(const Aws::String& value) { SetSuccessRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithSuccessRedirectionURL(Aws::String&& value) { SetSuccessRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithSuccessRedirectionURL(const char* value) { SetSuccessRedirectionURL(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const{ return m_failureRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline bool FailureRedirectionURLHasBeenSet() const { return m_failureRedirectionURLHasBeenSet; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const Aws::String& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(Aws::String&& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const char* value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithFailureRedirectionURL(const Aws::String& value) { SetFailureRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithFailureRedirectionURL(Aws::String&& value) { SetFailureRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CustomVerificationEmailTemplateMetadata& WithFailureRedirectionURL(const char* value) { SetFailureRedirectionURL(value); return *this;}

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
