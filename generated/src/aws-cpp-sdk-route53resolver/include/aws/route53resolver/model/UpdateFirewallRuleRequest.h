﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/Action.h>
#include <aws/route53resolver/model/BlockResponse.h>
#include <aws/route53resolver/model/BlockOverrideDnsType.h>
#include <aws/route53resolver/model/FirewallDomainRedirectionAction.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateFirewallRuleRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateFirewallRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the firewall rule group for the rule. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }
    inline UpdateFirewallRuleRequest& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}
    inline UpdateFirewallRuleRequest& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}
    inline UpdateFirewallRuleRequest& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain list to use in the rule. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const{ return m_firewallDomainListId; }
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
    inline void SetFirewallDomainListId(const Aws::String& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = value; }
    inline void SetFirewallDomainListId(Aws::String&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::move(value); }
    inline void SetFirewallDomainListId(const char* value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId.assign(value); }
    inline UpdateFirewallRuleRequest& WithFirewallDomainListId(const Aws::String& value) { SetFirewallDomainListId(value); return *this;}
    inline UpdateFirewallRuleRequest& WithFirewallDomainListId(Aws::String&& value) { SetFirewallDomainListId(std::move(value)); return *this;}
    inline UpdateFirewallRuleRequest& WithFirewallDomainListId(const char* value) { SetFirewallDomainListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setting that determines the processing order of the rule in the rule
     * group. DNS Firewall processes the rules in a rule group by order of priority,
     * starting from the lowest setting.</p> <p>You must specify a unique priority for
     * each rule in a rule group. To make it easier to insert rules later, leave space
     * between the numbers, for example, use 100, 200, and so on. You can change the
     * priority setting for the rules in a rule group at any time.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateFirewallRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. This option requires additional
     * details in the rule's <code>BlockResponse</code>. </p> </li> </ul>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline UpdateFirewallRuleRequest& WithAction(const Action& value) { SetAction(value); return *this;}
    inline UpdateFirewallRuleRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The way that you want DNS Firewall to block the request. Used for the rule
     * action setting <code>BLOCK</code>.</p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul>
     */
    inline const BlockResponse& GetBlockResponse() const{ return m_blockResponse; }
    inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }
    inline void SetBlockResponse(const BlockResponse& value) { m_blockResponseHasBeenSet = true; m_blockResponse = value; }
    inline void SetBlockResponse(BlockResponse&& value) { m_blockResponseHasBeenSet = true; m_blockResponse = std::move(value); }
    inline UpdateFirewallRuleRequest& WithBlockResponse(const BlockResponse& value) { SetBlockResponse(value); return *this;}
    inline UpdateFirewallRuleRequest& WithBlockResponse(BlockResponse&& value) { SetBlockResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline const Aws::String& GetBlockOverrideDomain() const{ return m_blockOverrideDomain; }
    inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }
    inline void SetBlockOverrideDomain(const Aws::String& value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain = value; }
    inline void SetBlockOverrideDomain(Aws::String&& value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain = std::move(value); }
    inline void SetBlockOverrideDomain(const char* value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain.assign(value); }
    inline UpdateFirewallRuleRequest& WithBlockOverrideDomain(const Aws::String& value) { SetBlockOverrideDomain(value); return *this;}
    inline UpdateFirewallRuleRequest& WithBlockOverrideDomain(Aws::String&& value) { SetBlockOverrideDomain(std::move(value)); return *this;}
    inline UpdateFirewallRuleRequest& WithBlockOverrideDomain(const char* value) { SetBlockOverrideDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline const BlockOverrideDnsType& GetBlockOverrideDnsType() const{ return m_blockOverrideDnsType; }
    inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }
    inline void SetBlockOverrideDnsType(const BlockOverrideDnsType& value) { m_blockOverrideDnsTypeHasBeenSet = true; m_blockOverrideDnsType = value; }
    inline void SetBlockOverrideDnsType(BlockOverrideDnsType&& value) { m_blockOverrideDnsTypeHasBeenSet = true; m_blockOverrideDnsType = std::move(value); }
    inline UpdateFirewallRuleRequest& WithBlockOverrideDnsType(const BlockOverrideDnsType& value) { SetBlockOverrideDnsType(value); return *this;}
    inline UpdateFirewallRuleRequest& WithBlockOverrideDnsType(BlockOverrideDnsType&& value) { SetBlockOverrideDnsType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline int GetBlockOverrideTtl() const{ return m_blockOverrideTtl; }
    inline bool BlockOverrideTtlHasBeenSet() const { return m_blockOverrideTtlHasBeenSet; }
    inline void SetBlockOverrideTtl(int value) { m_blockOverrideTtlHasBeenSet = true; m_blockOverrideTtl = value; }
    inline UpdateFirewallRuleRequest& WithBlockOverrideTtl(int value) { SetBlockOverrideTtl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateFirewallRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateFirewallRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateFirewallRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> How you want the the rule to evaluate DNS redirection in the DNS redirection
     * chain, such as CNAME or DNAME. </p> <p> <code>Inspect_Redirection_Domain
     * </code>(Default) inspects all domains in the redirection chain. The individual
     * domains in the redirection chain must be added to the domain list.</p> <p>
     * <code>Trust_Redirection_Domain </code> inspects only the first domain in the
     * redirection chain. You don't need to add the subsequent domains in the domain in
     * the redirection list to the domain list.</p>
     */
    inline const FirewallDomainRedirectionAction& GetFirewallDomainRedirectionAction() const{ return m_firewallDomainRedirectionAction; }
    inline bool FirewallDomainRedirectionActionHasBeenSet() const { return m_firewallDomainRedirectionActionHasBeenSet; }
    inline void SetFirewallDomainRedirectionAction(const FirewallDomainRedirectionAction& value) { m_firewallDomainRedirectionActionHasBeenSet = true; m_firewallDomainRedirectionAction = value; }
    inline void SetFirewallDomainRedirectionAction(FirewallDomainRedirectionAction&& value) { m_firewallDomainRedirectionActionHasBeenSet = true; m_firewallDomainRedirectionAction = std::move(value); }
    inline UpdateFirewallRuleRequest& WithFirewallDomainRedirectionAction(const FirewallDomainRedirectionAction& value) { SetFirewallDomainRedirectionAction(value); return *this;}
    inline UpdateFirewallRuleRequest& WithFirewallDomainRedirectionAction(FirewallDomainRedirectionAction&& value) { SetFirewallDomainRedirectionAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS query type you want the rule to evaluate. Allowed values are; </p>
     * <ul> <li> <p> A: Returns an IPv4 address.</p> </li> <li> <p>AAAA: Returns an
     * Ipv6 address.</p> </li> <li> <p>CAA: Restricts CAs that can create SSL/TLS
     * certifications for the domain.</p> </li> <li> <p>CNAME: Returns another domain
     * name.</p> </li> <li> <p>DS: Record that identifies the DNSSEC signing key of a
     * delegated zone.</p> </li> <li> <p>MX: Specifies mail servers.</p> </li> <li>
     * <p>NAPTR: Regular-expression-based rewriting of domain names.</p> </li> <li>
     * <p>NS: Authoritative name servers.</p> </li> <li> <p>PTR: Maps an IP address to
     * a domain name.</p> </li> <li> <p>SOA: Start of authority record for the
     * zone.</p> </li> <li> <p>SPF: Lists the servers authorized to send emails from a
     * domain.</p> </li> <li> <p>SRV: Application specific values that identify
     * servers.</p> </li> <li> <p>TXT: Verifies email senders and application-specific
     * values.</p> </li> <li> <p>A query type you define by using the DNS type ID, for
     * example 28 for AAAA. The values must be defined as TYPENUMBER, where the NUMBER
     * can be 1-65334, for example, TYPE28. For more information, see <a
     * href="https://en.wikipedia.org/wiki/List_of_DNS_record_types">List of DNS record
     * types</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetQtype() const{ return m_qtype; }
    inline bool QtypeHasBeenSet() const { return m_qtypeHasBeenSet; }
    inline void SetQtype(const Aws::String& value) { m_qtypeHasBeenSet = true; m_qtype = value; }
    inline void SetQtype(Aws::String&& value) { m_qtypeHasBeenSet = true; m_qtype = std::move(value); }
    inline void SetQtype(const char* value) { m_qtypeHasBeenSet = true; m_qtype.assign(value); }
    inline UpdateFirewallRuleRequest& WithQtype(const Aws::String& value) { SetQtype(value); return *this;}
    inline UpdateFirewallRuleRequest& WithQtype(Aws::String&& value) { SetQtype(std::move(value)); return *this;}
    inline UpdateFirewallRuleRequest& WithQtype(const char* value) { SetQtype(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    BlockResponse m_blockResponse;
    bool m_blockResponseHasBeenSet = false;

    Aws::String m_blockOverrideDomain;
    bool m_blockOverrideDomainHasBeenSet = false;

    BlockOverrideDnsType m_blockOverrideDnsType;
    bool m_blockOverrideDnsTypeHasBeenSet = false;

    int m_blockOverrideTtl;
    bool m_blockOverrideTtlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FirewallDomainRedirectionAction m_firewallDomainRedirectionAction;
    bool m_firewallDomainRedirectionActionHasBeenSet = false;

    Aws::String m_qtype;
    bool m_qtypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
