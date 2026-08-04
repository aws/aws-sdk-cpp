/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains customer information included in a lead invitation payload. This
 * structure provides essential details about the customer to help partners
 * evaluate the lead opportunity and determine their interest in
 * engagement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadInvitationCustomer">AWS
 * API Reference</a></p>
 */
class LeadInvitationCustomer {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadInvitationCustomer() = default;
  AWS_PARTNERCENTRALSELLING_API LeadInvitationCustomer(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadInvitationCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the industry sector of the customer company associated with the
   * lead invitation. This categorization helps partners understand the customer's
   * business context and assess solution fit.</p>
   */
  inline const Aws::String& GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  template <typename IndustryT = Aws::String>
  void SetIndustry(IndustryT&& value) {
    m_industryHasBeenSet = true;
    m_industry = std::forward<IndustryT>(value);
  }
  template <typename IndustryT = Aws::String>
  LeadInvitationCustomer& WithIndustry(IndustryT&& value) {
    SetIndustry(std::forward<IndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the customer company associated with the lead invitation. This
   * field identifies the target organization for the lead engagement
   * opportunity.</p>
   */
  inline const Aws::String& GetCompanyName() const { return m_companyName; }
  inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
  template <typename CompanyNameT = Aws::String>
  void SetCompanyName(CompanyNameT&& value) {
    m_companyNameHasBeenSet = true;
    m_companyName = std::forward<CompanyNameT>(value);
  }
  template <typename CompanyNameT = Aws::String>
  LeadInvitationCustomer& WithCompanyName(CompanyNameT&& value) {
    SetCompanyName(std::forward<CompanyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The website URL of the customer company. This provides additional context
   * about the customer organization and helps partners verify company details and
   * assess business size and legitimacy.</p>
   */
  inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
  inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
  template <typename WebsiteUrlT = Aws::String>
  void SetWebsiteUrl(WebsiteUrlT&& value) {
    m_websiteUrlHasBeenSet = true;
    m_websiteUrl = std::forward<WebsiteUrlT>(value);
  }
  template <typename WebsiteUrlT = Aws::String>
  LeadInvitationCustomer& WithWebsiteUrl(WebsiteUrlT&& value) {
    SetWebsiteUrl(std::forward<WebsiteUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country code indicating the geographic location of the customer company.
   * This information helps partners understand regional requirements and assess
   * their ability to serve the customer effectively.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  LeadInvitationCustomer& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the customer's level of experience and adoption with AWS services.
   * This assessment helps partners understand the customer's cloud maturity and
   * tailor their engagement approach accordingly.</p>
   */
  inline const Aws::String& GetAwsMaturity() const { return m_awsMaturity; }
  inline bool AwsMaturityHasBeenSet() const { return m_awsMaturityHasBeenSet; }
  template <typename AwsMaturityT = Aws::String>
  void SetAwsMaturity(AwsMaturityT&& value) {
    m_awsMaturityHasBeenSet = true;
    m_awsMaturity = std::forward<AwsMaturityT>(value);
  }
  template <typename AwsMaturityT = Aws::String>
  LeadInvitationCustomer& WithAwsMaturity(AwsMaturityT&& value) {
    SetAwsMaturity(std::forward<AwsMaturityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the market segment classification of the customer, such as
   * enterprise, mid-market, or small business. This segmentation helps partners
   * determine the appropriate solution complexity and engagement strategy.</p>
   */
  inline const Aws::String& GetMarketSegment() const { return m_marketSegment; }
  inline bool MarketSegmentHasBeenSet() const { return m_marketSegmentHasBeenSet; }
  template <typename MarketSegmentT = Aws::String>
  void SetMarketSegment(MarketSegmentT&& value) {
    m_marketSegmentHasBeenSet = true;
    m_marketSegment = std::forward<MarketSegmentT>(value);
  }
  template <typename MarketSegmentT = Aws::String>
  LeadInvitationCustomer& WithMarketSegment(MarketSegmentT&& value) {
    SetMarketSegment(std::forward<MarketSegmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_industry;

  Aws::String m_companyName;

  Aws::String m_websiteUrl;

  Aws::String m_countryCode;

  Aws::String m_awsMaturity;

  Aws::String m_marketSegment;
  bool m_industryHasBeenSet = false;
  bool m_companyNameHasBeenSet = false;
  bool m_websiteUrlHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
  bool m_awsMaturityHasBeenSet = false;
  bool m_marketSegmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
