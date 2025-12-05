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
class UpdateFirewallRuleRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallRule"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The action that DNS Firewall should take on a DNS query when it matches one
   * of the domains in the rule's domain list, or a threat in a DNS Firewall Advanced
   * rule.</p>
   */
  inline FirewallRuleAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(FirewallRuleAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UpdateFirewallRuleRequest& WithAction(FirewallRuleAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS record's type. This determines the format of the record value that
   * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
   * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
   * <code>OVERRIDE</code>.</p>
   */
  inline BlockOverrideDnsQueryType GetBlockOverrideDnsType() const { return m_blockOverrideDnsType; }
  inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }
  inline void SetBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    m_blockOverrideDnsTypeHasBeenSet = true;
    m_blockOverrideDnsType = value;
  }
  inline UpdateFirewallRuleRequest& WithBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    SetBlockOverrideDnsType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom DNS record to send back in response to the query. Used for the
   * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
   * <code>OVERRIDE</code>.</p>
   */
  inline const Aws::String& GetBlockOverrideDomain() const { return m_blockOverrideDomain; }
  inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }
  template <typename BlockOverrideDomainT = Aws::String>
  void SetBlockOverrideDomain(BlockOverrideDomainT&& value) {
    m_blockOverrideDomainHasBeenSet = true;
    m_blockOverrideDomain = std::forward<BlockOverrideDomainT>(value);
  }
  template <typename BlockOverrideDomainT = Aws::String>
  UpdateFirewallRuleRequest& WithBlockOverrideDomain(BlockOverrideDomainT&& value) {
    SetBlockOverrideDomain(std::forward<BlockOverrideDomainT>(value));
    return *this;
  }
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
  inline void SetBlockOverrideTtl(int value) {
    m_blockOverrideTtlHasBeenSet = true;
    m_blockOverrideTtl = value;
  }
  inline UpdateFirewallRuleRequest& WithBlockOverrideTtl(int value) {
    SetBlockOverrideTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The way that you want DNS Firewall to block the request. Used for the rule
   * action setting <code>BLOCK</code>.</p>
   */
  inline FirewallBlockResponse GetBlockResponse() const { return m_blockResponse; }
  inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }
  inline void SetBlockResponse(FirewallBlockResponse value) {
    m_blockResponseHasBeenSet = true;
    m_blockResponse = value;
  }
  inline UpdateFirewallRuleRequest& WithBlockResponse(FirewallBlockResponse value) {
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
  UpdateFirewallRuleRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence threshold for DNS Firewall Advanced. You must provide this
   * value when you create a DNS Firewall Advanced rule.</p>
   */
  inline ConfidenceThreshold GetConfidenceThreshold() const { return m_confidenceThreshold; }
  inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
  inline void SetConfidenceThreshold(ConfidenceThreshold value) {
    m_confidenceThresholdHasBeenSet = true;
    m_confidenceThreshold = value;
  }
  inline UpdateFirewallRuleRequest& WithConfidenceThreshold(ConfidenceThreshold value) {
    SetConfidenceThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description for the Firewall rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateFirewallRuleRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the DNS Firewall Advanced rule. Valid values are DGA and
   * DNS_TUNNELING.</p>
   */
  inline DnsAdvancedProtection GetDnsAdvancedProtection() const { return m_dnsAdvancedProtection; }
  inline bool DnsAdvancedProtectionHasBeenSet() const { return m_dnsAdvancedProtectionHasBeenSet; }
  inline void SetDnsAdvancedProtection(DnsAdvancedProtection value) {
    m_dnsAdvancedProtectionHasBeenSet = true;
    m_dnsAdvancedProtection = value;
  }
  inline UpdateFirewallRuleRequest& WithDnsAdvancedProtection(DnsAdvancedProtection value) {
    SetDnsAdvancedProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS Firewall rule.</p>
   */
  inline const Aws::String& GetFirewallRuleId() const { return m_firewallRuleId; }
  inline bool FirewallRuleIdHasBeenSet() const { return m_firewallRuleIdHasBeenSet; }
  template <typename FirewallRuleIdT = Aws::String>
  void SetFirewallRuleId(FirewallRuleIdT&& value) {
    m_firewallRuleIdHasBeenSet = true;
    m_firewallRuleId = std::forward<FirewallRuleIdT>(value);
  }
  template <typename FirewallRuleIdT = Aws::String>
  UpdateFirewallRuleRequest& WithFirewallRuleId(FirewallRuleIdT&& value) {
    SetFirewallRuleId(std::forward<FirewallRuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the DNS Firewall rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateFirewallRuleRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The setting that determines the processing order of the rule in the rule
   * group. DNS Firewall processes the rules in a rule group by order of priority,
   * starting from the lowest setting.</p>
   */
  inline long long GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(long long value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline UpdateFirewallRuleRequest& WithPriority(long long value) {
    SetPriority(value);
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

  Aws::String m_firewallRuleId;

  Aws::String m_name;

  long long m_priority{0};
  bool m_actionHasBeenSet = false;
  bool m_blockOverrideDnsTypeHasBeenSet = false;
  bool m_blockOverrideDomainHasBeenSet = false;
  bool m_blockOverrideTtlHasBeenSet = false;
  bool m_blockResponseHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_confidenceThresholdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dnsAdvancedProtectionHasBeenSet = false;
  bool m_firewallRuleIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
