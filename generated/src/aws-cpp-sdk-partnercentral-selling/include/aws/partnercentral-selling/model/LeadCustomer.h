/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AddressSummary.h>
#include <aws/partnercentral-selling/model/Industry.h>
#include <aws/partnercentral-selling/model/MarketSegment.h>

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
 * <p>Contains detailed information about the customer associated with the lead,
 * including company details, industry classification, and AWS maturity level. This
 * information helps qualify and categorize the lead for appropriate engagement
 * strategies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LeadCustomer">AWS
 * API Reference</a></p>
 */
class LeadCustomer {
 public:
  AWS_PARTNERCENTRALSELLING_API LeadCustomer() = default;
  AWS_PARTNERCENTRALSELLING_API LeadCustomer(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API LeadCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the industry sector to which the lead customer's company belongs.
   * This categorization helps in understanding the customer's business context and
   * tailoring appropriate solutions.</p>
   */
  inline Industry GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  inline void SetIndustry(Industry value) {
    m_industryHasBeenSet = true;
    m_industry = value;
  }
  inline LeadCustomer& WithIndustry(Industry value) {
    SetIndustry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the lead customer's company. This field is essential for
   * identifying and tracking the customer organization associated with the lead.</p>
   */
  inline const Aws::String& GetCompanyName() const { return m_companyName; }
  inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
  template <typename CompanyNameT = Aws::String>
  void SetCompanyName(CompanyNameT&& value) {
    m_companyNameHasBeenSet = true;
    m_companyName = std::forward<CompanyNameT>(value);
  }
  template <typename CompanyNameT = Aws::String>
  LeadCustomer& WithCompanyName(CompanyNameT&& value) {
    SetCompanyName(std::forward<CompanyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The website URL of the lead customer's company. This provides additional
   * context about the customer organization and helps verify company legitimacy and
   * size.</p>
   */
  inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
  inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
  template <typename WebsiteUrlT = Aws::String>
  void SetWebsiteUrl(WebsiteUrlT&& value) {
    m_websiteUrlHasBeenSet = true;
    m_websiteUrl = std::forward<WebsiteUrlT>(value);
  }
  template <typename WebsiteUrlT = Aws::String>
  LeadCustomer& WithWebsiteUrl(WebsiteUrlT&& value) {
    SetWebsiteUrl(std::forward<WebsiteUrlT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AddressSummary& GetAddress() const { return m_address; }
  inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
  template <typename AddressT = AddressSummary>
  void SetAddress(AddressT&& value) {
    m_addressHasBeenSet = true;
    m_address = std::forward<AddressT>(value);
  }
  template <typename AddressT = AddressSummary>
  LeadCustomer& WithAddress(AddressT&& value) {
    SetAddress(std::forward<AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the customer's level of experience and adoption with AWS services.
   * This assessment helps determine the appropriate engagement approach and solution
   * complexity.</p>
   */
  inline const Aws::String& GetAwsMaturity() const { return m_awsMaturity; }
  inline bool AwsMaturityHasBeenSet() const { return m_awsMaturityHasBeenSet; }
  template <typename AwsMaturityT = Aws::String>
  void SetAwsMaturity(AwsMaturityT&& value) {
    m_awsMaturityHasBeenSet = true;
    m_awsMaturity = std::forward<AwsMaturityT>(value);
  }
  template <typename AwsMaturityT = Aws::String>
  LeadCustomer& WithAwsMaturity(AwsMaturityT&& value) {
    SetAwsMaturity(std::forward<AwsMaturityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the market segment classification of the lead customer, such as
   * enterprise, mid-market, or small business. This segmentation helps in targeting
   * appropriate solutions and engagement strategies.</p>
   */
  inline MarketSegment GetMarketSegment() const { return m_marketSegment; }
  inline bool MarketSegmentHasBeenSet() const { return m_marketSegmentHasBeenSet; }
  inline void SetMarketSegment(MarketSegment value) {
    m_marketSegmentHasBeenSet = true;
    m_marketSegment = value;
  }
  inline LeadCustomer& WithMarketSegment(MarketSegment value) {
    SetMarketSegment(value);
    return *this;
  }
  ///@}
 private:
  Industry m_industry{Industry::NOT_SET};
  bool m_industryHasBeenSet = false;

  Aws::String m_companyName;
  bool m_companyNameHasBeenSet = false;

  Aws::String m_websiteUrl;
  bool m_websiteUrlHasBeenSet = false;

  AddressSummary m_address;
  bool m_addressHasBeenSet = false;

  Aws::String m_awsMaturity;
  bool m_awsMaturityHasBeenSet = false;

  MarketSegment m_marketSegment{MarketSegment::NOT_SET};
  bool m_marketSegmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
