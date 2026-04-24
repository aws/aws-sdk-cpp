/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A payment installment within a payment schedule term.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ScheduleItem">AWS
 * API Reference</a></p>
 */
class ScheduleItem {
 public:
  AWS_MARKETPLACEDISCOVERY_API ScheduleItem() = default;
  AWS_MARKETPLACEDISCOVERY_API ScheduleItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ScheduleItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The date when the payment is due.</p>
   */
  inline const Aws::Utils::DateTime& GetChargeDate() const { return m_chargeDate; }
  inline bool ChargeDateHasBeenSet() const { return m_chargeDateHasBeenSet; }
  template <typename ChargeDateT = Aws::Utils::DateTime>
  void SetChargeDate(ChargeDateT&& value) {
    m_chargeDateHasBeenSet = true;
    m_chargeDate = std::forward<ChargeDateT>(value);
  }
  template <typename ChargeDateT = Aws::Utils::DateTime>
  ScheduleItem& WithChargeDate(ChargeDateT&& value) {
    SetChargeDate(std::forward<ChargeDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount to be charged on the charge date.</p>
   */
  inline const Aws::String& GetChargeAmount() const { return m_chargeAmount; }
  inline bool ChargeAmountHasBeenSet() const { return m_chargeAmountHasBeenSet; }
  template <typename ChargeAmountT = Aws::String>
  void SetChargeAmount(ChargeAmountT&& value) {
    m_chargeAmountHasBeenSet = true;
    m_chargeAmount = std::forward<ChargeAmountT>(value);
  }
  template <typename ChargeAmountT = Aws::String>
  ScheduleItem& WithChargeAmount(ChargeAmountT&& value) {
    SetChargeAmount(std::forward<ChargeAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_chargeDate{};

  Aws::String m_chargeAmount;
  bool m_chargeDateHasBeenSet = false;
  bool m_chargeAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
