/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PaymentScheduleEntry.h>

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
 * <p>A template for the payment schedule term on the renewal offer.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PaymentScheduleTermTemplate">AWS
 * API Reference</a></p>
 */
class PaymentScheduleTermTemplate {
 public:
  AWS_MARKETPLACEDISCOVERY_API PaymentScheduleTermTemplate() = default;
  AWS_MARKETPLACEDISCOVERY_API PaymentScheduleTermTemplate(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PaymentScheduleTermTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An ordered list of installment entries for the renewal payment schedule.</p>
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
}  // namespace MarketplaceDiscovery
}  // namespace Aws
