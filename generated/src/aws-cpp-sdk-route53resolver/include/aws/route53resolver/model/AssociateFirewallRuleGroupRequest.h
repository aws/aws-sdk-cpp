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
    AWS_ROUTE53RESOLVER_API AssociateFirewallRuleGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFirewallRuleGroup"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    AssociateFirewallRuleGroupRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the firewall rule group. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const { return m_firewallRuleGroupId; }
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }
    template<typename FirewallRuleGroupIdT = Aws::String>
    void SetFirewallRuleGroupId(FirewallRuleGroupIdT&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::forward<FirewallRuleGroupIdT>(value); }
    template<typename FirewallRuleGroupIdT = Aws::String>
    AssociateFirewallRuleGroupRequest& WithFirewallRuleGroupId(FirewallRuleGroupIdT&& value) { SetFirewallRuleGroupId(std::forward<FirewallRuleGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the VPC that you want to associate with the rule
     * group. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AssociateFirewallRuleGroupRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline AssociateFirewallRuleGroupRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name that lets you identify the association, to manage and use it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssociateFirewallRuleGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, this setting disallows modification or removal of the
     * association, to help prevent against accidentally altering DNS firewall
     * protections. When you create the association, the default setting is
     * <code>DISABLED</code>. </p>
     */
    inline MutationProtectionStatus GetMutationProtection() const { return m_mutationProtection; }
    inline bool MutationProtectionHasBeenSet() const { return m_mutationProtectionHasBeenSet; }
    inline void SetMutationProtection(MutationProtectionStatus value) { m_mutationProtectionHasBeenSet = true; m_mutationProtection = value; }
    inline AssociateFirewallRuleGroupRequest& WithMutationProtection(MutationProtectionStatus value) { SetMutationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tag keys and values that you want to associate with the rule
     * group association. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssociateFirewallRuleGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssociateFirewallRuleGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creatorRequestIdHasBeenSet = true;

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MutationProtectionStatus m_mutationProtection{MutationProtectionStatus::NOT_SET};
    bool m_mutationProtectionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
