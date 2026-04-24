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
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>Summary information about a DNS view.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DNSViewSummary">AWS
 * API Reference</a></p>
 */
class DNSViewSummary {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DNSViewSummary() = default;
  AWS_ROUTE53GLOBALRESOLVER_API DNSViewSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API DNSViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the DNS view.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DNSViewSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the DNS view.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DNSViewSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique string that identifies the request and ensures idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DNSViewSummary& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether DNSSEC validation is enabled for the DNS view.</p>
   */
  inline DnsSecValidationType GetDnssecValidation() const { return m_dnssecValidation; }
  inline bool DnssecValidationHasBeenSet() const { return m_dnssecValidationHasBeenSet; }
  inline void SetDnssecValidation(DnsSecValidationType value) {
    m_dnssecValidationHasBeenSet = true;
    m_dnssecValidation = value;
  }
  inline DNSViewSummary& WithDnssecValidation(DnsSecValidationType value) {
    SetDnssecValidation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether EDNS Client Subnet injection is enabled for the DNS view.</p>
   */
  inline EdnsClientSubnetType GetEdnsClientSubnet() const { return m_ednsClientSubnet; }
  inline bool EdnsClientSubnetHasBeenSet() const { return m_ednsClientSubnetHasBeenSet; }
  inline void SetEdnsClientSubnet(EdnsClientSubnetType value) {
    m_ednsClientSubnetHasBeenSet = true;
    m_ednsClientSubnet = value;
  }
  inline DNSViewSummary& WithEdnsClientSubnet(EdnsClientSubnetType value) {
    SetEdnsClientSubnet(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether firewall rules fail open when they cannot be evaluated.</p>
   */
  inline FirewallRulesFailOpenType GetFirewallRulesFailOpen() const { return m_firewallRulesFailOpen; }
  inline bool FirewallRulesFailOpenHasBeenSet() const { return m_firewallRulesFailOpenHasBeenSet; }
  inline void SetFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    m_firewallRulesFailOpenHasBeenSet = true;
    m_firewallRulesFailOpen = value;
  }
  inline DNSViewSummary& WithFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    SetFirewallRulesFailOpen(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the DNS view.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DNSViewSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the DNS view.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DNSViewSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the global resolver that the DNS view is associated with.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  inline bool GlobalResolverIdHasBeenSet() const { return m_globalResolverIdHasBeenSet; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  DNSViewSummary& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the DNS view was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DNSViewSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the DNS view was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DNSViewSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the DNS view.</p>
   */
  inline ProfileResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ProfileResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DNSViewSummary& WithStatus(ProfileResourceStatus value) {
    SetStatus(value);
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
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
