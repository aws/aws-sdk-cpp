/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>
#include <aws/pricing-plan-manager/model/ScheduledChange.h>
#include <aws/pricing-plan-manager/model/Status.h>

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
 * <p>The full details of a flat-rate pricing subscription, including its current
 * configuration, status, and associated resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-plan-manager-2025-08-05/Subscription">AWS
 * API Reference</a></p>
 */
class Subscription {
 public:
  AWS_PRICINGPLANMANAGER_API Subscription() = default;
  AWS_PRICINGPLANMANAGER_API Subscription(Aws::Utils::Json::JsonView jsonValue);
  AWS_PRICINGPLANMANAGER_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PRICINGPLANMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies this
   * subscription.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Subscription& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing plan family for the subscription, such as
   * <code>CloudFront</code>.</p>
   */
  inline const Aws::String& GetPlanFamily() const { return m_planFamily; }
  inline bool PlanFamilyHasBeenSet() const { return m_planFamilyHasBeenSet; }
  template <typename PlanFamilyT = Aws::String>
  void SetPlanFamily(PlanFamilyT&& value) {
    m_planFamilyHasBeenSet = true;
    m_planFamily = std::forward<PlanFamilyT>(value);
  }
  template <typename PlanFamilyT = Aws::String>
  Subscription& WithPlanFamily(PlanFamilyT&& value) {
    SetPlanFamily(std::forward<PlanFamilyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current tier level of the pricing plan, such as <code>FREE</code>,
   * <code>PRO</code>, <code>BUSINESS</code>, or <code>PREMIUM</code>.</p>
   */
  inline const Aws::String& GetPlanTier() const { return m_planTier; }
  inline bool PlanTierHasBeenSet() const { return m_planTierHasBeenSet; }
  template <typename PlanTierT = Aws::String>
  void SetPlanTier(PlanTierT&& value) {
    m_planTierHasBeenSet = true;
    m_planTier = std::forward<PlanTierT>(value);
  }
  template <typename PlanTierT = Aws::String>
  Subscription& WithPlanTier(PlanTierT&& value) {
    SetPlanTier(std::forward<PlanTierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The usage level within the plan tier. When present, indicates a specific
   * capacity configuration beyond the base tier.</p>
   */
  inline const Aws::String& GetUsageLevel() const { return m_usageLevel; }
  inline bool UsageLevelHasBeenSet() const { return m_usageLevelHasBeenSet; }
  template <typename UsageLevelT = Aws::String>
  void SetUsageLevel(UsageLevelT&& value) {
    m_usageLevelHasBeenSet = true;
    m_usageLevel = std::forward<UsageLevelT>(value);
  }
  template <typename UsageLevelT = Aws::String>
  Subscription& WithUsageLevel(UsageLevelT&& value) {
    SetUsageLevel(std::forward<UsageLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pending change that will take effect at the end of the current billing
   * period. This field is present only when a downgrade or cancellation is
   * scheduled.</p>
   */
  inline const ScheduledChange& GetScheduledChange() const { return m_scheduledChange; }
  inline bool ScheduledChangeHasBeenSet() const { return m_scheduledChangeHasBeenSet; }
  template <typename ScheduledChangeT = ScheduledChange>
  void SetScheduledChange(ScheduledChangeT&& value) {
    m_scheduledChangeHasBeenSet = true;
    m_scheduledChange = std::forward<ScheduledChangeT>(value);
  }
  template <typename ScheduledChangeT = ScheduledChange>
  Subscription& WithScheduledChange(ScheduledChangeT&& value) {
    SetScheduledChange(std::forward<ScheduledChangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the subscription. For the list of possible values, see
   * the <code>Status</code> type.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Subscription& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the current status, present when additional
   * context is available.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  Subscription& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the AWS resources covered by this subscription.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
  inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  void SetResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns = std::forward<ResourceArnsT>(value);
  }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  Subscription& WithResourceArns(ResourceArnsT&& value) {
    SetResourceArns(std::forward<ResourceArnsT>(value));
    return *this;
  }
  template <typename ResourceArnsT = Aws::String>
  Subscription& AddResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the subscription was created, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Subscription& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the subscription was last modified, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Subscription& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_planFamily;

  Aws::String m_planTier;

  Aws::String m_usageLevel;

  ScheduledChange m_scheduledChange;

  Status m_status{Status::NOT_SET};

  Aws::String m_statusReason;

  Aws::Vector<Aws::String> m_resourceArns;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_arnHasBeenSet = false;
  bool m_planFamilyHasBeenSet = false;
  bool m_planTierHasBeenSet = false;
  bool m_usageLevelHasBeenSet = false;
  bool m_scheduledChangeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_resourceArnsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
