/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallDomainUpdateOperation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateFirewallDomainsRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateFirewallDomainsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallDomains"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the domain list whose domains you want to update. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
    template<typename FirewallDomainListIdT = Aws::String>
    void SetFirewallDomainListId(FirewallDomainListIdT&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value); }
    template<typename FirewallDomainListIdT = Aws::String>
    UpdateFirewallDomainsRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) { SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What you want DNS Firewall to do with the domains that you are providing:
     * </p> <ul> <li> <p> <code>ADD</code> - Add the domains to the ones that are
     * already in the domain list. </p> </li> <li> <p> <code>REMOVE</code> - Search the
     * domain list for the domains and remove them from the list.</p> </li> <li> <p>
     * <code>REPLACE</code> - Update the domain list to exactly match the list that you
     * are providing. </p> </li> </ul>
     */
    inline FirewallDomainUpdateOperation GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(FirewallDomainUpdateOperation value) { m_operationHasBeenSet = true; m_operation = value; }
    inline UpdateFirewallDomainsRequest& WithOperation(FirewallDomainUpdateOperation value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of domains to use in the update operation.</p>  <p>There is
     * a limit of 1000 domains per request.</p>  <p>Each domain
     * specification in your domain list must satisfy the following requirements: </p>
     * <ul> <li> <p>It can optionally start with <code>*</code> (asterisk).</p> </li>
     * <li> <p>With the exception of the optional starting asterisk, it must only
     * contain the following characters: <code>A-Z</code>, <code>a-z</code>,
     * <code>0-9</code>, <code>-</code> (hyphen).</p> </li> <li> <p>It must be from
     * 1-255 characters in length. </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const { return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    UpdateFirewallDomainsRequest& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = Aws::String>
    UpdateFirewallDomainsRequest& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    FirewallDomainUpdateOperation m_operation{FirewallDomainUpdateOperation::NOT_SET};
    bool m_operationHasBeenSet = false;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
