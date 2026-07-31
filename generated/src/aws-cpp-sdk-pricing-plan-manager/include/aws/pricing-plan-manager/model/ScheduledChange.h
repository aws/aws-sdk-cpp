/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>
#include <aws/pricing-plan-manager/model/ScheduledChangeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PricingPlanManager {
namespace Model {

/**
 * <p>A pending change on a subscription that takes effect at the end of the
 * current billing period, such as a tier downgrade or cancellation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/ScheduledChange">AWS
 * API Reference</a></p>
 */
class ScheduledChange {
 public:
  AWS_PRICINGPLANMANAGER_API ScheduledChange() = default;
  AWS_PRICINGPLANMANAGER_API ScheduledChange(Aws::Utils::Json::JsonView jsonValue);
  AWS_PRICINGPLANMANAGER_API ScheduledChange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PRICINGPLANMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of pending change. Possible values are <code>DOWNGRADE</code> (a
   * tier change to a lower level) and <code>CANCELLATION</code> (subscription
   * termination).</p>
   */
  inline ScheduledChangeType GetChangeType() const { return m_changeType; }
  inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
  inline void SetChangeType(ScheduledChangeType value) {
    m_changeTypeHasBeenSet = true;
    m_changeType = value;
  }
  inline ScheduledChange& WithChangeType(ScheduledChangeType value) {
    SetChangeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the change takes effect, in ISO 8601 format. This
   * value is populated after the change is confirmed by the billing system.</p>
   */
  inline const Aws::Utils::DateTime& GetEffectiveDate() const { return m_effectiveDate; }
  inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
  template <typename EffectiveDateT = Aws::Utils::DateTime>
  void SetEffectiveDate(EffectiveDateT&& value) {
    m_effectiveDateHasBeenSet = true;
    m_effectiveDate = std::forward<EffectiveDateT>(value);
  }
  template <typename EffectiveDateT = Aws::Utils::DateTime>
  ScheduledChange& WithEffectiveDate(EffectiveDateT&& value) {
    SetEffectiveDate(std::forward<EffectiveDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For downgrades, the tier level that the subscription will change to. Not
   * present for cancellations.</p>
   */
  inline const Aws::String& GetPlanTier() const { return m_planTier; }
  inline bool PlanTierHasBeenSet() const { return m_planTierHasBeenSet; }
  template <typename PlanTierT = Aws::String>
  void SetPlanTier(PlanTierT&& value) {
    m_planTierHasBeenSet = true;
    m_planTier = std::forward<PlanTierT>(value);
  }
  template <typename PlanTierT = Aws::String>
  ScheduledChange& WithPlanTier(PlanTierT&& value) {
    SetPlanTier(std::forward<PlanTierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For downgrades, the target usage level after the change takes effect.</p>
   */
  inline const Aws::String& GetUsageLevel() const { return m_usageLevel; }
  inline bool UsageLevelHasBeenSet() const { return m_usageLevelHasBeenSet; }
  template <typename UsageLevelT = Aws::String>
  void SetUsageLevel(UsageLevelT&& value) {
    m_usageLevelHasBeenSet = true;
    m_usageLevel = std::forward<UsageLevelT>(value);
  }
  template <typename UsageLevelT = Aws::String>
  ScheduledChange& WithUsageLevel(UsageLevelT&& value) {
    SetUsageLevel(std::forward<UsageLevelT>(value));
    return *this;
  }
  ///@}
 private:
  ScheduledChangeType m_changeType{ScheduledChangeType::NOT_SET};

  Aws::Utils::DateTime m_effectiveDate{};

  Aws::String m_planTier;

  Aws::String m_usageLevel;
  bool m_changeTypeHasBeenSet = false;
  bool m_effectiveDateHasBeenSet = false;
  bool m_planTierHasBeenSet = false;
  bool m_usageLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
