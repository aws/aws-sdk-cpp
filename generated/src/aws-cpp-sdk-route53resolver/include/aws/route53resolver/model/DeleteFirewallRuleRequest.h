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
  class DeleteFirewallRuleRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFirewallRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const { return m_firewallRuleGroupId; }
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }
    template<typename FirewallRuleGroupIdT = Aws::String>
    void SetFirewallRuleGroupId(FirewallRuleGroupIdT&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::forward<FirewallRuleGroupIdT>(value); }
    template<typename FirewallRuleGroupIdT = Aws::String>
    DeleteFirewallRuleRequest& WithFirewallRuleGroupId(FirewallRuleGroupIdT&& value) { SetFirewallRuleGroupId(std::forward<FirewallRuleGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
    template<typename FirewallDomainListIdT = Aws::String>
    void SetFirewallDomainListId(FirewallDomainListIdT&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value); }
    template<typename FirewallDomainListIdT = Aws::String>
    DeleteFirewallRuleRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) { SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID that is created for a DNS Firewall Advanced rule. </p>
     */
    inline const Aws::String& GetFirewallThreatProtectionId() const { return m_firewallThreatProtectionId; }
    inline bool FirewallThreatProtectionIdHasBeenSet() const { return m_firewallThreatProtectionIdHasBeenSet; }
    template<typename FirewallThreatProtectionIdT = Aws::String>
    void SetFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) { m_firewallThreatProtectionIdHasBeenSet = true; m_firewallThreatProtectionId = std::forward<FirewallThreatProtectionIdT>(value); }
    template<typename FirewallThreatProtectionIdT = Aws::String>
    DeleteFirewallRuleRequest& WithFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) { SetFirewallThreatProtectionId(std::forward<FirewallThreatProtectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS query type that the rule you are deleting evaluates. Allowed values
     * are; </p> <ul> <li> <p> A: Returns an IPv4 address.</p> </li> <li> <p>AAAA:
     * Returns an Ipv6 address.</p> </li> <li> <p>CAA: Restricts CAs that can create
     * SSL/TLS certifications for the domain.</p> </li> <li> <p>CNAME: Returns another
     * domain name.</p> </li> <li> <p>DS: Record that identifies the DNSSEC signing key
     * of a delegated zone.</p> </li> <li> <p>MX: Specifies mail servers.</p> </li>
     * <li> <p>NAPTR: Regular-expression-based rewriting of domain names.</p> </li>
     * <li> <p>NS: Authoritative name servers.</p> </li> <li> <p>PTR: Maps an IP
     * address to a domain name.</p> </li> <li> <p>SOA: Start of authority record for
     * the zone.</p> </li> <li> <p>SPF: Lists the servers authorized to send emails
     * from a domain.</p> </li> <li> <p>SRV: Application specific values that identify
     * servers.</p> </li> <li> <p>TXT: Verifies email senders and application-specific
     * values.</p> </li> <li> <p>A query type you define by using the DNS type ID, for
     * example 28 for AAAA. The values must be defined as TYPENUMBER, where the NUMBER
     * can be 1-65334, for example, TYPE28. For more information, see <a
     * href="https://en.wikipedia.org/wiki/List_of_DNS_record_types">List of DNS record
     * types</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetQtype() const { return m_qtype; }
    inline bool QtypeHasBeenSet() const { return m_qtypeHasBeenSet; }
    template<typename QtypeT = Aws::String>
    void SetQtype(QtypeT&& value) { m_qtypeHasBeenSet = true; m_qtype = std::forward<QtypeT>(value); }
    template<typename QtypeT = Aws::String>
    DeleteFirewallRuleRequest& WithQtype(QtypeT&& value) { SetQtype(std::forward<QtypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    Aws::String m_firewallThreatProtectionId;
    bool m_firewallThreatProtectionIdHasBeenSet = false;

    Aws::String m_qtype;
    bool m_qtypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
