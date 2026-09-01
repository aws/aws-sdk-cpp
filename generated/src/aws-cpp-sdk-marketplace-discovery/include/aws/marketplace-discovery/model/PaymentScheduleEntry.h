/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>A single installment entry in the renewal payment schedule.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PaymentScheduleEntry">AWS
 * API Reference</a></p>
 */
class PaymentScheduleEntry {
 public:
  AWS_MARKETPLACEDISCOVERY_API PaymentScheduleEntry() = default;
  AWS_MARKETPLACEDISCOVERY_API PaymentScheduleEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PaymentScheduleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The relative offset from the renewal agreement start date when this
   * installment is due, in ISO 8601 duration format. The offset uses months only or
   * days only (for example, P1M or P30D); mixed units are not supported, and every
   * offset in a schedule uses the same unit.</p>
   */
  inline const Aws::String& GetChargeDateOffset() const { return m_chargeDateOffset; }
  inline bool ChargeDateOffsetHasBeenSet() const { return m_chargeDateOffsetHasBeenSet; }
  template <typename ChargeDateOffsetT = Aws::String>
  void SetChargeDateOffset(ChargeDateOffsetT&& value) {
    m_chargeDateOffsetHasBeenSet = true;
    m_chargeDateOffset = std::forward<ChargeDateOffsetT>(value);
  }
  template <typename ChargeDateOffsetT = Aws::String>
  PaymentScheduleEntry& WithChargeDateOffset(ChargeDateOffsetT&& value) {
    SetChargeDateOffset(std::forward<ChargeDateOffsetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the increased TCV to charge in this installment. All
   * entries in a schedule sum to 100.00.</p>
   */
  inline const Aws::String& GetChargePercentage() const { return m_chargePercentage; }
  inline bool ChargePercentageHasBeenSet() const { return m_chargePercentageHasBeenSet; }
  template <typename ChargePercentageT = Aws::String>
  void SetChargePercentage(ChargePercentageT&& value) {
    m_chargePercentageHasBeenSet = true;
    m_chargePercentage = std::forward<ChargePercentageT>(value);
  }
  template <typename ChargePercentageT = Aws::String>
  PaymentScheduleEntry& WithChargePercentage(ChargePercentageT&& value) {
    SetChargePercentage(std::forward<ChargePercentageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The optional calendar day of month on which the charge occurs. When absent,
   * the charge day is derived from <code>chargeDateOffset</code>, and this field
   * does not apply when <code>chargeDateOffset</code> is expressed in days. For
   * months with fewer days than the specified day, the charge occurs on the last day
   * of the month. For example, if <code>dayOfMonth</code> is 31, the charge in April
   * occurs on April 30.</p>
   */
  inline int GetDayOfMonth() const { return m_dayOfMonth; }
  inline bool DayOfMonthHasBeenSet() const { return m_dayOfMonthHasBeenSet; }
  inline void SetDayOfMonth(int value) {
    m_dayOfMonthHasBeenSet = true;
    m_dayOfMonth = value;
  }
  inline PaymentScheduleEntry& WithDayOfMonth(int value) {
    SetDayOfMonth(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_chargeDateOffset;

  Aws::String m_chargePercentage;

  int m_dayOfMonth{0};
  bool m_chargeDateOffsetHasBeenSet = false;
  bool m_chargePercentageHasBeenSet = false;
  bool m_dayOfMonthHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
