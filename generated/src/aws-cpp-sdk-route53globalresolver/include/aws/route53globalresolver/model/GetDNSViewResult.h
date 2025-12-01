/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/DnsSecValidationType.h>
#include <aws/route53globalresolver/model/EdnsClientSubnetType.h>
#include <aws/route53globalresolver/model/FirewallRulesFailOpenType.h>
#include <aws/route53globalresolver/model/ProfileResourceStatus.h>

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
class GetDNSViewResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API GetDNSViewResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API GetDNSViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API GetDNSViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>ID of the DNS view.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetDNSViewResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the DNS view.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetDNSViewResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
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
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  GetDNSViewResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether DNSSEC is enabled or disabled for the DNS view.</p>
   */
  inline DnsSecValidationType GetDnssecValidation() const { return m_dnssecValidation; }
  inline void SetDnssecValidation(DnsSecValidationType value) {
    m_dnssecValidationHasBeenSet = true;
    m_dnssecValidation = value;
  }
  inline GetDNSViewResult& WithDnssecValidation(DnsSecValidationType value) {
    SetDnssecValidation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether edns0 client subnet is enabled.</p>
   */
  inline EdnsClientSubnetType GetEdnsClientSubnet() const { return m_ednsClientSubnet; }
  inline void SetEdnsClientSubnet(EdnsClientSubnetType value) {
    m_ednsClientSubnetHasBeenSet = true;
    m_ednsClientSubnet = value;
  }
  inline GetDNSViewResult& WithEdnsClientSubnet(EdnsClientSubnetType value) {
    SetEdnsClientSubnet(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the DNS Firewall failure mode configuration. When enabled, the DNS
   * Firewall allows DNS queries to proceed if it's unable to properly evaluate them.
   * When disabled, the DNS Firewall blocks DNS queries it's unable to evaluate.</p>
   */
  inline FirewallRulesFailOpenType GetFirewallRulesFailOpen() const { return m_firewallRulesFailOpen; }
  inline void SetFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    m_firewallRulesFailOpenHasBeenSet = true;
    m_firewallRulesFailOpen = value;
  }
  inline GetDNSViewResult& WithFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    SetFirewallRulesFailOpen(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the DNS view.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetDNSViewResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the DNS view.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetDNSViewResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the Global Resolver the DNS view is associated to.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  GetDNSViewResult& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time and date the DNS view was creates on.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDNSViewResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time and date the DNS view was updated on.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetDNSViewResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Operational status of the DNS view.</p>
   */
  inline ProfileResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProfileResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDNSViewResult& WithStatus(ProfileResourceStatus value) {
    SetStatus(value);
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
  GetDNSViewResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_clientToken;
  bool m_clientTokenHasBeenSet = false;

  DnsSecValidationType m_dnssecValidation{DnsSecValidationType::NOT_SET};
  bool m_dnssecValidationHasBeenSet = false;

  EdnsClientSubnetType m_ednsClientSubnet{EdnsClientSubnetType::NOT_SET};
  bool m_ednsClientSubnetHasBeenSet = false;

  FirewallRulesFailOpenType m_firewallRulesFailOpen{FirewallRulesFailOpenType::NOT_SET};
  bool m_firewallRulesFailOpenHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_globalResolverId;
  bool m_globalResolverIdHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  ProfileResourceStatus m_status{ProfileResourceStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
