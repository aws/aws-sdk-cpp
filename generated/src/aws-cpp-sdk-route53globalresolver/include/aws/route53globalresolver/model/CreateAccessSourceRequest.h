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
#include <aws/route53globalresolver/model/DnsProtocol.h>
#include <aws/route53globalresolver/model/IpAddressType.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class CreateAccessSourceRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API CreateAccessSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAccessSource"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The IP address or CIDR range that is allowed to send DNS queries to the Route
   * 53 Global Resolver.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  CreateAccessSourceRequest& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
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
  CreateAccessSourceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for this access source. Valid values are IPv4 and IPv6
   * (if the Route 53 Global Resolver supports dual-stack).</p>
   */
  inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(IpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline CreateAccessSourceRequest& WithIpAddressType(IpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the access source.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAccessSourceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS view to associate with this access source.</p>
   */
  inline const Aws::String& GetDnsViewId() const { return m_dnsViewId; }
  inline bool DnsViewIdHasBeenSet() const { return m_dnsViewIdHasBeenSet; }
  template <typename DnsViewIdT = Aws::String>
  void SetDnsViewId(DnsViewIdT&& value) {
    m_dnsViewIdHasBeenSet = true;
    m_dnsViewId = std::forward<DnsViewIdT>(value);
  }
  template <typename DnsViewIdT = Aws::String>
  CreateAccessSourceRequest& WithDnsViewId(DnsViewIdT&& value) {
    SetDnsViewId(std::forward<DnsViewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS protocol that is permitted for this access source. Valid values are
   * Do53 (DNS over port 53), DoT (DNS over TLS), and DoH (DNS over HTTPS).</p>
   */
  inline DnsProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(DnsProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline CreateAccessSourceRequest& WithProtocol(DnsProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the access source.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateAccessSourceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateAccessSourceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidr;
  bool m_cidrHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
  bool m_ipAddressTypeHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_dnsViewId;
  bool m_dnsViewIdHasBeenSet = false;

  DnsProtocol m_protocol{DnsProtocol::NOT_SET};
  bool m_protocolHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
