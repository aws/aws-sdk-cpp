/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>A single installment in a payment schedule template. Because the start date
 * of the renewed agreement isn't known when the offer is created, the charge date
 * of each installment is expressed as an offset from that start date rather than
 * as an absolute date.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PaymentScheduleEntry">AWS
 * API Reference</a></p>
 */
class PaymentScheduleEntry {
 public:
  AWS_AGREEMENTSERVICE_API PaymentScheduleEntry() = default;
  AWS_AGREEMENTSERVICE_API PaymentScheduleEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API PaymentScheduleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The time between the start date of the renewed agreement and the date this
   * installment is charged. The duration is represented in the ISO 8601 format in
   * either whole months or whole days (for example, <code>P1M</code> for 1 month or
   * <code>P30D</code> for 30 days). All installments in a schedule use the same
   * unit.</p>
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
   * <p>The percentage of the total contract value of the renewed agreement that is
   * charged in this installment. Valid values range from <code>0.01</code> to
   * <code>100.00</code>, with up to two decimal places.</p>
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
   * <p>The day of the month on which this installment is charged, from
   * <code>1</code> to <code>31</code>. Use this field to anchor the charge to a
   * specific calendar day within the month identified by
   * <code>ChargeDateOffset</code>. This field is supported only when
   * <code>ChargeDateOffset</code> is expressed in months.</p>
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
}  // namespace AgreementService
}  // namespace Aws
