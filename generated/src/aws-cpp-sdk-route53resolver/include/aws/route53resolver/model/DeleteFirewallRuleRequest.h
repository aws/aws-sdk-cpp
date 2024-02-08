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
    AWS_ROUTE53RESOLVER_API DeleteFirewallRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFirewallRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline DeleteFirewallRuleRequest& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline DeleteFirewallRuleRequest& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to delete the
     * rule from. </p>
     */
    inline DeleteFirewallRuleRequest& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}


    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const{ return m_firewallDomainListId; }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline void SetFirewallDomainListId(const Aws::String& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = value; }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline void SetFirewallDomainListId(Aws::String&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::move(value); }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline void SetFirewallDomainListId(const char* value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId.assign(value); }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline DeleteFirewallRuleRequest& WithFirewallDomainListId(const Aws::String& value) { SetFirewallDomainListId(value); return *this;}

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline DeleteFirewallRuleRequest& WithFirewallDomainListId(Aws::String&& value) { SetFirewallDomainListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline DeleteFirewallRuleRequest& WithFirewallDomainListId(const char* value) { SetFirewallDomainListId(value); return *this;}


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
     * values.</p> </li> </ul>
     */
    inline const Aws::String& GetQtype() const{ return m_qtype; }

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
     * values.</p> </li> </ul>
     */
    inline bool QtypeHasBeenSet() const { return m_qtypeHasBeenSet; }

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
     * values.</p> </li> </ul>
     */
    inline void SetQtype(const Aws::String& value) { m_qtypeHasBeenSet = true; m_qtype = value; }

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
     * values.</p> </li> </ul>
     */
    inline void SetQtype(Aws::String&& value) { m_qtypeHasBeenSet = true; m_qtype = std::move(value); }

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
     * values.</p> </li> </ul>
     */
    inline void SetQtype(const char* value) { m_qtypeHasBeenSet = true; m_qtype.assign(value); }

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
     * values.</p> </li> </ul>
     */
    inline DeleteFirewallRuleRequest& WithQtype(const Aws::String& value) { SetQtype(value); return *this;}

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
     * values.</p> </li> </ul>
     */
    inline DeleteFirewallRuleRequest& WithQtype(Aws::String&& value) { SetQtype(std::move(value)); return *this;}

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
     * values.</p> </li> </ul>
     */
    inline DeleteFirewallRuleRequest& WithQtype(const char* value) { SetQtype(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    Aws::String m_qtype;
    bool m_qtypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
