/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BlockOverrideDnsQueryType.h>
#include <aws/route53globalresolver/model/ConfidenceThreshold.h>
#include <aws/route53globalresolver/model/DnsAdvancedProtection.h>
#include <aws/route53globalresolver/model/FirewallBlockResponse.h>
#include <aws/route53globalresolver/model/FirewallRuleAction.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class CreateFirewallRuleRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API CreateFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateFirewallRule"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The action that DNS Firewall should take on a DNS query when it matches one
   * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
   * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
   * the request and send metrics and logs to CloudWatch.</p> </li> <li> <p>
   * <code>BLOCK</code> - Disallow the request. This option requires additional
   * details in the rule's <code>BlockResponse</code>.</p> </li> </ul>
   */
  inline FirewallRuleAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(FirewallRuleAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline CreateFirewallRuleRequest& WithAction(FirewallRuleAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS record's type. This determines the format of the record value that
   * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
   * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
   * <code>OVERRIDE</code>.</p> <p>This setting is required if the
   * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
   */
  inline BlockOverrideDnsQueryType GetBlockOverrideDnsType() const { return m_blockOverrideDnsType; }
  inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }
  inline void SetBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    m_blockOverrideDnsTypeHasBeenSet = true;
    m_blockOverrideDnsType = value;
  }
  inline CreateFirewallRuleRequest& WithBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    SetBlockOverrideDnsType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom DNS record to send back in response to the query. Used for the
   * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
   * <code>OVERRIDE</code>.</p> <p>This setting is required if the
   * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
   */
  inline const Aws::String& GetBlockOverrideDomain() const { return m_blockOverrideDomain; }
  inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }
  template <typename BlockOverrideDomainT = Aws::String>
  void SetBlockOverrideDomain(BlockOverrideDomainT&& value) {
    m_blockOverrideDomainHasBeenSet = true;
    m_blockOverrideDomain = std::forward<BlockOverrideDomainT>(value);
  }
  template <typename BlockOverrideDomainT = Aws::String>
  CreateFirewallRuleRequest& WithBlockOverrideDomain(BlockOverrideDomainT&& value) {
    SetBlockOverrideDomain(std::forward<BlockOverrideDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended amount of time, in seconds, for the DNS resolver or web
   * browser to cache the provided override record. Used for the rule action
   * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
   * <code>OVERRIDE</code>.</p> <p>This setting is required if the
   * <code>BlockResponse</code> setting is <code>OVERRIDE</code>.</p>
   */
  inline int GetBlockOverrideTtl() const { return m_blockOverrideTtl; }
  inline bool BlockOverrideTtlHasBeenSet() const { return m_blockOverrideTtlHasBeenSet; }
  inline void SetBlockOverrideTtl(int value) {
    m_blockOverrideTtlHasBeenSet = true;
    m_blockOverrideTtl = value;
  }
  inline CreateFirewallRuleRequest& WithBlockOverrideTtl(int value) {
    SetBlockOverrideTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The response to return when the action is BLOCK. Valid values are NXDOMAIN
   * (domain does not exist), NODATA (domain exists but no records), or OVERRIDE
   * (return custom response).</p>
   */
  inline FirewallBlockResponse GetBlockResponse() const { return m_blockResponse; }
  inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }
  inline void SetBlockResponse(FirewallBlockResponse value) {
    m_blockResponseHasBeenSet = true;
    m_blockResponse = value;
  }
  inline CreateFirewallRuleRequest& WithBlockResponse(FirewallBlockResponse value) {
    SetBlockResponse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency. This means that
   * making the same request multiple times with the same <code>clientToken</code>
   * has the same result every time.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateFirewallRuleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence threshold for advanced threat detection. Valid values are
   * HIGH, MEDIUM, or LOW, indicating the accuracy level required for threat
   * detection.</p>
   */
  inline ConfidenceThreshold GetConfidenceThreshold() const { return m_confidenceThreshold; }
  inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
  inline void SetConfidenceThreshold(ConfidenceThreshold value) {
    m_confidenceThresholdHasBeenSet = true;
    m_confidenceThreshold = value;
  }
  inline CreateFirewallRuleRequest& WithConfidenceThreshold(ConfidenceThreshold value) {
    SetConfidenceThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the firewall rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateFirewallRuleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable advanced DNS threat protection for this rule. Advanced
   * protection can detect and block DNS tunneling and Domain Generation Algorithm
   * (DGA) threats.</p>
   */
  inline DnsAdvancedProtection GetDnsAdvancedProtection() const { return m_dnsAdvancedProtection; }
  inline bool DnsAdvancedProtectionHasBeenSet() const { return m_dnsAdvancedProtectionHasBeenSet; }
  inline void SetDnsAdvancedProtection(DnsAdvancedProtection value) {
    m_dnsAdvancedProtectionHasBeenSet = true;
    m_dnsAdvancedProtection = value;
  }
  inline CreateFirewallRuleRequest& WithDnsAdvancedProtection(DnsAdvancedProtection value) {
    SetDnsAdvancedProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the firewall domain list to use in this rule.</p>
   */
  inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
  inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
  template <typename FirewallDomainListIdT = Aws::String>
  void SetFirewallDomainListId(FirewallDomainListIdT&& value) {
    m_firewallDomainListIdHasBeenSet = true;
    m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value);
  }
  template <typename FirewallDomainListIdT = Aws::String>
  CreateFirewallRuleRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) {
    SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the firewall rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateFirewallRuleRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of this rule. Rules are evaluated in priority order, with lower
   * numbers having higher priority. When a DNS query matches multiple rules, the
   * rule with the highest priority (lowest number) is applied.</p>
   */
  inline long long GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(long long value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline CreateFirewallRuleRequest& WithPriority(long long value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS view to associate with this firewall rule.</p>
   */
  inline const Aws::String& GetDnsViewId() const { return m_dnsViewId; }
  inline bool DnsViewIdHasBeenSet() const { return m_dnsViewIdHasBeenSet; }
  template <typename DnsViewIdT = Aws::String>
  void SetDnsViewId(DnsViewIdT&& value) {
    m_dnsViewIdHasBeenSet = true;
    m_dnsViewId = std::forward<DnsViewIdT>(value);
  }
  template <typename DnsViewIdT = Aws::String>
  CreateFirewallRuleRequest& WithDnsViewId(DnsViewIdT&& value) {
    SetDnsViewId(std::forward<DnsViewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS query type to match for this rule. Examples include A (IPv4 address),
   * AAAA (IPv6 address), MX (mail exchange), or TXT (text record).</p>
   */
  inline const Aws::String& GetQType() const { return m_qType; }
  inline bool QTypeHasBeenSet() const { return m_qTypeHasBeenSet; }
  template <typename QTypeT = Aws::String>
  void SetQType(QTypeT&& value) {
    m_qTypeHasBeenSet = true;
    m_qType = std::forward<QTypeT>(value);
  }
  template <typename QTypeT = Aws::String>
  CreateFirewallRuleRequest& WithQType(QTypeT&& value) {
    SetQType(std::forward<QTypeT>(value));
    return *this;
  }
  ///@}
 private:
  FirewallRuleAction m_action{FirewallRuleAction::NOT_SET};

  BlockOverrideDnsQueryType m_blockOverrideDnsType{BlockOverrideDnsQueryType::NOT_SET};

  Aws::String m_blockOverrideDomain;

  int m_blockOverrideTtl{0};

  FirewallBlockResponse m_blockResponse{FirewallBlockResponse::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  ConfidenceThreshold m_confidenceThreshold{ConfidenceThreshold::NOT_SET};

  Aws::String m_description;

  DnsAdvancedProtection m_dnsAdvancedProtection{DnsAdvancedProtection::NOT_SET};

  Aws::String m_firewallDomainListId;

  Aws::String m_name;

  long long m_priority{0};

  Aws::String m_dnsViewId;

  Aws::String m_qType;
  bool m_actionHasBeenSet = false;
  bool m_blockOverrideDnsTypeHasBeenSet = false;
  bool m_blockOverrideDomainHasBeenSet = false;
  bool m_blockOverrideTtlHasBeenSet = false;
  bool m_blockResponseHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_confidenceThresholdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dnsAdvancedProtectionHasBeenSet = false;
  bool m_firewallDomainListIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_dnsViewIdHasBeenSet = false;
  bool m_qTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
