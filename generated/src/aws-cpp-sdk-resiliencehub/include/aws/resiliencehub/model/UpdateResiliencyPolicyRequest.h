/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/resiliencehub/model/DataLocationConstraint.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ResiliencyPolicyTier.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/FailurePolicy.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class UpdateResiliencyPolicyRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API UpdateResiliencyPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResiliencyPolicy"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline DataLocationConstraint GetDataLocationConstraint() const { return m_dataLocationConstraint; }
    inline bool DataLocationConstraintHasBeenSet() const { return m_dataLocationConstraintHasBeenSet; }
    inline void SetDataLocationConstraint(DataLocationConstraint value) { m_dataLocationConstraintHasBeenSet = true; m_dataLocationConstraint = value; }
    inline UpdateResiliencyPolicyRequest& WithDataLocationConstraint(DataLocationConstraint value) { SetDataLocationConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resiliency policy to be created, including the recovery time objective (RTO)
     * and recovery point objective (RPO) in seconds.</p>
     */
    inline const Aws::Map<DisruptionType, FailurePolicy>& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::Map<DisruptionType, FailurePolicy>>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::Map<DisruptionType, FailurePolicy>>
    UpdateResiliencyPolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    inline UpdateResiliencyPolicyRequest& AddPolicy(DisruptionType key, FailurePolicy value) {
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
    UpdateResiliencyPolicyRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
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
    UpdateResiliencyPolicyRequest& WithPolicyDescription(PolicyDescriptionT&& value) { SetPolicyDescription(std::forward<PolicyDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the resiliency policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    UpdateResiliencyPolicyRequest& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline ResiliencyPolicyTier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(ResiliencyPolicyTier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline UpdateResiliencyPolicyRequest& WithTier(ResiliencyPolicyTier value) { SetTier(value); return *this;}
    ///@}
  private:

    DataLocationConstraint m_dataLocationConstraint{DataLocationConstraint::NOT_SET};
    bool m_dataLocationConstraintHasBeenSet = false;

    Aws::Map<DisruptionType, FailurePolicy> m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_policyDescription;
    bool m_policyDescriptionHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    ResiliencyPolicyTier m_tier{ResiliencyPolicyTier::NOT_SET};
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
