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
    AWS_RESILIENCEHUB_API UpdateResiliencyPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResiliencyPolicy"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline const DataLocationConstraint& GetDataLocationConstraint() const{ return m_dataLocationConstraint; }

    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline bool DataLocationConstraintHasBeenSet() const { return m_dataLocationConstraintHasBeenSet; }

    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline void SetDataLocationConstraint(const DataLocationConstraint& value) { m_dataLocationConstraintHasBeenSet = true; m_dataLocationConstraint = value; }

    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline void SetDataLocationConstraint(DataLocationConstraint&& value) { m_dataLocationConstraintHasBeenSet = true; m_dataLocationConstraint = std::move(value); }

    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithDataLocationConstraint(const DataLocationConstraint& value) { SetDataLocationConstraint(value); return *this;}

    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithDataLocationConstraint(DataLocationConstraint&& value) { SetDataLocationConstraint(std::move(value)); return *this;}


    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline const Aws::Map<DisruptionType, FailurePolicy>& GetPolicy() const{ return m_policy; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline void SetPolicy(const Aws::Map<DisruptionType, FailurePolicy>& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline void SetPolicy(Aws::Map<DisruptionType, FailurePolicy>&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicy(const Aws::Map<DisruptionType, FailurePolicy>& value) { SetPolicy(value); return *this;}

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicy(Aws::Map<DisruptionType, FailurePolicy>&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline UpdateResiliencyPolicyRequest& AddPolicy(const DisruptionType& key, const FailurePolicy& value) { m_policyHasBeenSet = true; m_policy.emplace(key, value); return *this; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline UpdateResiliencyPolicyRequest& AddPolicy(DisruptionType&& key, const FailurePolicy& value) { m_policyHasBeenSet = true; m_policy.emplace(std::move(key), value); return *this; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline UpdateResiliencyPolicyRequest& AddPolicy(const DisruptionType& key, FailurePolicy&& value) { m_policyHasBeenSet = true; m_policy.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline UpdateResiliencyPolicyRequest& AddPolicy(DisruptionType&& key, FailurePolicy&& value) { m_policyHasBeenSet = true; m_policy.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The description for the policy.</p>
     */
    inline const Aws::String& GetPolicyDescription() const{ return m_policyDescription; }

    /**
     * <p>The description for the policy.</p>
     */
    inline bool PolicyDescriptionHasBeenSet() const { return m_policyDescriptionHasBeenSet; }

    /**
     * <p>The description for the policy.</p>
     */
    inline void SetPolicyDescription(const Aws::String& value) { m_policyDescriptionHasBeenSet = true; m_policyDescription = value; }

    /**
     * <p>The description for the policy.</p>
     */
    inline void SetPolicyDescription(Aws::String&& value) { m_policyDescriptionHasBeenSet = true; m_policyDescription = std::move(value); }

    /**
     * <p>The description for the policy.</p>
     */
    inline void SetPolicyDescription(const char* value) { m_policyDescriptionHasBeenSet = true; m_policyDescription.assign(value); }

    /**
     * <p>The description for the policy.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyDescription(const Aws::String& value) { SetPolicyDescription(value); return *this;}

    /**
     * <p>The description for the policy.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyDescription(Aws::String&& value) { SetPolicyDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the policy.</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyDescription(const char* value) { SetPolicyDescription(value); return *this;}


    /**
     * <p>The name of the policy</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy</p>
     */
    inline UpdateResiliencyPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline const ResiliencyPolicyTier& GetTier() const{ return m_tier; }

    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline void SetTier(const ResiliencyPolicyTier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline void SetTier(ResiliencyPolicyTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline UpdateResiliencyPolicyRequest& WithTier(const ResiliencyPolicyTier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline UpdateResiliencyPolicyRequest& WithTier(ResiliencyPolicyTier&& value) { SetTier(std::move(value)); return *this;}

  private:

    DataLocationConstraint m_dataLocationConstraint;
    bool m_dataLocationConstraintHasBeenSet = false;

    Aws::Map<DisruptionType, FailurePolicy> m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_policyDescription;
    bool m_policyDescriptionHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    ResiliencyPolicyTier m_tier;
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
