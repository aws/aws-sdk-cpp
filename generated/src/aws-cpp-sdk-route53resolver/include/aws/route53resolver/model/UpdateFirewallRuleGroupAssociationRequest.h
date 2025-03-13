/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/MutationProtectionStatus.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateFirewallRuleGroupAssociationRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateFirewallRuleGroupAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallRuleGroupAssociation"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupAssociationId() const { return m_firewallRuleGroupAssociationId; }
    inline bool FirewallRuleGroupAssociationIdHasBeenSet() const { return m_firewallRuleGroupAssociationIdHasBeenSet; }
    template<typename FirewallRuleGroupAssociationIdT = Aws::String>
    void SetFirewallRuleGroupAssociationId(FirewallRuleGroupAssociationIdT&& value) { m_firewallRuleGroupAssociationIdHasBeenSet = true; m_firewallRuleGroupAssociationId = std::forward<FirewallRuleGroupAssociationIdT>(value); }
    template<typename FirewallRuleGroupAssociationIdT = Aws::String>
    UpdateFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(FirewallRuleGroupAssociationIdT&& value) { SetFirewallRuleGroupAssociationId(std::forward<FirewallRuleGroupAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that you associate with the specified VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p> <p>You must specify a unique priority for each rule group that you
     * associate with a single VPC. To make it easier to insert rule groups later,
     * leave space between the numbers, for example, use 100, 200, and so on. You can
     * change the priority setting for a rule group association after you create
     * it.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateFirewallRuleGroupAssociationRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline MutationProtectionStatus GetMutationProtection() const { return m_mutationProtection; }
    inline bool MutationProtectionHasBeenSet() const { return m_mutationProtectionHasBeenSet; }
    inline void SetMutationProtection(MutationProtectionStatus value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = value; }
    inline UpdateFirewallRuleGroupAssociationRequest& WithMutationProtection(MutationProtectionStatus value) { SetMutationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule group association.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFirewallRuleGroupAssociationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallRuleGroupAssociationId;
    bool m_firewallRuleGroupAssociationIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    MutationProtectionStatus m_mutationProtection{MutationProtectionStatus::NOT_SET};
    bool m_mutationProtectionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
