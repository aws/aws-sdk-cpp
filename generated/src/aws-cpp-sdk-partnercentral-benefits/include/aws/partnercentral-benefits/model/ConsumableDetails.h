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
 * <p>Contains information about consumable benefit fulfillment, such as usage
 * quotas or service limits.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/ConsumableDetails">AWS
 * API Reference</a></p>
 */
class ConsumableDetails {
 public:
  AWS_PARTNERCENTRALBENEFITS_API ConsumableDetails() = default;
  AWS_PARTNERCENTRALBENEFITS_API ConsumableDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API ConsumableDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total amount of the consumable benefit that has been allocated.</p>
   */
  inline const MonetaryValue& GetAllocatedAmount() const { return m_allocatedAmount; }
  inline bool AllocatedAmountHasBeenSet() const { return m_allocatedAmountHasBeenSet; }
  template <typename AllocatedAmountT = MonetaryValue>
  void SetAllocatedAmount(AllocatedAmountT&& value) {
    m_allocatedAmountHasBeenSet = true;
    m_allocatedAmount = std::forward<AllocatedAmountT>(value);
  }
  template <typename AllocatedAmountT = MonetaryValue>
  ConsumableDetails& WithAllocatedAmount(AllocatedAmountT&& value) {
    SetAllocatedAmount(std::forward<AllocatedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remaining amount of the consumable benefit that is still available for
   * use.</p>
   */
  inline const MonetaryValue& GetRemainingAmount() const { return m_remainingAmount; }
  inline bool RemainingAmountHasBeenSet() const { return m_remainingAmountHasBeenSet; }
  template <typename RemainingAmountT = MonetaryValue>
  void SetRemainingAmount(RemainingAmountT&& value) {
    m_remainingAmountHasBeenSet = true;
    m_remainingAmount = std::forward<RemainingAmountT>(value);
  }
  template <typename RemainingAmountT = MonetaryValue>
  ConsumableDetails& WithRemainingAmount(RemainingAmountT&& value) {
    SetRemainingAmount(std::forward<RemainingAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of the consumable benefit that has already been used.</p>
   */
  inline const MonetaryValue& GetUtilizedAmount() const { return m_utilizedAmount; }
  inline bool UtilizedAmountHasBeenSet() const { return m_utilizedAmountHasBeenSet; }
  template <typename UtilizedAmountT = MonetaryValue>
  void SetUtilizedAmount(UtilizedAmountT&& value) {
    m_utilizedAmountHasBeenSet = true;
    m_utilizedAmount = std::forward<UtilizedAmountT>(value);
  }
  template <typename UtilizedAmountT = MonetaryValue>
  ConsumableDetails& WithUtilizedAmount(UtilizedAmountT&& value) {
    SetUtilizedAmount(std::forward<UtilizedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information about how the consumable benefit was issued and
   * distributed.</p>
   */
  inline const IssuanceDetail& GetIssuanceDetails() const { return m_issuanceDetails; }
  inline bool IssuanceDetailsHasBeenSet() const { return m_issuanceDetailsHasBeenSet; }
  template <typename IssuanceDetailsT = IssuanceDetail>
  void SetIssuanceDetails(IssuanceDetailsT&& value) {
    m_issuanceDetailsHasBeenSet = true;
    m_issuanceDetails = std::forward<IssuanceDetailsT>(value);
  }
  template <typename IssuanceDetailsT = IssuanceDetail>
  ConsumableDetails& WithIssuanceDetails(IssuanceDetailsT&& value) {
    SetIssuanceDetails(std::forward<IssuanceDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  MonetaryValue m_allocatedAmount;

  MonetaryValue m_remainingAmount;

  MonetaryValue m_utilizedAmount;

  IssuanceDetail m_issuanceDetails;
  bool m_allocatedAmountHasBeenSet = false;
  bool m_remainingAmountHasBeenSet = false;
  bool m_utilizedAmountHasBeenSet = false;
  bool m_issuanceDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
