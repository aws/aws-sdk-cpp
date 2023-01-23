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
    AWS_NETWORKFIREWALL_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account that you want to share rule
     * groups and firewall policies with.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The IAM policy statement that lists the accounts that you want to share your
     * rule group or firewall policy with and the operations that you want the accounts
     * to be able to perform. </p> <p>For a rule group resource, you can specify the
     * following operations in the Actions section of the statement:</p> <ul> <li>
     * <p>network-firewall:CreateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:UpdateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListRuleGroups</p> </li> </ul> <p>For a firewall policy
     * resource, you can specify the following operations in the Actions section of the
     * statement:</p> <ul> <li> <p>network-firewall:CreateFirewall</p> </li> <li>
     * <p>network-firewall:UpdateFirewall</p> </li> <li>
     * <p>network-firewall:AssociateFirewallPolicy</p> </li> <li>
     * <p>network-firewall:ListFirewallPolicies</p> </li> </ul> <p>In the Resource
     * section of the statement, you specify the ARNs for the rule groups and firewall
     * policies that you want to share with the account that you specified in
     * <code>Arn</code>.</p>
     */
    inline PutResourcePolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
