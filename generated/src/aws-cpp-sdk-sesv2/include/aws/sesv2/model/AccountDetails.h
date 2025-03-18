/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/MailType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ContactLanguage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/ReviewDetails.h>
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
   * <p>An object that contains information about your account details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/AccountDetails">AWS
   * API Reference</a></p>
   */
  class AccountDetails
  {
  public:
    AWS_SESV2_API AccountDetails() = default;
    AWS_SESV2_API AccountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API AccountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of email your account is sending. The mail type can be one of the
     * following:</p> <ul> <li> <p> <code>MARKETING</code> – Most of your sending
     * traffic is to keep your customers informed of your latest offering.</p> </li>
     * <li> <p> <code>TRANSACTIONAL</code> – Most of your sending traffic is to
     * communicate during a transaction with a customer.</p> </li> </ul>
     */
    inline MailType GetMailType() const { return m_mailType; }
    inline bool MailTypeHasBeenSet() const { return m_mailTypeHasBeenSet; }
    inline void SetMailType(MailType value) { m_mailTypeHasBeenSet = true; m_mailType = value; }
    inline AccountDetails& WithMailType(MailType value) { SetMailType(value); return *this;}
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
    AccountDetails& WithWebsiteURL(WebsiteURLT&& value) { SetWebsiteURL(std::forward<WebsiteURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language you would prefer for the case. The contact language can be one
     * of <code>ENGLISH</code> or <code>JAPANESE</code>.</p>
     */
    inline ContactLanguage GetContactLanguage() const { return m_contactLanguage; }
    inline bool ContactLanguageHasBeenSet() const { return m_contactLanguageHasBeenSet; }
    inline void SetContactLanguage(ContactLanguage value) { m_contactLanguageHasBeenSet = true; m_contactLanguage = value; }
    inline AccountDetails& WithContactLanguage(ContactLanguage value) { SetContactLanguage(value); return *this;}
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
    AccountDetails& WithUseCaseDescription(UseCaseDescriptionT&& value) { SetUseCaseDescription(std::forward<UseCaseDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional email addresses where updates are sent about your account review
     * process.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalContactEmailAddresses() const { return m_additionalContactEmailAddresses; }
    inline bool AdditionalContactEmailAddressesHasBeenSet() const { return m_additionalContactEmailAddressesHasBeenSet; }
    template<typename AdditionalContactEmailAddressesT = Aws::Vector<Aws::String>>
    void SetAdditionalContactEmailAddresses(AdditionalContactEmailAddressesT&& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses = std::forward<AdditionalContactEmailAddressesT>(value); }
    template<typename AdditionalContactEmailAddressesT = Aws::Vector<Aws::String>>
    AccountDetails& WithAdditionalContactEmailAddresses(AdditionalContactEmailAddressesT&& value) { SetAdditionalContactEmailAddresses(std::forward<AdditionalContactEmailAddressesT>(value)); return *this;}
    template<typename AdditionalContactEmailAddressesT = Aws::String>
    AccountDetails& AddAdditionalContactEmailAddresses(AdditionalContactEmailAddressesT&& value) { m_additionalContactEmailAddressesHasBeenSet = true; m_additionalContactEmailAddresses.emplace_back(std::forward<AdditionalContactEmailAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the review of the latest details you submitted.</p>
     */
    inline const ReviewDetails& GetReviewDetails() const { return m_reviewDetails; }
    inline bool ReviewDetailsHasBeenSet() const { return m_reviewDetailsHasBeenSet; }
    template<typename ReviewDetailsT = ReviewDetails>
    void SetReviewDetails(ReviewDetailsT&& value) { m_reviewDetailsHasBeenSet = true; m_reviewDetails = std::forward<ReviewDetailsT>(value); }
    template<typename ReviewDetailsT = ReviewDetails>
    AccountDetails& WithReviewDetails(ReviewDetailsT&& value) { SetReviewDetails(std::forward<ReviewDetailsT>(value)); return *this;}
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

    ReviewDetails m_reviewDetails;
    bool m_reviewDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
