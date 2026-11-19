/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Industry.h>
#include <aws/partnercentral-selling/model/OpportunitySearchAddress.h>

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
 * <p>Contains the end customer account fields (company name, industry, AWS account
 * ID, and address) returned for an opportunity in search results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchAccount">AWS
 * API Reference</a></p>
 */
class OpportunitySearchAccount {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAccount() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAccount(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the end customer company on the opportunity.</p>
   */
  inline const Aws::String& GetCompanyName() const { return m_companyName; }
  inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
  template <typename CompanyNameT = Aws::String>
  void SetCompanyName(CompanyNameT&& value) {
    m_companyNameHasBeenSet = true;
    m_companyName = std::forward<CompanyNameT>(value);
  }
  template <typename CompanyNameT = Aws::String>
  OpportunitySearchAccount& WithCompanyName(CompanyNameT&& value) {
    SetCompanyName(std::forward<CompanyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The industry of the end customer on the opportunity.</p>
   */
  inline Industry GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  inline void SetIndustry(Industry value) {
    m_industryHasBeenSet = true;
    m_industry = value;
  }
  inline OpportunitySearchAccount& WithIndustry(Industry value) {
    SetIndustry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end customer company's AWS account ID, if known or available.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  OpportunitySearchAccount& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end customer address details for the opportunity.</p>
   */
  inline const OpportunitySearchAddress& GetAddress() const { return m_address; }
  inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
  template <typename AddressT = OpportunitySearchAddress>
  void SetAddress(AddressT&& value) {
    m_addressHasBeenSet = true;
    m_address = std::forward<AddressT>(value);
  }
  template <typename AddressT = OpportunitySearchAddress>
  OpportunitySearchAccount& WithAddress(AddressT&& value) {
    SetAddress(std::forward<AddressT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_companyName;

  Industry m_industry{Industry::NOT_SET};

  Aws::String m_awsAccountId;

  OpportunitySearchAddress m_address;
  bool m_companyNameHasBeenSet = false;
  bool m_industryHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_addressHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
