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
  class DeleteFirewallRuleGroupRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFirewallRuleGroup"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline DeleteFirewallRuleGroupRequest& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline DeleteFirewallRuleGroupRequest& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete.
     * </p>
     */
    inline DeleteFirewallRuleGroupRequest& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
