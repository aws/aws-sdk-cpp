/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/DataLocationConstraint.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/ResiliencyPolicyTier.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/FailurePolicy.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class CreateResiliencyPolicyRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API CreateResiliencyPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResiliencyPolicy"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline CreateResiliencyPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline CreateResiliencyPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline CreateResiliencyPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateResiliencyPolicyRequest& WithDataLocationConstraint(const DataLocationConstraint& value) { SetDataLocationConstraint(value); return *this;}

    /**
     * <p>Specifies a high-level geographical location constraint for where your
     * resilience policy data can be stored.</p>
     */
    inline CreateResiliencyPolicyRequest& WithDataLocationConstraint(DataLocationConstraint&& value) { SetDataLocationConstraint(std::move(value)); return *this;}


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
    inline CreateResiliencyPolicyRequest& WithPolicy(const Aws::Map<DisruptionType, FailurePolicy>& value) { SetPolicy(value); return *this;}

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline CreateResiliencyPolicyRequest& WithPolicy(Aws::Map<DisruptionType, FailurePolicy>&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline CreateResiliencyPolicyRequest& AddPolicy(const DisruptionType& key, const FailurePolicy& value) { m_policyHasBeenSet = true; m_policy.emplace(key, value); return *this; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline CreateResiliencyPolicyRequest& AddPolicy(DisruptionType&& key, const FailurePolicy& value) { m_policyHasBeenSet = true; m_policy.emplace(std::move(key), value); return *this; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline CreateResiliencyPolicyRequest& AddPolicy(const DisruptionType& key, FailurePolicy&& value) { m_policyHasBeenSet = true; m_policy.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The type of resiliency policy to be created, including the recovery time
     * objective (RTO) and recovery point objective (RPO) in seconds.</p>
     */
    inline CreateResiliencyPolicyRequest& AddPolicy(DisruptionType&& key, FailurePolicy&& value) { m_policyHasBeenSet = true; m_policy.emplace(std::move(key), std::move(value)); return *this; }


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
    inline CreateResiliencyPolicyRequest& WithPolicyDescription(const Aws::String& value) { SetPolicyDescription(value); return *this;}

    /**
     * <p>The description for the policy.</p>
     */
    inline CreateResiliencyPolicyRequest& WithPolicyDescription(Aws::String&& value) { SetPolicyDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the policy.</p>
     */
    inline CreateResiliencyPolicyRequest& WithPolicyDescription(const char* value) { SetPolicyDescription(value); return *this;}


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
    inline CreateResiliencyPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy</p>
     */
    inline CreateResiliencyPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy</p>
     */
    inline CreateResiliencyPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


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
    inline CreateResiliencyPolicyRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key/value pair.</p>
     */
    inline CreateResiliencyPolicyRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline CreateResiliencyPolicyRequest& WithTier(const ResiliencyPolicyTier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier for this resiliency policy, ranging from the highest severity
     * (<code>MissionCritical</code>) to lowest (<code>NonCritical</code>).</p>
     */
    inline CreateResiliencyPolicyRequest& WithTier(ResiliencyPolicyTier&& value) { SetTier(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DataLocationConstraint m_dataLocationConstraint;
    bool m_dataLocationConstraintHasBeenSet = false;

    Aws::Map<DisruptionType, FailurePolicy> m_policy;
    bool m_policyHasBeenSet = false;

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
