/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/CreditCode.h>
#include <aws/partnercentral-benefits/model/MonetaryValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>Contains information about credit-based benefit fulfillment, including AWS
 * promotional credits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/CreditDetails">AWS
 * API Reference</a></p>
 */
class CreditDetails {
 public:
  AWS_PARTNERCENTRALBENEFITS_API CreditDetails() = default;
  AWS_PARTNERCENTRALBENEFITS_API CreditDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API CreditDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total amount of credits that have been allocated for this benefit.</p>
   */
  inline const MonetaryValue& GetAllocatedAmount() const { return m_allocatedAmount; }
  inline bool AllocatedAmountHasBeenSet() const { return m_allocatedAmountHasBeenSet; }
  template <typename AllocatedAmountT = MonetaryValue>
  void SetAllocatedAmount(AllocatedAmountT&& value) {
    m_allocatedAmountHasBeenSet = true;
    m_allocatedAmount = std::forward<AllocatedAmountT>(value);
  }
  template <typename AllocatedAmountT = MonetaryValue>
  CreditDetails& WithAllocatedAmount(AllocatedAmountT&& value) {
    SetAllocatedAmount(std::forward<AllocatedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of credits that have actually been issued and are available for
   * use.</p>
   */
  inline const MonetaryValue& GetIssuedAmount() const { return m_issuedAmount; }
  inline bool IssuedAmountHasBeenSet() const { return m_issuedAmountHasBeenSet; }
  template <typename IssuedAmountT = MonetaryValue>
  void SetIssuedAmount(IssuedAmountT&& value) {
    m_issuedAmountHasBeenSet = true;
    m_issuedAmount = std::forward<IssuedAmountT>(value);
  }
  template <typename IssuedAmountT = MonetaryValue>
  CreditDetails& WithIssuedAmount(IssuedAmountT&& value) {
    SetIssuedAmount(std::forward<IssuedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of credit codes that have been generated for this benefit
   * allocation.</p>
   */
  inline const Aws::Vector<CreditCode>& GetCodes() const { return m_codes; }
  inline bool CodesHasBeenSet() const { return m_codesHasBeenSet; }
  template <typename CodesT = Aws::Vector<CreditCode>>
  void SetCodes(CodesT&& value) {
    m_codesHasBeenSet = true;
    m_codes = std::forward<CodesT>(value);
  }
  template <typename CodesT = Aws::Vector<CreditCode>>
  CreditDetails& WithCodes(CodesT&& value) {
    SetCodes(std::forward<CodesT>(value));
    return *this;
  }
  template <typename CodesT = CreditCode>
  CreditDetails& AddCodes(CodesT&& value) {
    m_codesHasBeenSet = true;
    m_codes.emplace_back(std::forward<CodesT>(value));
    return *this;
  }
  ///@}
 private:
  MonetaryValue m_allocatedAmount;

  MonetaryValue m_issuedAmount;

  Aws::Vector<CreditCode> m_codes;
  bool m_allocatedAmountHasBeenSet = false;
  bool m_issuedAmountHasBeenSet = false;
  bool m_codesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
