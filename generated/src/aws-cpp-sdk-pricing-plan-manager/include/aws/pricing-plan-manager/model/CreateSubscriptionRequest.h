/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pricing-plan-manager/PricingPlanManagerRequest.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>
#include <aws/pricing-plan-manager/model/ApprovalMode.h>

#include <utility>

namespace Aws {
namespace PricingPlanManager {
namespace Model {

/**
 */
class CreateSubscriptionRequest : public PricingPlanManagerRequest {
 public:
  AWS_PRICINGPLANMANAGER_API CreateSubscriptionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSubscription"; }

  AWS_PRICINGPLANMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The pricing plan family to subscribe to, such as <code>CloudFront</code>.</p>
   */
  inline const Aws::String& GetPlanFamily() const { return m_planFamily; }
  inline bool PlanFamilyHasBeenSet() const { return m_planFamilyHasBeenSet; }
  template <typename PlanFamilyT = Aws::String>
  void SetPlanFamily(PlanFamilyT&& value) {
    m_planFamilyHasBeenSet = true;
    m_planFamily = std::forward<PlanFamilyT>(value);
  }
  template <typename PlanFamilyT = Aws::String>
  CreateSubscriptionRequest& WithPlanFamily(PlanFamilyT&& value) {
    SetPlanFamily(std::forward<PlanFamilyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier level for the subscription, such as <code>FREE</code>,
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
  CreateSubscriptionRequest& WithPlanTier(PlanTierT&& value) {
    SetPlanTier(std::forward<PlanTierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The usage level within the plan tier. Specify <code>DEFAULT</code> for the
   * base configuration, or a higher level if your plan tier supports it.</p>
   */
  inline const Aws::String& GetUsageLevel() const { return m_usageLevel; }
  inline bool UsageLevelHasBeenSet() const { return m_usageLevelHasBeenSet; }
  template <typename UsageLevelT = Aws::String>
  void SetUsageLevel(UsageLevelT&& value) {
    m_usageLevelHasBeenSet = true;
    m_usageLevel = std::forward<UsageLevelT>(value);
  }
  template <typename UsageLevelT = Aws::String>
  CreateSubscriptionRequest& WithUsageLevel(UsageLevelT&& value) {
    SetUsageLevel(std::forward<UsageLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the AWS resources to include in the subscription. Specify one or
   * more supported resources.</p>  <p>For subscriptions in the CloudFront plan
   * family, the resources must include exactly one Amazon CloudFront distribution
   * and exactly one AWS WAF web ACL. You can also include other supported resources,
   * such as Amazon Route 53 hosted zones and CloudFront KeyValueStores.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
  inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  void SetResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns = std::forward<ResourceArnsT>(value);
  }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  CreateSubscriptionRequest& WithResourceArns(ResourceArnsT&& value) {
    SetResourceArns(std::forward<ResourceArnsT>(value));
    return *this;
  }
  template <typename ResourceArnsT = Aws::String>
  CreateSubscriptionRequest& AddResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether the subscription requires explicit approval before billing
   * starts. Set to <code>MANUAL</code> to require a separate
   * <code>ApprovePaidSubscription</code> call, or <code>IMMEDIATE</code> to activate
   * the subscription right away. Defaults to <code>IMMEDIATE</code> if not
   * specified.</p>
   */
  inline ApprovalMode GetApprovalMode() const { return m_approvalMode; }
  inline bool ApprovalModeHasBeenSet() const { return m_approvalModeHasBeenSet; }
  inline void SetApprovalMode(ApprovalMode value) {
    m_approvalModeHasBeenSet = true;
    m_approvalMode = value;
  }
  inline CreateSubscriptionRequest& WithApprovalMode(ApprovalMode value) {
    SetApprovalMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * request is handled only once. If you send the same request with the same client
   * token, the API returns the original response without creating a duplicate
   * subscription.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSubscriptionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_planFamily;

  Aws::String m_planTier;

  Aws::String m_usageLevel;

  Aws::Vector<Aws::String> m_resourceArns;

  ApprovalMode m_approvalMode{ApprovalMode::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_planFamilyHasBeenSet = false;
  bool m_planTierHasBeenSet = false;
  bool m_usageLevelHasBeenSet = false;
  bool m_resourceArnsHasBeenSet = false;
  bool m_approvalModeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws
