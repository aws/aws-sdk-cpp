/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/DataLocationConstraint.h>
#include <aws/resiliencehub/model/EstimatedCostTier.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ResiliencyPolicyTier.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/FailurePolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a resiliency policy.</p>  <p>Resilience Hub allows you to
   * provide a value of zero for <code>rtoInSecs</code> and <code>rpoInSecs</code> of
   * your resiliency policy. But, while assessing your application, the lowest
   * possible assessment result is near zero. Hence, if you provide value zero for
   * <code>rtoInSecs</code> and <code>rpoInSecs</code>, the estimated workload RTO
   * and estimated workload RPO result will be near zero and the <b>Compliance
   * status</b> for your application will be set to <b>Policy breached</b>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResiliencyPolicy">AWS
   * API Reference</a></p>
   */
  class ResiliencyPolicy
  {
  public:
    AWS_RESILIENCEHUB_API ResiliencyPolicy() = default;
    AWS_RESILIENCEHUB_API ResiliencyPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResiliencyPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Date and time when the resiliency policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ResiliencyPolicy& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline DataLocationConstraint GetDataLocationConstraint() const { return m_dataLocationConstraint; }
    inline bool DataLocationConstraintHasBeenSet() const { return m_dataLocationConstraintHasBeenSet; }
    inline void SetDataLocationConstraint(DataLocationConstraint value) { m_dataLocationConstraintHasBeenSet = true; m_dataLocationConstraint = value; }
    inline ResiliencyPolicy& WithDataLocationConstraint(DataLocationConstraint value) { SetDataLocationConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the estimated cost tier of the resiliency policy.</p>
     */
    inline EstimatedCostTier GetEstimatedCostTier() const { return m_estimatedCostTier; }
    inline bool EstimatedCostTierHasBeenSet() const { return m_estimatedCostTierHasBeenSet; }
    inline void SetEstimatedCostTier(EstimatedCostTier value) { m_estimatedCostTierHasBeenSet = true; m_estimatedCostTier = value; }
    inline ResiliencyPolicy& WithEstimatedCostTier(EstimatedCostTier value) { SetEstimatedCostTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resiliency policy.</p>
     */
    inline const Aws::Map<DisruptionType, FailurePolicy>& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::Map<DisruptionType, FailurePolicy>>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::Map<DisruptionType, FailurePolicy>>
    ResiliencyPolicy& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    inline ResiliencyPolicy& AddPolicy(DisruptionType key, FailurePolicy value) {
      m_policyHasBeenSet = true; m_policy.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the resiliency policy. The format for this ARN
     * is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    ResiliencyPolicy& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the resiliency policy.</p>
     */
    inline const Aws::String& GetPolicyDescription() const { return m_policyDescription; }
    inline bool PolicyDescriptionHasBeenSet() const { return m_policyDescriptionHasBeenSet; }
    template<typename PolicyDescriptionT = Aws::String>
    void SetPolicyDescription(PolicyDescriptionT&& value) { m_policyDescriptionHasBeenSet = true; m_policyDescription = std::forward<PolicyDescriptionT>(value); }
    template<typename PolicyDescriptionT = Aws::String>
    ResiliencyPolicy& WithPolicyDescription(PolicyDescriptionT&& value) { SetPolicyDescription(std::forward<PolicyDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ResiliencyPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to the resource. A tag is a label that you assign to an Amazon
     * Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ResiliencyPolicy& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ResiliencyPolicy& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline ResiliencyPolicyTier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(ResiliencyPolicyTier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline ResiliencyPolicy& WithTier(ResiliencyPolicyTier value) { SetTier(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    DataLocationConstraint m_dataLocationConstraint{DataLocationConstraint::NOT_SET};
    bool m_dataLocationConstraintHasBeenSet = false;

    EstimatedCostTier m_estimatedCostTier{EstimatedCostTier::NOT_SET};
    bool m_estimatedCostTierHasBeenSet = false;

    Aws::Map<DisruptionType, FailurePolicy> m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_policyDescription;
    bool m_policyDescriptionHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ResiliencyPolicyTier m_tier{ResiliencyPolicyTier::NOT_SET};
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
