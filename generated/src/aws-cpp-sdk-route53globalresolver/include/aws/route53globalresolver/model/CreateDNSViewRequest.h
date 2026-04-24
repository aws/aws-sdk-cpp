/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/DnsSecValidationType.h>
#include <aws/route53globalresolver/model/EdnsClientSubnetType.h>
#include <aws/route53globalresolver/model/FirewallRulesFailOpenType.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class CreateDNSViewRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API CreateDNSViewRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDNSView"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Route 53 Global Resolver to associate with this DNS view.</p>
   */
  inline const Aws::String& GetGlobalResolverId() const { return m_globalResolverId; }
  inline bool GlobalResolverIdHasBeenSet() const { return m_globalResolverIdHasBeenSet; }
  template <typename GlobalResolverIdT = Aws::String>
  void SetGlobalResolverId(GlobalResolverIdT&& value) {
    m_globalResolverIdHasBeenSet = true;
    m_globalResolverId = std::forward<GlobalResolverIdT>(value);
  }
  template <typename GlobalResolverIdT = Aws::String>
  CreateDNSViewRequest& WithGlobalResolverId(GlobalResolverIdT&& value) {
    SetGlobalResolverId(std::forward<GlobalResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique string that identifies the request and ensures idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDNSViewRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the DNS view.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDNSViewRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable DNSSEC validation for DNS queries in this DNS view. When
   * enabled, the resolver verifies the authenticity and integrity of DNS responses
   * from public name servers for DNSSEC-signed domains.</p>
   */
  inline DnsSecValidationType GetDnssecValidation() const { return m_dnssecValidation; }
  inline bool DnssecValidationHasBeenSet() const { return m_dnssecValidationHasBeenSet; }
  inline void SetDnssecValidation(DnsSecValidationType value) {
    m_dnssecValidationHasBeenSet = true;
    m_dnssecValidation = value;
  }
  inline CreateDNSViewRequest& WithDnssecValidation(DnsSecValidationType value) {
    SetDnssecValidation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable EDNS Client Subnet injection for DNS queries in this DNS
   * view. When enabled, client subnet information is forwarded to provide more
   * accurate geographic-based DNS responses.</p>
   */
  inline EdnsClientSubnetType GetEdnsClientSubnet() const { return m_ednsClientSubnet; }
  inline bool EdnsClientSubnetHasBeenSet() const { return m_ednsClientSubnetHasBeenSet; }
  inline void SetEdnsClientSubnet(EdnsClientSubnetType value) {
    m_ednsClientSubnetHasBeenSet = true;
    m_ednsClientSubnet = value;
  }
  inline CreateDNSViewRequest& WithEdnsClientSubnet(EdnsClientSubnetType value) {
    SetEdnsClientSubnet(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines the behavior when Route 53 Global Resolver cannot apply DNS
   * firewall rules due to service impairment. When enabled, DNS queries are allowed
   * through; when disabled, queries are blocked.</p>
   */
  inline FirewallRulesFailOpenType GetFirewallRulesFailOpen() const { return m_firewallRulesFailOpen; }
  inline bool FirewallRulesFailOpenHasBeenSet() const { return m_firewallRulesFailOpenHasBeenSet; }
  inline void SetFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    m_firewallRulesFailOpenHasBeenSet = true;
    m_firewallRulesFailOpen = value;
  }
  inline CreateDNSViewRequest& WithFirewallRulesFailOpen(FirewallRulesFailOpenType value) {
    SetFirewallRulesFailOpen(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the DNS view.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateDNSViewRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the DNS view.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDNSViewRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDNSViewRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_globalResolverId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_name;

  DnsSecValidationType m_dnssecValidation{DnsSecValidationType::NOT_SET};

  EdnsClientSubnetType m_ednsClientSubnet{EdnsClientSubnetType::NOT_SET};

  FirewallRulesFailOpenType m_firewallRulesFailOpen{FirewallRulesFailOpenType::NOT_SET};

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_globalResolverIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_nameHasBeenSet = false;
  bool m_dnssecValidationHasBeenSet = false;
  bool m_ednsClientSubnetHasBeenSet = false;
  bool m_firewallRulesFailOpenHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
