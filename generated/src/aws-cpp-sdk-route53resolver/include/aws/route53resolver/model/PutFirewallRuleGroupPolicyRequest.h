/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class PutFirewallRuleGroupPolicyRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API PutFirewallRuleGroupPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFirewallRuleGroupPolicy"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) for the rule group that you want to share.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PutFirewallRuleGroupPolicyRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (Amazon Web Services IAM) policy to attach
     * to the rule group.</p>
     */
    inline const Aws::String& GetFirewallRuleGroupPolicy() const { return m_firewallRuleGroupPolicy; }
    inline bool FirewallRuleGroupPolicyHasBeenSet() const { return m_firewallRuleGroupPolicyHasBeenSet; }
    template<typename FirewallRuleGroupPolicyT = Aws::String>
    void SetFirewallRuleGroupPolicy(FirewallRuleGroupPolicyT&& value) { m_firewallRuleGroupPolicyHasBeenSet = true; m_firewallRuleGroupPolicy = std::forward<FirewallRuleGroupPolicyT>(value); }
    template<typename FirewallRuleGroupPolicyT = Aws::String>
    PutFirewallRuleGroupPolicyRequest& WithFirewallRuleGroupPolicy(FirewallRuleGroupPolicyT&& value) { SetFirewallRuleGroupPolicy(std::forward<FirewallRuleGroupPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_firewallRuleGroupPolicy;
    bool m_firewallRuleGroupPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
