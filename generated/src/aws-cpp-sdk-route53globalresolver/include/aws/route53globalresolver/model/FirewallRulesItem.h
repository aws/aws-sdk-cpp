/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BlockOverrideDnsQueryType.h>
#include <aws/route53globalresolver/model/CRResourceStatus.h>
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
 * <p>Summary information about a firewall rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/FirewallRulesItem">AWS
 * API Reference</a></p>
 */
class FirewallRulesItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API FirewallRulesItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API FirewallRulesItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API FirewallRulesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The action configured for the firewall rule.</p>
   */
  inline FirewallRuleAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(FirewallRuleAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline FirewallRulesItem& WithAction(FirewallRuleAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS record type configured for the firewall rule's custom response.</p>
   */
  inline BlockOverrideDnsQueryType GetBlockOverrideDnsType() const { return m_blockOverrideDnsType; }
  inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }
  inline void SetBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    m_blockOverrideDnsTypeHasBeenSet = true;
    m_blockOverrideDnsType = value;
  }
  inline FirewallRulesItem& WithBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    SetBlockOverrideDnsType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom domain name configured for the firewall rule's BLOCK response.</p>
   */
  inline const Aws::String& GetBlockOverrideDomain() const { return m_blockOverrideDomain; }
  inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }
  template <typename BlockOverrideDomainT = Aws::String>
  void SetBlockOverrideDomain(BlockOverrideDomainT&& value) {
    m_blockOverrideDomainHasBeenSet = true;
    m_blockOverrideDomain = std::forward<BlockOverrideDomainT>(value);
  }
  template <typename BlockOverrideDomainT = Aws::String>
  FirewallRulesItem& WithBlockOverrideDomain(BlockOverrideDomainT&& value) {
    SetBlockOverrideDomain(std::forward<BlockOverrideDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TTL value configured for the firewall rule's custom response.</p>
   */
  inline int GetBlockOverrideTtl() const { return m_blockOverrideTtl; }
  inline bool BlockOverrideTtlHasBeenSet() const { return m_blockOverrideTtlHasBeenSet; }
  inline void SetBlockOverrideTtl(int value) {
    m_blockOverrideTtlHasBeenSet = true;
    m_blockOverrideTtl = value;
  }
  inline FirewallRulesItem& WithBlockOverrideTtl(int value) {
    SetBlockOverrideTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of block response configured for the firewall rule.</p>
   */
  inline FirewallBlockResponse GetBlockResponse() const { return m_blockResponse; }
  inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }
  inline void SetBlockResponse(FirewallBlockResponse value) {
    m_blockResponseHasBeenSet = true;
    m_blockResponse = value;
  }
  inline FirewallRulesItem& WithBlockResponse(FirewallBlockResponse value) {
    SetBlockResponse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence threshold configured for the firewall rule's advanced threat
   * detection.</p>
   */
  inline ConfidenceThreshold GetConfidenceThreshold() const { return m_confidenceThreshold; }
  inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }
  inline void SetConfidenceThreshold(ConfidenceThreshold value) {
    m_confidenceThresholdHasBeenSet = true;
    m_confidenceThreshold = value;
  }
  inline FirewallRulesItem& WithConfidenceThreshold(ConfidenceThreshold value) {
    SetConfidenceThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the firewall rule was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  FirewallRulesItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the firewall rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FirewallRulesItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether advanced DNS threat protection is enabled for the firewall rule.</p>
   */
  inline DnsAdvancedProtection GetDnsAdvancedProtection() const { return m_dnsAdvancedProtection; }
  inline bool DnsAdvancedProtectionHasBeenSet() const { return m_dnsAdvancedProtectionHasBeenSet; }
  inline void SetDnsAdvancedProtection(DnsAdvancedProtection value) {
    m_dnsAdvancedProtectionHasBeenSet = true;
    m_dnsAdvancedProtection = value;
  }
  inline FirewallRulesItem& WithDnsAdvancedProtection(DnsAdvancedProtection value) {
    SetDnsAdvancedProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the firewall domain list associated with the firewall rule.</p>
   */
  inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
  inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
  template <typename FirewallDomainListIdT = Aws::String>
  void SetFirewallDomainListId(FirewallDomainListIdT&& value) {
    m_firewallDomainListIdHasBeenSet = true;
    m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value);
  }
  template <typename FirewallDomainListIdT = Aws::String>
  FirewallRulesItem& WithFirewallDomainListId(FirewallDomainListIdT&& value) {
    SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the firewall rule.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  FirewallRulesItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the firewall rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FirewallRulesItem& WithName(NameT&& value) {
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
  inline FirewallRulesItem& WithPriority(long long value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS view associated with the firewall rule.</p>
   */
  inline const Aws::String& GetDnsViewId() const { return m_dnsViewId; }
  inline bool DnsViewIdHasBeenSet() const { return m_dnsViewIdHasBeenSet; }
  template <typename DnsViewIdT = Aws::String>
  void SetDnsViewId(DnsViewIdT&& value) {
    m_dnsViewIdHasBeenSet = true;
    m_dnsViewId = std::forward<DnsViewIdT>(value);
  }
  template <typename DnsViewIdT = Aws::String>
  FirewallRulesItem& WithDnsViewId(DnsViewIdT&& value) {
    SetDnsViewId(std::forward<DnsViewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS query type that the firewall rule matches.</p>
   */
  inline const Aws::String& GetQueryType() const { return m_queryType; }
  inline bool QueryTypeHasBeenSet() const { return m_queryTypeHasBeenSet; }
  template <typename QueryTypeT = Aws::String>
  void SetQueryType(QueryTypeT&& value) {
    m_queryTypeHasBeenSet = true;
    m_queryType = std::forward<QueryTypeT>(value);
  }
  template <typename QueryTypeT = Aws::String>
  FirewallRulesItem& WithQueryType(QueryTypeT&& value) {
    SetQueryType(std::forward<QueryTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the firewall rule.</p>
   */
  inline CRResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CRResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FirewallRulesItem& WithStatus(CRResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the firewall rule was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  FirewallRulesItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  FirewallRuleAction m_action{FirewallRuleAction::NOT_SET};

  BlockOverrideDnsQueryType m_blockOverrideDnsType{BlockOverrideDnsQueryType::NOT_SET};

  Aws::String m_blockOverrideDomain;

  int m_blockOverrideTtl{0};

  FirewallBlockResponse m_blockResponse{FirewallBlockResponse::NOT_SET};

  ConfidenceThreshold m_confidenceThreshold{ConfidenceThreshold::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_description;

  DnsAdvancedProtection m_dnsAdvancedProtection{DnsAdvancedProtection::NOT_SET};

  Aws::String m_firewallDomainListId;

  Aws::String m_id;

  Aws::String m_name;

  long long m_priority{0};

  Aws::String m_dnsViewId;

  Aws::String m_queryType;

  CRResourceStatus m_status{CRResourceStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_actionHasBeenSet = false;
  bool m_blockOverrideDnsTypeHasBeenSet = false;
  bool m_blockOverrideDomainHasBeenSet = false;
  bool m_blockOverrideTtlHasBeenSet = false;
  bool m_blockResponseHasBeenSet = false;
  bool m_confidenceThresholdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dnsAdvancedProtectionHasBeenSet = false;
  bool m_firewallDomainListIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_dnsViewIdHasBeenSet = false;
  bool m_queryTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
