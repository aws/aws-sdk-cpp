/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BlockOverrideDnsQueryType.h>
#include <aws/route53globalresolver/model/ConfidenceThreshold.h>
#include <aws/route53globalresolver/model/DnsAdvancedProtection.h>
#include <aws/route53globalresolver/model/FirewallBlockResponse.h>
#include <aws/route53globalresolver/model/FirewallRuleAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>Information for updating a firewall rule in a batch operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/BatchUpdateFirewallRuleInputItem">AWS
 * API Reference</a></p>
 */
class BatchUpdateFirewallRuleInputItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API BatchUpdateFirewallRuleInputItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API BatchUpdateFirewallRuleInputItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API BatchUpdateFirewallRuleInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The action to take when a DNS query matches the firewall rule.</p>
   */
  inline FirewallRuleAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(FirewallRuleAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline BatchUpdateFirewallRuleInputItem& WithAction(FirewallRuleAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS record type for the custom response when the action is BLOCK.</p>
   */
  inline BlockOverrideDnsQueryType GetBlockOverrideDnsType() const { return m_blockOverrideDnsType; }
  inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }
  inline void SetBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    m_blockOverrideDnsTypeHasBeenSet = true;
    m_blockOverrideDnsType = value;
  }
  inline BatchUpdateFirewallRuleInputItem& WithBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    SetBlockOverrideDnsType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom domain name for the BLOCK response.</p>
   */
  inline const Aws::String& GetBlockOverrideDomain() const { return m_blockOverrideDomain; }
  inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }
  template <typename BlockOverrideDomainT = Aws::String>
  void SetBlockOverrideDomain(BlockOverrideDomainT&& value) {
    m_blockOverrideDomainHasBeenSet = true;
    m_blockOverrideDomain = std::forward<BlockOverrideDomainT>(value);
  }
  template <typename BlockOverrideDomainT = Aws::String>
  BatchUpdateFirewallRuleInputItem& WithBlockOverrideDomain(BlockOverrideDomainT&& value) {
    SetBlockOverrideDomain(std::forward<BlockOverrideDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TTL value for the custom response when the action is BLOCK.</p>
   */
  inline int GetBlockOverrideTtl() const { return m_blockOverrideTtl; }
  inline bool BlockOverrideTtlHasBeenSet() const { return m_blockOverrideTtlHasBeenSet; }
  inline void SetBlockOverrideTtl(int value) {
    m_blockOverrideTtlHasBeenSet = true;
    m_blockOverrideTtl = value;
  }
  inline BatchUpdateFirewallRuleInputItem& WithBlockOverrideTtl(int value) {
    SetBlockOverrideTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of block response to return when the action is BLOCK.</p>
   */
  inline FirewallBlockResponse GetBlockResponse() const { return m_blockResponse; }
  inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }
  inline void SetBlockResponse(FirewallBlockResponse value) {
    m_blockResponseHasBeenSet = true;
    m_blockResponse = value;
  }
  inline BatchUpdateFirewallRuleInputItem& WithBlockResponse(FirewallBlockResponse value) {
    SetBlockResponse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence threshold for advanced threat detection.</p>
   */
  inline ConfidenceThreshold GetConfidenceThreshold() const { return m_confidenceThreshold; }
  inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
  inline void SetConfidenceThreshold(ConfidenceThreshold value) {
    m_confidenceThresholdHasBeenSet = true;
    m_confidenceThreshold = value;
  }
  inline BatchUpdateFirewallRuleInputItem& WithConfidenceThreshold(ConfidenceThreshold value) {
    SetConfidenceThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the firewall rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BatchUpdateFirewallRuleInputItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable advanced DNS threat protection for the firewall rule.</p>
   */
  inline DnsAdvancedProtection GetDnsAdvancedProtection() const { return m_dnsAdvancedProtection; }
  inline bool DnsAdvancedProtectionHasBeenSet() const { return m_dnsAdvancedProtectionHasBeenSet; }
  inline void SetDnsAdvancedProtection(DnsAdvancedProtection value) {
    m_dnsAdvancedProtectionHasBeenSet = true;
    m_dnsAdvancedProtection = value;
  }
  inline BatchUpdateFirewallRuleInputItem& WithDnsAdvancedProtection(DnsAdvancedProtection value) {
    SetDnsAdvancedProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the firewall rule to update.</p>
   */
  inline const Aws::String& GetFirewallRuleId() const { return m_firewallRuleId; }
  inline bool FirewallRuleIdHasBeenSet() const { return m_firewallRuleIdHasBeenSet; }
  template <typename FirewallRuleIdT = Aws::String>
  void SetFirewallRuleId(FirewallRuleIdT&& value) {
    m_firewallRuleIdHasBeenSet = true;
    m_firewallRuleId = std::forward<FirewallRuleIdT>(value);
  }
  template <typename FirewallRuleIdT = Aws::String>
  BatchUpdateFirewallRuleInputItem& WithFirewallRuleId(FirewallRuleIdT&& value) {
    SetFirewallRuleId(std::forward<FirewallRuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the firewall rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BatchUpdateFirewallRuleInputItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority of the firewall rule.</p>
   */
  inline long long GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(long long value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline BatchUpdateFirewallRuleInputItem& WithPriority(long long value) {
    SetPriority(value);
    return *this;
  }
  ///@}
 private:
  FirewallRuleAction m_action{FirewallRuleAction::NOT_SET};
  bool m_actionHasBeenSet = false;

  BlockOverrideDnsQueryType m_blockOverrideDnsType{BlockOverrideDnsQueryType::NOT_SET};
  bool m_blockOverrideDnsTypeHasBeenSet = false;

  Aws::String m_blockOverrideDomain;
  bool m_blockOverrideDomainHasBeenSet = false;

  int m_blockOverrideTtl{0};
  bool m_blockOverrideTtlHasBeenSet = false;

  FirewallBlockResponse m_blockResponse{FirewallBlockResponse::NOT_SET};
  bool m_blockResponseHasBeenSet = false;

  ConfidenceThreshold m_confidenceThreshold{ConfidenceThreshold::NOT_SET};
  bool m_confidenceThresholdHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  DnsAdvancedProtection m_dnsAdvancedProtection{DnsAdvancedProtection::NOT_SET};
  bool m_dnsAdvancedProtectionHasBeenSet = false;

  Aws::String m_firewallRuleId;
  bool m_firewallRuleIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  long long m_priority{0};
  bool m_priorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
