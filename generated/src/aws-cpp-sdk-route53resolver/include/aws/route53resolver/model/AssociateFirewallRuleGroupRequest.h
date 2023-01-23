/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/MutationProtectionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AssociateFirewallRuleGroupRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API AssociateFirewallRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFirewallRuleGroup"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}


    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that you associate with the specified VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p> <p>You must specify a unique priority for each rule group that you
     * associate with a single VPC. To make it easier to insert rule groups later,
     * leave space between the numbers, for example, use 101, 200, and so on. You can
     * change the priority setting for a rule group association after you create
     * it.</p> <p>The allowed values for <code>Priority</code> are between 100 and
     * 9900.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that you associate with the specified VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p> <p>You must specify a unique priority for each rule group that you
     * associate with a single VPC. To make it easier to insert rule groups later,
     * leave space between the numbers, for example, use 101, 200, and so on. You can
     * change the priority setting for a rule group association after you create
     * it.</p> <p>The allowed values for <code>Priority</code> are between 100 and
     * 9900.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that you associate with the specified VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p> <p>You must specify a unique priority for each rule group that you
     * associate with a single VPC. To make it easier to insert rule groups later,
     * leave space between the numbers, for example, use 101, 200, and so on. You can
     * change the priority setting for a rule group association after you create
     * it.</p> <p>The allowed values for <code>Priority</code> are between 100 and
     * 9900.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The setting that determines the processing order of the rule group among the
     * rule groups that you associate with the specified VPC. DNS Firewall filters VPC
     * traffic starting from the rule group with the lowest numeric priority setting.
     * </p> <p>You must specify a unique priority for each rule group that you
     * associate with a single VPC. To make it easier to insert rule groups later,
     * leave space between the numbers, for example, use 101, 200, and so on. You can
     * change the priority setting for a rule group association after you create
     * it.</p> <p>The allowed values for <code>Priority</code> are between 100 and
     * 9900.</p>
     */
    inline AssociateFirewallRuleGroupRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline AssociateFirewallRuleGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline AssociateFirewallRuleGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline AssociateFirewallRuleGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. When you create the association, the default setting is
     * <code>DISABLED</code>. </p>
     */
    inline const MutationProtectionStatus& GetMutationProtection() const{ return m_mutationProtection; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. When you create the association, the default setting is
     * <code>DISABLED</code>. </p>
     */
    inline bool MutationProtectionHasBeenSet() const { return m_mutationProtectionHasBeenSet; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. When you create the association, the default setting is
     * <code>DISABLED</code>. </p>
     */
    inline void SetMutationProtection(const MutationProtectionStatus& value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = value; }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. When you create the association, the default setting is
     * <code>DISABLED</code>. </p>
     */
    inline void SetMutationProtection(MutationProtectionStatus&& value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = std::move(value); }

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. When you create the association, the default setting is
     * <code>DISABLED</code>. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithMutationProtection(const MutationProtectionStatus& value) { SetMutationProtection(value); return *this;}

    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. When you create the association, the default setting is
     * <code>DISABLED</code>. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithMutationProtection(MutationProtectionStatus&& value) { SetMutationProtection(std::move(value)); return *this;}


    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline AssociateFirewallRuleGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline AssociateFirewallRuleGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline AssociateFirewallRuleGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MutationProtectionStatus m_mutationProtection;
    bool m_mutationProtectionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
