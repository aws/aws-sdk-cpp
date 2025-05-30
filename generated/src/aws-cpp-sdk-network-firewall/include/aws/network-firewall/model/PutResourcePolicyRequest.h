/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API PutResourcePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share your
     * Network Firewall resources with.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    PutResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * Network Firewall resources with and the operations that you want the accounts to
     * be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:AssociateFirewallPolicy</p> </li>
     * <li> <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>For a firewall
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateVpcEndpointAssociation</p>
     * </li> <li> <p>network-firewall:DescribeFirewallMetadata</p> </li> <li>
     * <p>network-firewall:ListFirewalls</p> </li> </ul> <p>In the Resource section of
     * the statement, you specify the ARNs for the Network Firewall resources that you
     * want to share with the account that you specified in <code>Arn</code>.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutResourcePolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
