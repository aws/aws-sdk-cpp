/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Address.h>

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
 * <p>The customer information that you provide for a customer account, such as the
 * company name, website, and address. We use these details to match the account to
 * a customer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerAccountData">AWS
 * API Reference</a></p>
 */
class CustomerAccountData {
 public:
  AWS_PARTNERCENTRALSELLING_API CustomerAccountData() = default;
  AWS_PARTNERCENTRALSELLING_API CustomerAccountData(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API CustomerAccountData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  CustomerAccountData& WithCompanyName(CompanyNameT&& value) {
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
  CustomerAccountData& WithWebsiteUrl(WebsiteUrlT&& value) {
    SetWebsiteUrl(std::forward<WebsiteUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Data Universal Numbering System (DUNS) number of the customer
   * company.</p>
   */
  inline const Aws::String& GetDuns() const { return m_duns; }
  inline bool DunsHasBeenSet() const { return m_dunsHasBeenSet; }
  template <typename DunsT = Aws::String>
  void SetDuns(DunsT&& value) {
    m_dunsHasBeenSet = true;
    m_duns = std::forward<DunsT>(value);
  }
  template <typename DunsT = Aws::String>
  CustomerAccountData& WithDuns(DunsT&& value) {
    SetDuns(std::forward<DunsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address of the customer company.</p>
   */
  inline const Address& GetAddress() const { return m_address; }
  inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
  template <typename AddressT = Address>
  void SetAddress(AddressT&& value) {
    m_addressHasBeenSet = true;
    m_address = std::forward<AddressT>(value);
  }
  template <typename AddressT = Address>
  CustomerAccountData& WithAddress(AddressT&& value) {
    SetAddress(std::forward<AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The industry of the customer company.</p>
   */
  inline const Aws::String& GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  template <typename IndustryT = Aws::String>
  void SetIndustry(IndustryT&& value) {
    m_industryHasBeenSet = true;
    m_industry = std::forward<IndustryT>(value);
  }
  template <typename IndustryT = Aws::String>
  CustomerAccountData& WithIndustry(IndustryT&& value) {
    SetIndustry(std::forward<IndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the industry, used when the industry is
   * <code>Other</code>.</p>
   */
  inline const Aws::String& GetOtherIndustry() const { return m_otherIndustry; }
  inline bool OtherIndustryHasBeenSet() const { return m_otherIndustryHasBeenSet; }
  template <typename OtherIndustryT = Aws::String>
  void SetOtherIndustry(OtherIndustryT&& value) {
    m_otherIndustryHasBeenSet = true;
    m_otherIndustry = std::forward<OtherIndustryT>(value);
  }
  template <typename OtherIndustryT = Aws::String>
  CustomerAccountData& WithOtherIndustry(OtherIndustryT&& value) {
    SetOtherIndustry(std::forward<OtherIndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The internet domain of the customer company, such as
   * <code>example.com</code>.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  CustomerAccountData& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the parent company of the customer company, if any.</p>
   */
  inline const Aws::String& GetParentCompanyName() const { return m_parentCompanyName; }
  inline bool ParentCompanyNameHasBeenSet() const { return m_parentCompanyNameHasBeenSet; }
  template <typename ParentCompanyNameT = Aws::String>
  void SetParentCompanyName(ParentCompanyNameT&& value) {
    m_parentCompanyNameHasBeenSet = true;
    m_parentCompanyName = std::forward<ParentCompanyNameT>(value);
  }
  template <typename ParentCompanyNameT = Aws::String>
  CustomerAccountData& WithParentCompanyName(ParentCompanyNameT&& value) {
    SetParentCompanyName(std::forward<ParentCompanyNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_companyName;

  Aws::String m_websiteUrl;

  Aws::String m_duns;

  Address m_address;

  Aws::String m_industry;

  Aws::String m_otherIndustry;

  Aws::String m_domain;

  Aws::String m_parentCompanyName;
  bool m_companyNameHasBeenSet = false;
  bool m_websiteUrlHasBeenSet = false;
  bool m_dunsHasBeenSet = false;
  bool m_addressHasBeenSet = false;
  bool m_industryHasBeenSet = false;
  bool m_otherIndustryHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_parentCompanyNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
