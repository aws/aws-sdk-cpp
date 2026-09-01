/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/PaymentScheduleEntry.h>

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
 * <p>Defines the payment schedule that is applied to the renewed
 * agreement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PaymentScheduleTermTemplate">AWS
 * API Reference</a></p>
 */
class PaymentScheduleTermTemplate {
 public:
  AWS_AGREEMENTSERVICE_API PaymentScheduleTermTemplate() = default;
  AWS_AGREEMENTSERVICE_API PaymentScheduleTermTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API PaymentScheduleTermTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The installments that make up the payment schedule of the renewed agreement.
   * The <code>ChargePercentage</code> values of all installments add up to
   * <code>100</code>.</p>
   */
  inline const Aws::Vector<PaymentScheduleEntry>& GetSchedule() const { return m_schedule; }
  inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
  template <typename ScheduleT = Aws::Vector<PaymentScheduleEntry>>
  void SetSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule = std::forward<ScheduleT>(value);
  }
  template <typename ScheduleT = Aws::Vector<PaymentScheduleEntry>>
  PaymentScheduleTermTemplate& WithSchedule(ScheduleT&& value) {
    SetSchedule(std::forward<ScheduleT>(value));
    return *this;
  }
  template <typename ScheduleT = PaymentScheduleEntry>
  PaymentScheduleTermTemplate& AddSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule.emplace_back(std::forward<ScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PaymentScheduleEntry> m_schedule;
  bool m_scheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
