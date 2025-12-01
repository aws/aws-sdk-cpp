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
class DisableDNSViewResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DisableDNSViewResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API DisableDNSViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API DisableDNSViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the disabled DNS view.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DisableDNSViewResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the disabled DNS view.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DisableDNSViewResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique string that identifies the request and ensures idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DisableDNSViewResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether DNSSEC validation is enabled for the disabled DNS view.</p>
   */
  inline DnsSecValidationType GetDnssecValidation() const { return m_dnssecValidation; }
  inline void SetDnssecValidation(DnsSecValidationType value) {
    m_dnssecValidationHasBeenSet = true;
    m_dnssecValidation = value;
  }
  inline DisableDNSViewResult& WithDnssecValidation(DnsSecValidationType value) {
    SetDnssecValidation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether EDNS Client Subnet injection is enabled for the disabled DNS
   * view.</p>
   */
  inline EdnsClientSubnetType GetEdnsClientSubnet() const { return m_ednsClientSubnet; }
  inline void SetEdnsClientSubnet(EdnsClientSubnetType value) {
    m_ednsClientSubnetHasBeenSet = true;
    m_ednsClientSubnet = value;
  }
  inline DisableDNSViewResult& WithEdnsClientSubnet(EdnsClientSubnetType value) {
    SetEdnsClientSubnet(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall rules fail-open behavior configured for the disabled DNS
   * view.</p>
   */
  inline FirewallRulesFailOpenType GetFirewallRulesFailOpen() const { return m_firewallRulesFailOpen; }
  inline void SetFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    m_firewallRulesFailOpenHasBeenSet = true;
    m_firewallRulesFailOpen = value;
  }
  inline DisableDNSViewResult& WithFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    SetFirewallRulesFailOpen(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the disabled DNS view.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DisableDNSViewResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the disabled DNS view.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DisableDNSViewResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Route 53 Global Resolver that the disabled DNS view is
   * associated with.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  DisableDNSViewResult& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the DNS view was originally created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DisableDNSViewResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the DNS view was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DisableDNSViewResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the disabled DNS view.</p>
   */
  inline ProfileResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProfileResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DisableDNSViewResult& WithStatus(ProfileResourceStatus value) {
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
  DisableDNSViewResult& WithRequestId(RequestIdT&& value) {
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
