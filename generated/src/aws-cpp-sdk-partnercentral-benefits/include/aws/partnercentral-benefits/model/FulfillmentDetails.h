/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/AccessDetails.h>
#include <aws/partnercentral-benefits/model/ConsumableDetails.h>
#include <aws/partnercentral-benefits/model/CreditDetails.h>
#include <aws/partnercentral-benefits/model/DisbursementDetails.h>

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
 * <p>Contains comprehensive information about how a benefit allocation is
 * fulfilled across different fulfillment types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/FulfillmentDetails">AWS
 * API Reference</a></p>
 */
class FulfillmentDetails {
 public:
  AWS_PARTNERCENTRALBENEFITS_API FulfillmentDetails() = default;
  AWS_PARTNERCENTRALBENEFITS_API FulfillmentDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API FulfillmentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about disbursement-based fulfillment, if applicable to this benefit
   * allocation.</p>
   */
  inline const DisbursementDetails& GetDisbursementDetails() const { return m_disbursementDetails; }
  inline bool DisbursementDetailsHasBeenSet() const { return m_disbursementDetailsHasBeenSet; }
  template <typename DisbursementDetailsT = DisbursementDetails>
  void SetDisbursementDetails(DisbursementDetailsT&& value) {
    m_disbursementDetailsHasBeenSet = true;
    m_disbursementDetails = std::forward<DisbursementDetailsT>(value);
  }
  template <typename DisbursementDetailsT = DisbursementDetails>
  FulfillmentDetails& WithDisbursementDetails(DisbursementDetailsT&& value) {
    SetDisbursementDetails(std::forward<DisbursementDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about consumable-based fulfillment, if applicable to this benefit
   * allocation.</p>
   */
  inline const ConsumableDetails& GetConsumableDetails() const { return m_consumableDetails; }
  inline bool ConsumableDetailsHasBeenSet() const { return m_consumableDetailsHasBeenSet; }
  template <typename ConsumableDetailsT = ConsumableDetails>
  void SetConsumableDetails(ConsumableDetailsT&& value) {
    m_consumableDetailsHasBeenSet = true;
    m_consumableDetails = std::forward<ConsumableDetailsT>(value);
  }
  template <typename ConsumableDetailsT = ConsumableDetails>
  FulfillmentDetails& WithConsumableDetails(ConsumableDetailsT&& value) {
    SetConsumableDetails(std::forward<ConsumableDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about credit-based fulfillment, if applicable to this benefit
   * allocation.</p>
   */
  inline const CreditDetails& GetCreditDetails() const { return m_creditDetails; }
  inline bool CreditDetailsHasBeenSet() const { return m_creditDetailsHasBeenSet; }
  template <typename CreditDetailsT = CreditDetails>
  void SetCreditDetails(CreditDetailsT&& value) {
    m_creditDetailsHasBeenSet = true;
    m_creditDetails = std::forward<CreditDetailsT>(value);
  }
  template <typename CreditDetailsT = CreditDetails>
  FulfillmentDetails& WithCreditDetails(CreditDetailsT&& value) {
    SetCreditDetails(std::forward<CreditDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about access-based fulfillment, if applicable to this benefit
   * allocation.</p>
   */
  inline const AccessDetails& GetAccessDetails() const { return m_accessDetails; }
  inline bool AccessDetailsHasBeenSet() const { return m_accessDetailsHasBeenSet; }
  template <typename AccessDetailsT = AccessDetails>
  void SetAccessDetails(AccessDetailsT&& value) {
    m_accessDetailsHasBeenSet = true;
    m_accessDetails = std::forward<AccessDetailsT>(value);
  }
  template <typename AccessDetailsT = AccessDetails>
  FulfillmentDetails& WithAccessDetails(AccessDetailsT&& value) {
    SetAccessDetails(std::forward<AccessDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  DisbursementDetails m_disbursementDetails;

  ConsumableDetails m_consumableDetails;

  CreditDetails m_creditDetails;

  AccessDetails m_accessDetails;
  bool m_disbursementDetailsHasBeenSet = false;
  bool m_consumableDetailsHasBeenSet = false;
  bool m_creditDetailsHasBeenSet = false;
  bool m_accessDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
