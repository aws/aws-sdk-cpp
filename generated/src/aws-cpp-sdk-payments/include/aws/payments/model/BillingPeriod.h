/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/payments/Payments_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>A billing period, as a half-open date range: <code>startDate</code> is
 * inclusive and <code>endDate</code> is exclusive. Both members are calendar
 * dates, carried as the timestamp of 00:00:00 UTC on that day.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/BillingPeriod">AWS
 * API Reference</a></p>
 */
class BillingPeriod {
 public:
  AWS_PAYMENTS_API BillingPeriod() = default;
  AWS_PAYMENTS_API BillingPeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API BillingPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The first day of the billing period, inclusive, as the timestamp of 00:00:00
   * UTC on that day.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  BillingPeriod& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The day after the last day of the billing period, exclusive, as the timestamp
   * of 00:00:00 UTC on that day. A calendar month runs from the first of the month
   * to the first of the next month.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  BillingPeriod& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
