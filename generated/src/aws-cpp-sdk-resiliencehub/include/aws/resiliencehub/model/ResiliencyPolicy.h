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
   * <p>Defines a resiliency policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ResiliencyPolicy">AWS
   * API Reference</a></p>
   */
  class ResiliencyPolicy
  {
  public:
    AWS_RESILIENCEHUB_API ResiliencyPolicy();
    AWS_RESILIENCEHUB_API ResiliencyPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ResiliencyPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp for when the resiliency policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp for when the resiliency policy was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the resiliency policy was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp for when the resiliency policy was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp for when the resiliency policy was created.</p>
     */
    inline ResiliencyPolicy& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp for when the resiliency policy was created.</p>
     */
    inline ResiliencyPolicy& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline ResiliencyPolicy& WithDataLocationConstraint(const DataLocationConstraint& value) { SetDataLocationConstraint(value); return *this;}

    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline ResiliencyPolicy& WithDataLocationConstraint(DataLocationConstraint&& value) { SetDataLocationConstraint(std::move(value)); return *this;}


    /**
     * <p>Specifies the estimated cost tier of the resiliency policy.</p>
     */
    inline const EstimatedCostTier& GetEstimatedCostTier() const{ return m_estimatedCostTier; }

    /**
     * <p>Specifies the estimated cost tier of the resiliency policy.</p>
     */
    inline bool EstimatedCostTierHasBeenSet() const { return m_estimatedCostTierHasBeenSet; }

    /**
     * <p>Specifies the estimated cost tier of the resiliency policy.</p>
     */
    inline void SetEstimatedCostTier(const EstimatedCostTier& value) { m_estimatedCostTierHasBeenSet = true; m_estimatedCostTier = value; }

    /**
     * <p>Specifies the estimated cost tier of the resiliency policy.</p>
     */
    inline void SetEstimatedCostTier(EstimatedCostTier&& value) { m_estimatedCostTierHasBeenSet = true; m_estimatedCostTier = std::move(value); }

    /**
     * <p>Specifies the estimated cost tier of the resiliency policy.</p>
     */
    inline ResiliencyPolicy& WithEstimatedCostTier(const EstimatedCostTier& value) { SetEstimatedCostTier(value); return *this;}

    /**
     * <p>Specifies the estimated cost tier of the resiliency policy.</p>
     */
    inline ResiliencyPolicy& WithEstimatedCostTier(EstimatedCostTier&& value) { SetEstimatedCostTier(std::move(value)); return *this;}


    /**
     * <p>The resiliency policy.</p>
     */
    inline const Aws::Map<DisruptionType, FailurePolicy>& GetPolicy() const{ return m_policy; }

    /**
     * <p>The resiliency policy.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The resiliency policy.</p>
     */
    inline void SetPolicy(const Aws::Map<DisruptionType, FailurePolicy>& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The resiliency policy.</p>
     */
    inline void SetPolicy(Aws::Map<DisruptionType, FailurePolicy>&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The resiliency policy.</p>
     */
    inline ResiliencyPolicy& WithPolicy(const Aws::Map<DisruptionType, FailurePolicy>& value) { SetPolicy(value); return *this;}

    /**
     * <p>The resiliency policy.</p>
     */
    inline ResiliencyPolicy& WithPolicy(Aws::Map<DisruptionType, FailurePolicy>&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The resiliency policy.</p>
     */
    inline ResiliencyPolicy& AddPolicy(const DisruptionType& key, const FailurePolicy& value) { m_policyHasBeenSet = true; m_policy.emplace(key, value); return *this; }

    /**
     * <p>The resiliency policy.</p>
     */
    inline ResiliencyPolicy& AddPolicy(DisruptionType&& key, const FailurePolicy& value) { m_policyHasBeenSet = true; m_policy.emplace(std::move(key), value); return *this; }

    /**
     * <p>The resiliency policy.</p>
     */
    inline ResiliencyPolicy& AddPolicy(const DisruptionType& key, FailurePolicy&& value) { m_policyHasBeenSet = true; m_policy.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The resiliency policy.</p>
     */
    inline ResiliencyPolicy& AddPolicy(DisruptionType&& key, FailurePolicy&& value) { m_policyHasBeenSet = true; m_policy.emplace(std::move(key), std::move(value)); return *this; }


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
    inline ResiliencyPolicy& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ResiliencyPolicy& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ResiliencyPolicy& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


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
    inline ResiliencyPolicy& WithPolicyDescription(const Aws::String& value) { SetPolicyDescription(value); return *this;}

    /**
     * <p>The description for the policy.</p>
     */
    inline ResiliencyPolicy& WithPolicyDescription(Aws::String&& value) { SetPolicyDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the policy.</p>
     */
    inline ResiliencyPolicy& WithPolicyDescription(const char* value) { SetPolicyDescription(value); return *this;}


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
    inline ResiliencyPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy</p>
     */
    inline ResiliencyPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy</p>
     */
    inline ResiliencyPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline ResiliencyPolicy& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline ResiliencyPolicy& WithTier(const ResiliencyPolicyTier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline ResiliencyPolicy& WithTier(ResiliencyPolicyTier&& value) { SetTier(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    DataLocationConstraint m_dataLocationConstraint;
    bool m_dataLocationConstraintHasBeenSet = false;

    EstimatedCostTier m_estimatedCostTier;
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

    ResiliencyPolicyTier m_tier;
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
