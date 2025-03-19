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
    AWS_SESV2_API PutAccountDetailsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountDetails"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of email your account will send.</p>
     */
    inline MailType GetMailType() const { return m_mailType; }
    inline bool MailTypeHasBeenSet() const { return m_mailTypeHasBeenSet; }
    inline void SetMailType(MailType value) { m_mailTypeHasBeenSet = true; m_mailType = value; }
    inline PutAccountDetailsRequest& WithMailType(MailType value) { SetMailType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of your website. This information helps us better understand the type
     * of content that you plan to send.</p>
     */
    inline const Aws::String& GetWebsiteURL() const { return m_websiteURL; }
    inline bool WebsiteURLHasBeenSet() const { return m_websiteURLHasBeenSet; }
    template<typename WebsiteURLT = Aws::String>
    void SetWebsiteURL(WebsiteURLT&& value) { m_websiteURLHasBeenSet = true; m_websiteURL = std::forward<WebsiteURLT>(value); }
    template<typename WebsiteURLT = Aws::String>
    PutAccountDetailsRequest& WithWebsiteURL(WebsiteURLT&& value) { SetWebsiteURL(std::forward<WebsiteURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language you would prefer to be contacted with.</p>
     */
    inline ContactLanguage GetContactLanguage() const { return m_contactLanguage; }
    inline bool ContactLanguageHasBeenSet() const { return m_contactLanguageHasBeenSet; }
    inline void SetContactLanguage(ContactLanguage value) { m_contactLanguageHasBeenSet = true; m_contactLanguage = value; }
    inline PutAccountDetailsRequest& WithContactLanguage(ContactLanguage value) { SetContactLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the types of email that you plan to send.</p>
     */
    inline const Aws::String& GetUseCaseDescription() const { return m_useCaseDescription; }
    inline bool UseCaseDescriptionHasBeenSet() const { return m_useCaseDescriptionHasBeenSet; }
    template<typename UseCaseDescriptionT = Aws::String>
    void SetUseCaseDescription(UseCaseDescriptionT&& value) { m_useCaseDescriptionHasBeenSet = true; m_useCaseDescription = std::forward<UseCaseDescriptionT>(value); }
    template<typename UseCaseDescriptionT = Aws::String>
    PutAccountDetailsRequest& WithUseCaseDescription(UseCaseDescriptionT&& value) { SetUseCaseDescription(std::forward<UseCaseDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional email addresses that you would like to be notified regarding
     * Amazon SES matters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalContactEmailAddresses() const { return m_additionalContactEmailAddresses; }
    inline bool AdditionalContactEmailAddressesHasBeenSet() const { return m_additionalContactEmailAddressesHasBeenSet; }
    template<typename AdditionalContactEmailAddressesT = Aws::Vector<Aws::String>>
    void SetAdditionalContactEmailAddresses(AdditionalContactEmailAddressesT&& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses = std::forward<AdditionalContactEmailAddressesT>(value); }
    template<typename AdditionalContactEmailAddressesT = Aws::Vector<Aws::String>>
    PutAccountDetailsRequest& WithAdditionalContactEmailAddresses(AdditionalContactEmailAddressesT&& value) { SetAdditionalContactEmailAddresses(std::forward<AdditionalContactEmailAddressesT>(value)); return *this;}
    template<typename AdditionalContactEmailAddressesT = Aws::String>
    PutAccountDetailsRequest& AddAdditionalContactEmailAddresses(AdditionalContactEmailAddressesT&& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses.emplace_back(std::forward<AdditionalContactEmailAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not your account should have production access in the
     * current Amazon Web Services Region.</p> <p>If the value is <code>false</code>,
     * then your account is in the <i>sandbox</i>. When your account is in the sandbox,
     * you can only send email to verified identities. </p> <p>If the value is
     * <code>true</code>, then your account has production access. When your account
     * has production access, you can send email to any address. The sending quota and
     * maximum sending rate for your account vary based on your specific use case.</p>
     */
    inline bool GetProductionAccessEnabled() const { return m_productionAccessEnabled; }
    inline bool ProductionAccessEnabledHasBeenSet() const { return m_productionAccessEnabledHasBeenSet; }
    inline void SetProductionAccessEnabled(bool value) { m_productionAccessEnabledHasBeenSet = true; m_productionAccessEnabled = value; }
    inline PutAccountDetailsRequest& WithProductionAccessEnabled(bool value) { SetProductionAccessEnabled(value); return *this;}
    ///@}
  private:

    MailType m_mailType{MailType::NOT_SET};
    bool m_mailTypeHasBeenSet = false;

    Aws::String m_websiteURL;
    bool m_websiteURLHasBeenSet = false;

    ContactLanguage m_contactLanguage{ContactLanguage::NOT_SET};
    bool m_contactLanguageHasBeenSet = false;

    Aws::String m_useCaseDescription;
    bool m_useCaseDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalContactEmailAddresses;
    bool m_additionalContactEmailAddressesHasBeenSet = false;

    bool m_productionAccessEnabled{false};
    bool m_productionAccessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
