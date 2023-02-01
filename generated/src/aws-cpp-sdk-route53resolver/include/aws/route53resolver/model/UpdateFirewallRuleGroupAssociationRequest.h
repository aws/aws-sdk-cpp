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
    AWS_ROUTE53RESOLVER_API UpdateFirewallRuleGroupAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallRuleGroupAssociation"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupAssociationId() const{ return m_firewallRuleGroupAssociationId; }

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline bool FirewallRuleGroupAssociationIdHasBeenSet() const { return m_firewallRuleGroupAssociationIdHasBeenSet; }

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline void SetFirewallRuleGroupAssociationId(const Aws::String& value) { m_firewallRuleGroupAssociationIdHasBeenSet = true; m_firewallRuleGroupAssociationId = value; }

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline void SetFirewallRuleGroupAssociationId(Aws::String&& value) { m_firewallRuleGroupAssociationIdHasBeenSet = true; m_firewallRuleGroupAssociationId = std::move(value); }

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline void SetFirewallRuleGroupAssociationId(const char* value) { m_firewallRuleGroupAssociationIdHasBeenSet = true; m_firewallRuleGroupAssociationId.assign(value); }

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(const Aws::String& value) { SetFirewallRuleGroupAssociationId(value); return *this;}

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(Aws::String&& value) { SetFirewallRuleGroupAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(const char* value) { SetFirewallRuleGroupAssociationId(value); return *this;}


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
    inline int GetPriority() const{ return m_priority; }

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
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

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
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

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
    inline UpdateFirewallRuleGroupAssociationRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline const MutationProtectionStatus& GetMutationProtection() const{ return m_mutationProtection; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline bool MutationProtectionHasBeenSet() const { return m_mutationProtectionHasBeenSet; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline void SetMutationProtection(const MutationProtectionStatus& value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = value; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline void SetMutationProtection(MutationProtectionStatus&& value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = std::move(value); }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithMutationProtection(const MutationProtectionStatus& value) { SetMutationProtection(value); return *this;}

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. </p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithMutationProtection(MutationProtectionStatus&& value) { SetMutationProtection(std::move(value)); return *this;}


    /**
     * <p>The name of the rule group association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule group association.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule group association.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule group association.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule group association.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule group association.</p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule group association.</p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule group association.</p>
     */
    inline UpdateFirewallRuleGroupAssociationRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupAssociationId;
    bool m_firewallRuleGroupAssociationIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    MutationProtectionStatus m_mutationProtection;
    bool m_mutationProtectionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
