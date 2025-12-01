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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class DeleteFirewallRuleResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DeleteFirewallRuleResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API DeleteFirewallRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API DeleteFirewallRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The action that was configured for the deleted firewall rule.</p>
   */
  inline FirewallRuleAction GetAction() const { return m_action; }
  inline void SetAction(FirewallRuleAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline DeleteFirewallRuleResult& WithAction(FirewallRuleAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS record type that was configured for the deleted firewall rule's
   * custom response.</p>
   */
  inline BlockOverrideDnsQueryType GetBlockOverrideDnsType() const { return m_blockOverrideDnsType; }
  inline void SetBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    m_blockOverrideDnsTypeHasBeenSet = true;
    m_blockOverrideDnsType = value;
  }
  inline DeleteFirewallRuleResult& WithBlockOverrideDnsType(BlockOverrideDnsQueryType value) {
    SetBlockOverrideDnsType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom domain that was configured for the deleted firewall rule's BLOCK
   * response.</p>
   */
  inline const Aws::String& GetBlockOverrideDomain() const { return m_blockOverrideDomain; }
  template <typename BlockOverrideDomainT = Aws::String>
  void SetBlockOverrideDomain(BlockOverrideDomainT&& value) {
    m_blockOverrideDomainHasBeenSet = true;
    m_blockOverrideDomain = std::forward<BlockOverrideDomainT>(value);
  }
  template <typename BlockOverrideDomainT = Aws::String>
  DeleteFirewallRuleResult& WithBlockOverrideDomain(BlockOverrideDomainT&& value) {
    SetBlockOverrideDomain(std::forward<BlockOverrideDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TTL value that was configured for the deleted firewall rule's custom
   * response.</p>
   */
  inline int GetBlockOverrideTtl() const { return m_blockOverrideTtl; }
  inline void SetBlockOverrideTtl(int value) {
    m_blockOverrideTtlHasBeenSet = true;
    m_blockOverrideTtl = value;
  }
  inline DeleteFirewallRuleResult& WithBlockOverrideTtl(int value) {
    SetBlockOverrideTtl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The block response type that was configured for the deleted firewall
   * rule.</p>
   */
  inline FirewallBlockResponse GetBlockResponse() const { return m_blockResponse; }
  inline void SetBlockResponse(FirewallBlockResponse value) {
    m_blockResponseHasBeenSet = true;
    m_blockResponse = value;
  }
  inline DeleteFirewallRuleResult& WithBlockResponse(FirewallBlockResponse value) {
    SetBlockResponse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence threshold that was configured for the deleted firewall rule's
   * advanced threat detection.</p>
   */
  inline ConfidenceThreshold GetConfidenceThreshold() const { return m_confidenceThreshold; }
  inline void SetConfidenceThreshold(ConfidenceThreshold value) {
    m_confidenceThresholdHasBeenSet = true;
    m_confidenceThreshold = value;
  }
  inline DeleteFirewallRuleResult& WithConfidenceThreshold(ConfidenceThreshold value) {
    SetConfidenceThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the firewall rule was originally created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DeleteFirewallRuleResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the deleted firewall rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DeleteFirewallRuleResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether advanced DNS threat protection was enabled for the deleted firewall
   * rule.</p>
   */
  inline DnsAdvancedProtection GetDnsAdvancedProtection() const { return m_dnsAdvancedProtection; }
  inline void SetDnsAdvancedProtection(DnsAdvancedProtection value) {
    m_dnsAdvancedProtectionHasBeenSet = true;
    m_dnsAdvancedProtection = value;
  }
  inline DeleteFirewallRuleResult& WithDnsAdvancedProtection(DnsAdvancedProtection value) {
    SetDnsAdvancedProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the firewall domain list that was associated with the deleted
   * firewall rule.</p>
   */
  inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
  template <typename FirewallDomainListIdT = Aws::String>
  void SetFirewallDomainListId(FirewallDomainListIdT&& value) {
    m_firewallDomainListIdHasBeenSet = true;
    m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value);
  }
  template <typename FirewallDomainListIdT = Aws::String>
  DeleteFirewallRuleResult& WithFirewallDomainListId(FirewallDomainListIdT&& value) {
    SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the deleted firewall rule.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DeleteFirewallRuleResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deleted firewall rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DeleteFirewallRuleResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority that was configured for the deleted firewall rule.</p>
   */
  inline long long GetPriority() const { return m_priority; }
  inline void SetPriority(long long value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline DeleteFirewallRuleResult& WithPriority(long long value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS view that was associated with the deleted firewall
   * rule.</p>
   */
  inline const Aws::String& GetDnsViewId() const { return m_dnsViewId; }
  template <typename DnsViewIdT = Aws::String>
  void SetDnsViewId(DnsViewIdT&& value) {
    m_dnsViewIdHasBeenSet = true;
    m_dnsViewId = std::forward<DnsViewIdT>(value);
  }
  template <typename DnsViewIdT = Aws::String>
  DeleteFirewallRuleResult& WithDnsViewId(DnsViewIdT&& value) {
    SetDnsViewId(std::forward<DnsViewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS query type that the deleted firewall rule was configured to
   * match.</p>
   */
  inline const Aws::String& GetQueryType() const { return m_queryType; }
  template <typename QueryTypeT = Aws::String>
  void SetQueryType(QueryTypeT&& value) {
    m_queryTypeHasBeenSet = true;
    m_queryType = std::forward<QueryTypeT>(value);
  }
  template <typename QueryTypeT = Aws::String>
  DeleteFirewallRuleResult& WithQueryType(QueryTypeT&& value) {
    SetQueryType(std::forward<QueryTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final status of the deleted firewall rule.</p>
   */
  inline CRResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(CRResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteFirewallRuleResult& WithStatus(CRResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the firewall rule was last updated before
   * deletion.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DeleteFirewallRuleResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DeleteFirewallRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  DnsAdvancedProtection m_dnsAdvancedProtection{DnsAdvancedProtection::NOT_SET};
  bool m_dnsAdvancedProtectionHasBeenSet = false;

  Aws::String m_firewallDomainListId;
  bool m_firewallDomainListIdHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  long long m_priority{0};
  bool m_priorityHasBeenSet = false;

  Aws::String m_dnsViewId;
  bool m_dnsViewIdHasBeenSet = false;

  Aws::String m_queryType;
  bool m_queryTypeHasBeenSet = false;

  CRResourceStatus m_status{CRResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
