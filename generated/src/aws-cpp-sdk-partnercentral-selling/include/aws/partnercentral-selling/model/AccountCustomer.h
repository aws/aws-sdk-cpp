/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CountryCode.h>

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
 * <p>A snapshot of the customer company's identity for an account-planning
 * engagement. The caller can supply these details so that an account can be
 * identified even when it isn't yet mapped to an AWS account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AccountCustomer">AWS
 * API Reference</a></p>
 */
class AccountCustomer {
 public:
  AWS_PARTNERCENTRALSELLING_API AccountCustomer() = default;
  AWS_PARTNERCENTRALSELLING_API AccountCustomer(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AccountCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The industry classification of the customer company.</p>
   */
  inline const Aws::String& GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  template <typename IndustryT = Aws::String>
  void SetIndustry(IndustryT&& value) {
    m_industryHasBeenSet = true;
    m_industry = std::forward<IndustryT>(value);
  }
  template <typename IndustryT = Aws::String>
  AccountCustomer& WithIndustry(IndustryT&& value) {
    SetIndustry(std::forward<IndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the customer company.</p>
   */
  inline const Aws::String& GetCompanyName() const { return m_companyName; }
  inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
  template <typename CompanyNameT = Aws::String>
  void SetCompanyName(CompanyNameT&& value) {
    m_companyNameHasBeenSet = true;
    m_companyName = std::forward<CompanyNameT>(value);
  }
  template <typename CompanyNameT = Aws::String>
  AccountCustomer& WithCompanyName(CompanyNameT&& value) {
    SetCompanyName(std::forward<CompanyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The website URL of the customer company.</p>
   */
  inline const Aws::String& GetWebsiteUrl() const { return m_websiteUrl; }
  inline bool WebsiteUrlHasBeenSet() const { return m_websiteUrlHasBeenSet; }
  template <typename WebsiteUrlT = Aws::String>
  void SetWebsiteUrl(WebsiteUrlT&& value) {
    m_websiteUrlHasBeenSet = true;
    m_websiteUrl = std::forward<WebsiteUrlT>(value);
  }
  template <typename WebsiteUrlT = Aws::String>
  AccountCustomer& WithWebsiteUrl(WebsiteUrlT&& value) {
    SetWebsiteUrl(std::forward<WebsiteUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country of the customer company, as an ISO 3166-1 alpha-2 country
   * code.</p>
   */
  inline CountryCode GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  inline void SetCountryCode(CountryCode value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = value;
  }
  inline AccountCustomer& WithCountryCode(CountryCode value) {
    SetCountryCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_industry;

  Aws::String m_companyName;

  Aws::String m_websiteUrl;

  CountryCode m_countryCode{CountryCode::NOT_SET};
  bool m_industryHasBeenSet = false;
  bool m_companyNameHasBeenSet = false;
  bool m_websiteUrlHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
