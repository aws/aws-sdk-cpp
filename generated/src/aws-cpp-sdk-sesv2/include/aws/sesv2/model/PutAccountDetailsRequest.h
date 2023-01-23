/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/model/MailType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ContactLanguage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to submit new account details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDetailsRequest">AWS
   * API Reference</a></p>
   */
  class PutAccountDetailsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutAccountDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountDetails"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of email your account will send.</p>
     */
    inline const MailType& GetMailType() const{ return m_mailType; }

    /**
     * <p>The type of email your account will send.</p>
     */
    inline bool MailTypeHasBeenSet() const { return m_mailTypeHasBeenSet; }

    /**
     * <p>The type of email your account will send.</p>
     */
    inline void SetMailType(const MailType& value) { m_mailTypeHasBeenSet = true; m_mailType = value; }

    /**
     * <p>The type of email your account will send.</p>
     */
    inline void SetMailType(MailType&& value) { m_mailTypeHasBeenSet = true; m_mailType = std::move(value); }

    /**
     * <p>The type of email your account will send.</p>
     */
    inline PutAccountDetailsRequest& WithMailType(const MailType& value) { SetMailType(value); return *this;}

    /**
     * <p>The type of email your account will send.</p>
     */
    inline PutAccountDetailsRequest& WithMailType(MailType&& value) { SetMailType(std::move(value)); return *this;}


    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline const Aws::String& GetWebsiteURL() const{ return m_websiteURL; }

    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline bool WebsiteURLHasBeenSet() const { return m_websiteURLHasBeenSet; }

    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline void SetWebsiteURL(const Aws::String& value) { m_websiteURLHasBeenSet = true; m_websiteURL = value; }

    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline void SetWebsiteURL(Aws::String&& value) { m_websiteURLHasBeenSet = true; m_websiteURL = std::move(value); }

    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline void SetWebsiteURL(const char* value) { m_websiteURLHasBeenSet = true; m_websiteURL.assign(value); }

    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline PutAccountDetailsRequest& WithWebsiteURL(const Aws::String& value) { SetWebsiteURL(value); return *this;}

    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline PutAccountDetailsRequest& WithWebsiteURL(Aws::String&& value) { SetWebsiteURL(std::move(value)); return *this;}

    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline PutAccountDetailsRequest& WithWebsiteURL(const char* value) { SetWebsiteURL(value); return *this;}


    /**
     * <p>The language you would prefer to be contacted with.</p>
     */
    inline const ContactLanguage& GetContactLanguage() const{ return m_contactLanguage; }

    /**
     * <p>The language you would prefer to be contacted with.</p>
     */
    inline bool ContactLanguageHasBeenSet() const { return m_contactLanguageHasBeenSet; }

    /**
     * <p>The language you would prefer to be contacted with.</p>
     */
    inline void SetContactLanguage(const ContactLanguage& value) { m_contactLanguageHasBeenSet = true; m_contactLanguage = value; }

    /**
     * <p>The language you would prefer to be contacted with.</p>
     */
    inline void SetContactLanguage(ContactLanguage&& value) { m_contactLanguageHasBeenSet = true; m_contactLanguage = std::move(value); }

    /**
     * <p>The language you would prefer to be contacted with.</p>
     */
    inline PutAccountDetailsRequest& WithContactLanguage(const ContactLanguage& value) { SetContactLanguage(value); return *this;}

    /**
     * <p>The language you would prefer to be contacted with.</p>
     */
    inline PutAccountDetailsRequest& WithContactLanguage(ContactLanguage&& value) { SetContactLanguage(std::move(value)); return *this;}


    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline const Aws::String& GetUseCaseDescription() const{ return m_useCaseDescription; }

    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline bool UseCaseDescriptionHasBeenSet() const { return m_useCaseDescriptionHasBeenSet; }

    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline void SetUseCaseDescription(const Aws::String& value) { m_useCaseDescriptionHasBeenSet = true; m_useCaseDescription = value; }

    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline void SetUseCaseDescription(Aws::String&& value) { m_useCaseDescriptionHasBeenSet = true; m_useCaseDescription = std::move(value); }

    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline void SetUseCaseDescription(const char* value) { m_useCaseDescriptionHasBeenSet = true; m_useCaseDescription.assign(value); }

    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline PutAccountDetailsRequest& WithUseCaseDescription(const Aws::String& value) { SetUseCaseDescription(value); return *this;}

    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline PutAccountDetailsRequest& WithUseCaseDescription(Aws::String&& value) { SetUseCaseDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline PutAccountDetailsRequest& WithUseCaseDescription(const char* value) { SetUseCaseDescription(value); return *this;}


    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalContactEmailAddresses() const{ return m_additionalContactEmailAddresses; }

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline bool AdditionalContactEmailAddressesHasBeenSet() const { return m_additionalContactEmailAddressesHasBeenSet; }

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline void SetAdditionalContactEmailAddresses(const Aws::Vector<Aws::String>& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses = value; }

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline void SetAdditionalContactEmailAddresses(Aws::Vector<Aws::String>&& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses = std::move(value); }

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline PutAccountDetailsRequest& WithAdditionalContactEmailAddresses(const Aws::Vector<Aws::String>& value) { SetAdditionalContactEmailAddresses(value); return *this;}

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline PutAccountDetailsRequest& WithAdditionalContactEmailAddresses(Aws::Vector<Aws::String>&& value) { SetAdditionalContactEmailAddresses(std::move(value)); return *this;}

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline PutAccountDetailsRequest& AddAdditionalContactEmailAddresses(const Aws::String& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses.push_back(value); return *this; }

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline PutAccountDetailsRequest& AddAdditionalContactEmailAddresses(Aws::String&& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline PutAccountDetailsRequest& AddAdditionalContactEmailAddresses(const char* value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses.push_back(value); return *this; }


    /**
     * <p>Indicates whether or not your account should have production access in the
     * current Amazon Web Services Region.</p> <p>If the value is <code>false</code>,
     * then your account is in the <i>sandbox</i>. When your account is in the sandbox,
     * you can only send email to verified identities. Additionally, the maximum number
     * of emails you can send in a 24-hour period (your sending quota) is 200, and the
     * maximum number of emails you can send per second (your maximum sending rate) is
     * 1.</p> <p>If the value is <code>true</code>, then your account has production
     * access. When your account has production access, you can send email to any
     * address. The sending quota and maximum sending rate for your account vary based
     * on your specific use case.</p>
     */
    inline bool GetProductionAccessEnabled() const{ return m_productionAccessEnabled; }

    /**
     * <p>Indicates whether or not your account should have production access in the
     * current Amazon Web Services Region.</p> <p>If the value is <code>false</code>,
     * then your account is in the <i>sandbox</i>. When your account is in the sandbox,
     * you can only send email to verified identities. Additionally, the maximum number
     * of emails you can send in a 24-hour period (your sending quota) is 200, and the
     * maximum number of emails you can send per second (your maximum sending rate) is
     * 1.</p> <p>If the value is <code>true</code>, then your account has production
     * access. When your account has production access, you can send email to any
     * address. The sending quota and maximum sending rate for your account vary based
     * on your specific use case.</p>
     */
    inline bool ProductionAccessEnabledHasBeenSet() const { return m_productionAccessEnabledHasBeenSet; }

    /**
     * <p>Indicates whether or not your account should have production access in the
     * current Amazon Web Services Region.</p> <p>If the value is <code>false</code>,
     * then your account is in the <i>sandbox</i>. When your account is in the sandbox,
     * you can only send email to verified identities. Additionally, the maximum number
     * of emails you can send in a 24-hour period (your sending quota) is 200, and the
     * maximum number of emails you can send per second (your maximum sending rate) is
     * 1.</p> <p>If the value is <code>true</code>, then your account has production
     * access. When your account has production access, you can send email to any
     * address. The sending quota and maximum sending rate for your account vary based
     * on your specific use case.</p>
     */
    inline void SetProductionAccessEnabled(bool value) { m_productionAccessEnabledHasBeenSet = true; m_productionAccessEnabled = value; }

    /**
     * <p>Indicates whether or not your account should have production access in the
     * current Amazon Web Services Region.</p> <p>If the value is <code>false</code>,
     * then your account is in the <i>sandbox</i>. When your account is in the sandbox,
     * you can only send email to verified identities. Additionally, the maximum number
     * of emails you can send in a 24-hour period (your sending quota) is 200, and the
     * maximum number of emails you can send per second (your maximum sending rate) is
     * 1.</p> <p>If the value is <code>true</code>, then your account has production
     * access. When your account has production access, you can send email to any
     * address. The sending quota and maximum sending rate for your account vary based
     * on your specific use case.</p>
     */
    inline PutAccountDetailsRequest& WithProductionAccessEnabled(bool value) { SetProductionAccessEnabled(value); return *this;}

  private:

    MailType m_mailType;
    bool m_mailTypeHasBeenSet = false;

    Aws::String m_websiteURL;
    bool m_websiteURLHasBeenSet = false;

    ContactLanguage m_contactLanguage;
    bool m_contactLanguageHasBeenSet = false;

    Aws::String m_useCaseDescription;
    bool m_useCaseDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalContactEmailAddresses;
    bool m_additionalContactEmailAddressesHasBeenSet = false;

    bool m_productionAccessEnabled;
    bool m_productionAccessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
