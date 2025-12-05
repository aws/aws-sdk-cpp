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
class EnableDNSViewResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API EnableDNSViewResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API EnableDNSViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API EnableDNSViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the enabled DNS view.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  EnableDNSViewResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the enabled DNS view.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  EnableDNSViewResult& WithArn(ArnT&& value) {
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
  EnableDNSViewResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether DNSSEC validation is enabled for the enabled DNS view.</p>
   */
  inline DnsSecValidationType GetDnssecValidation() const { return m_dnssecValidation; }
  inline void SetDnssecValidation(DnsSecValidationType value) {
    m_dnssecValidationHasBeenSet = true;
    m_dnssecValidation = value;
  }
  inline EnableDNSViewResult& WithDnssecValidation(DnsSecValidationType value) {
    SetDnssecValidation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether EDNS Client Subnet injection is enabled for the enabled DNS view.</p>
   */
  inline EdnsClientSubnetType GetEdnsClientSubnet() const { return m_ednsClientSubnet; }
  inline void SetEdnsClientSubnet(EdnsClientSubnetType value) {
    m_ednsClientSubnetHasBeenSet = true;
    m_ednsClientSubnet = value;
  }
  inline EnableDNSViewResult& WithEdnsClientSubnet(EdnsClientSubnetType value) {
    SetEdnsClientSubnet(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall rules fail-open behavior configured for the enabled DNS
   * view.</p>
   */
  inline FirewallRulesFailOpenType GetFirewallRulesFailOpen() const { return m_firewallRulesFailOpen; }
  inline void SetFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    m_firewallRulesFailOpenHasBeenSet = true;
    m_firewallRulesFailOpen = value;
  }
  inline EnableDNSViewResult& WithFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    SetFirewallRulesFailOpen(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the enabled DNS view.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  EnableDNSViewResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the enabled DNS view.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  EnableDNSViewResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Route 53 Global Resolver that the enabled DNS view is
   * associated with.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  EnableDNSViewResult& WithGlobalResolverId(GlobalResolverIdT&& value) {
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
  EnableDNSViewResult& WithCreatedAt(CreatedAtT&& value) {
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
  EnableDNSViewResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the enabled DNS view.</p>
   */
  inline ProfileResourceStatus GetStatus() const { return m_status; }
  inline void SetStatus(ProfileResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EnableDNSViewResult& WithStatus(ProfileResourceStatus value) {
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
  EnableDNSViewResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_clientToken;

  DnsSecValidationType m_dnssecValidation{DnsSecValidationType::NOT_SET};

  EdnsClientSubnetType m_ednsClientSubnet{EdnsClientSubnetType::NOT_SET};

  FirewallRulesFailOpenType m_firewallRulesFailOpen{FirewallRulesFailOpenType::NOT_SET};

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_globalResolverId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  ProfileResourceStatus m_status{ProfileResourceStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_dnssecValidationHasBeenSet = false;
  bool m_ednsClientSubnetHasBeenSet = false;
  bool m_firewallRulesFailOpenHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_globalResolverIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
