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
  class GetFirewallRuleGroupAssociationRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API GetFirewallRuleGroupAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFirewallRuleGroupAssociation"; }

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
    inline GetFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(const Aws::String& value) { SetFirewallRuleGroupAssociationId(value); return *this;}

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline GetFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(Aws::String&& value) { SetFirewallRuleGroupAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the <a>FirewallRuleGroupAssociation</a>. </p>
     */
    inline GetFirewallRuleGroupAssociationRequest& WithFirewallRuleGroupAssociationId(const char* value) { SetFirewallRuleGroupAssociationId(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupAssociationId;
    bool m_firewallRuleGroupAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
