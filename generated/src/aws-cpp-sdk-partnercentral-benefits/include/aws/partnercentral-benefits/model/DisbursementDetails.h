/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/IssuanceDetail.h>
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
 * <p>Contains information about disbursement-based benefit fulfillment, such as
 * direct payments or reimbursements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/DisbursementDetails">AWS
 * API Reference</a></p>
 */
class DisbursementDetails {
 public:
  AWS_PARTNERCENTRALBENEFITS_API DisbursementDetails() = default;
  AWS_PARTNERCENTRALBENEFITS_API DisbursementDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API DisbursementDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total amount that has been disbursed for this benefit allocation.</p>
   */
  inline const MonetaryValue& GetDisbursedAmount() const { return m_disbursedAmount; }
  inline bool DisbursedAmountHasBeenSet() const { return m_disbursedAmountHasBeenSet; }
  template <typename DisbursedAmountT = MonetaryValue>
  void SetDisbursedAmount(DisbursedAmountT&& value) {
    m_disbursedAmountHasBeenSet = true;
    m_disbursedAmount = std::forward<DisbursedAmountT>(value);
  }
  template <typename DisbursedAmountT = MonetaryValue>
  DisbursementDetails& WithDisbursedAmount(DisbursedAmountT&& value) {
    SetDisbursedAmount(std::forward<DisbursedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about how the disbursement was issued and processed.</p>
   */
  inline const IssuanceDetail& GetIssuanceDetails() const { return m_issuanceDetails; }
  inline bool IssuanceDetailsHasBeenSet() const { return m_issuanceDetailsHasBeenSet; }
  template <typename IssuanceDetailsT = IssuanceDetail>
  void SetIssuanceDetails(IssuanceDetailsT&& value) {
    m_issuanceDetailsHasBeenSet = true;
    m_issuanceDetails = std::forward<IssuanceDetailsT>(value);
  }
  template <typename IssuanceDetailsT = IssuanceDetail>
  DisbursementDetails& WithIssuanceDetails(IssuanceDetailsT&& value) {
    SetIssuanceDetails(std::forward<IssuanceDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  MonetaryValue m_disbursedAmount;

  IssuanceDetail m_issuanceDetails;
  bool m_disbursedAmountHasBeenSet = false;
  bool m_issuanceDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
