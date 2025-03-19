/**
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
#include <aws/route53resolver/model/DnsThreatProtection.h>
#include <aws/route53resolver/model/ConfidenceThreshold.h>
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
    AWS_ROUTE53RESOLVER_API UpdateFirewallRuleRequest() = default;

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
    inline const Aws::String& GetFirewallRuleGroupId() const { return m_firewallRuleGroupId; }
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }
    template<typename FirewallRuleGroupIdT = Aws::String>
    void SetFirewallRuleGroupId(FirewallRuleGroupIdT&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::forward<FirewallRuleGroupIdT>(value); }
    template<typename FirewallRuleGroupIdT = Aws::String>
    UpdateFirewallRuleRequest& WithFirewallRuleGroupId(FirewallRuleGroupIdT&& value) { SetFirewallRuleGroupId(std::forward<FirewallRuleGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain list to use in the rule. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
    template<typename FirewallDomainListIdT = Aws::String>
    void SetFirewallDomainListId(FirewallDomainListIdT&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value); }
    template<typename FirewallDomainListIdT = Aws::String>
    UpdateFirewallRuleRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) { SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS Firewall Advanced rule ID. </p>
     */
    inline const Aws::String& GetFirewallThreatProtectionId() const { return m_firewallThreatProtectionId; }
    inline bool FirewallThreatProtectionIdHasBeenSet() const { return m_firewallThreatProtectionIdHasBeenSet; }
    template<typename FirewallThreatProtectionIdT = Aws::String>
    void SetFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) { m_firewallThreatProtectionIdHasBeenSet = true; m_firewallThreatProtectionId = std::forward<FirewallThreatProtectionIdT>(value); }
    template<typename FirewallThreatProtectionIdT = Aws::String>
    UpdateFirewallRuleRequest& WithFirewallThreatProtectionId(FirewallThreatProtectionIdT&& value) { SetFirewallThreatProtectionId(std::forward<FirewallThreatProtectionIdT>(value)); return *this;}
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
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateFirewallRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list, or a threat in a DNS Firewall Advanced
     * rule:</p> <ul> <li> <p> <code>ALLOW</code> - Permit the request to go through.
     * Not available for DNS Firewall Advanced rules.</p> </li> <li> <p>
     * <code>ALERT</code> - Permit the request to go through but send an alert to the
     * logs.</p> </li> <li> <p> <code>BLOCK</code> - Disallow the request. This option
     * requires additional details in the rule's <code>BlockResponse</code>. </p> </li>
     * </ul>
     */
    inline Action GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(Action value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateFirewallRuleRequest& WithAction(Action value) { SetAction(value); return *this;}
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
    inline BlockResponse GetBlockResponse() const { return m_blockResponse; }
    inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }
    inline void SetBlockResponse(BlockResponse value) { m_blockResponseHasBeenSet = true; m_blockResponse = value; }
    inline UpdateFirewallRuleRequest& WithBlockResponse(BlockResponse value) { SetBlockResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline const Aws::String& GetBlockOverrideDomain() const { return m_blockOverrideDomain; }
    inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }
    template<typename BlockOverrideDomainT = Aws::String>
    void SetBlockOverrideDomain(BlockOverrideDomainT&& value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain = std::forward<BlockOverrideDomainT>(value); }
    template<typename BlockOverrideDomainT = Aws::String>
    UpdateFirewallRuleRequest& WithBlockOverrideDomain(BlockOverrideDomainT&& value) { SetBlockOverrideDomain(std::forward<BlockOverrideDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline BlockOverrideDnsType GetBlockOverrideDnsType() const { return m_blockOverrideDnsType; }
    inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }
    inline void SetBlockOverrideDnsType(BlockOverrideDnsType value) { m_blockOverrideDnsTypeHasBeenSet = true; m_blockOverrideDnsType = value; }
    inline UpdateFirewallRuleRequest& WithBlockOverrideDnsType(BlockOverrideDnsType value) { SetBlockOverrideDnsType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline int GetBlockOverrideTtl() const { return m_blockOverrideTtl; }
    inline bool BlockOverrideTtlHasBeenSet() const { return m_blockOverrideTtlHasBeenSet; }
    inline void SetBlockOverrideTtl(int value) { m_blockOverrideTtlHasBeenSet = true; m_blockOverrideTtl = value; }
    inline UpdateFirewallRuleRequest& WithBlockOverrideTtl(int value) { SetBlockOverrideTtl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFirewallRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> How you want the the rule to evaluate DNS redirection in the DNS redirection
     * chain, such as CNAME or DNAME. </p> <p> <code>INSPECT_REDIRECTION_DOMAIN</code>:
     * (Default) inspects all domains in the redirection chain. The individual domains
     * in the redirection chain must be added to the domain list.</p> <p>
     * <code>TRUST_REDIRECTION_DOMAIN</code>: Inspects only the first domain in the
     * redirection chain. You don't need to add the subsequent domains in the domain in
     * the redirection list to the domain list.</p>
     */
    inline FirewallDomainRedirectionAction GetFirewallDomainRedirectionAction() const { return m_firewallDomainRedirectionAction; }
    inline bool FirewallDomainRedirectionActionHasBeenSet() const { return m_firewallDomainRedirectionActionHasBeenSet; }
    inline void SetFirewallDomainRedirectionAction(FirewallDomainRedirectionAction value) { m_firewallDomainRedirectionActionHasBeenSet = true; m_firewallDomainRedirectionAction = value; }
    inline UpdateFirewallRuleRequest& WithFirewallDomainRedirectionAction(FirewallDomainRedirectionAction value) { SetFirewallDomainRedirectionAction(value); return *this;}
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
     * types</a>.</p>  <p>If you set up a firewall BLOCK rule with action
     * NXDOMAIN on query type equals AAAA, this action will not be applied to synthetic
     * IPv6 addresses generated when DNS64 is enabled. </p>  </li> </ul>
     */
    inline const Aws::String& GetQtype() const { return m_qtype; }
    inline bool QtypeHasBeenSet() const { return m_qtypeHasBeenSet; }
    template<typename QtypeT = Aws::String>
    void SetQtype(QtypeT&& value) { m_qtypeHasBeenSet = true; m_qtype = std::forward<QtypeT>(value); }
    template<typename QtypeT = Aws::String>
    UpdateFirewallRuleRequest& WithQtype(QtypeT&& value) { SetQtype(std::forward<QtypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the DNS Firewall Advanced rule. Valid values are: </p> <ul> <li>
     * <p> <code>DGA</code>: Domain generation algorithms detection. DGAs are used by
     * attackers to generate a large number of domains to to launch malware
     * attacks.</p> </li> <li> <p> <code>DNS_TUNNELING</code>: DNS tunneling detection.
     * DNS tunneling is used by attackers to exfiltrate data from the client by using
     * the DNS tunnel without making a network connection to the client.</p> </li>
     * </ul>
     */
    inline DnsThreatProtection GetDnsThreatProtection() const { return m_dnsThreatProtection; }
    inline bool DnsThreatProtectionHasBeenSet() const { return m_dnsThreatProtectionHasBeenSet; }
    inline void SetDnsThreatProtection(DnsThreatProtection value) { m_dnsThreatProtectionHasBeenSet = true; m_dnsThreatProtection = value; }
    inline UpdateFirewallRuleRequest& WithDnsThreatProtection(DnsThreatProtection value) { SetDnsThreatProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The confidence threshold for DNS Firewall Advanced. You must provide this
     * value when you create a DNS Firewall Advanced rule. The confidence level values
     * mean: </p> <ul> <li> <p> <code>LOW</code>: Provides the highest detection rate
     * for threats, but also increases false positives.</p> </li> <li> <p>
     * <code>MEDIUM</code>: Provides a balance between detecting threats and false
     * positives.</p> </li> <li> <p> <code>HIGH</code>: Detects only the most well
     * corroborated threats with a low rate of false positives. </p> </li> </ul>
     */
    inline ConfidenceThreshold GetConfidenceThreshold() const { return m_confidenceThreshold; }
    inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
    inline void SetConfidenceThreshold(ConfidenceThreshold value) { m_confidenceThresholdHasBeenSet = true; m_confidenceThreshold = value; }
    inline UpdateFirewallRuleRequest& WithConfidenceThreshold(ConfidenceThreshold value) { SetConfidenceThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    Aws::String m_firewallThreatProtectionId;
    bool m_firewallThreatProtectionIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Action m_action{Action::NOT_SET};
    bool m_actionHasBeenSet = false;

    BlockResponse m_blockResponse{BlockResponse::NOT_SET};
    bool m_blockResponseHasBeenSet = false;

    Aws::String m_blockOverrideDomain;
    bool m_blockOverrideDomainHasBeenSet = false;

    BlockOverrideDnsType m_blockOverrideDnsType{BlockOverrideDnsType::NOT_SET};
    bool m_blockOverrideDnsTypeHasBeenSet = false;

    int m_blockOverrideTtl{0};
    bool m_blockOverrideTtlHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FirewallDomainRedirectionAction m_firewallDomainRedirectionAction{FirewallDomainRedirectionAction::NOT_SET};
    bool m_firewallDomainRedirectionActionHasBeenSet = false;

    Aws::String m_qtype;
    bool m_qtypeHasBeenSet = false;

    DnsThreatProtection m_dnsThreatProtection{DnsThreatProtection::NOT_SET};
    bool m_dnsThreatProtectionHasBeenSet = false;

    ConfidenceThreshold m_confidenceThreshold{ConfidenceThreshold::NOT_SET};
    bool m_confidenceThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
