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
 * <p>The customer information for an account in search results. It carries a
 * reduced set of fields compared to the full customer information that
 * <code>GetCustomerAccount</code> returns, omitting sensitive fields such as the
 * Data Universal Numbering System (DUNS) number and the street address. To read
 * those fields, use <code>GetCustomerAccount</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerAccountDetailsSummary">AWS
 * API Reference</a></p>
 */
class CustomerAccountDetailsSummary {
 public:
  AWS_PARTNERCENTRALSELLING_API CustomerAccountDetailsSummary() = default;
  AWS_PARTNERCENTRALSELLING_API CustomerAccountDetailsSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API CustomerAccountDetailsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CustomerAccountDetailsSummary& WithCompanyName(CompanyNameT&& value) {
    SetCompanyName(std::forward<CompanyNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_companyName;
  bool m_companyNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
