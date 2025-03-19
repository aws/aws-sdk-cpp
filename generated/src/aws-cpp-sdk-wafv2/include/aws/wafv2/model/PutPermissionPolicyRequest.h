/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class PutPermissionPolicyRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API PutPermissionPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPermissionPolicy"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a>RuleGroup</a> to which you want to
     * attach the policy.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PutPermissionPolicyRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy to attach to the specified rule group. </p> <p>The policy
     * specifications must conform to the following:</p> <ul> <li> <p>The policy must
     * be composed using IAM Policy version 2012-10-17.</p> </li> <li> <p>The policy
     * must include specifications for <code>Effect</code>, <code>Action</code>, and
     * <code>Principal</code>.</p> </li> <li> <p> <code>Effect</code> must specify
     * <code>Allow</code>.</p> </li> <li> <p> <code>Action</code> must specify
     * <code>wafv2:CreateWebACL</code>, <code>wafv2:UpdateWebACL</code>, and
     * <code>wafv2:PutFirewallManagerRuleGroups</code> and may optionally specify
     * <code>wafv2:GetRuleGroup</code>. WAF rejects any extra actions or wildcard
     * actions in the policy.</p> </li> <li> <p>The policy must not include a
     * <code>Resource</code> parameter.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">IAM
     * Policies</a>. </p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutPermissionPolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
