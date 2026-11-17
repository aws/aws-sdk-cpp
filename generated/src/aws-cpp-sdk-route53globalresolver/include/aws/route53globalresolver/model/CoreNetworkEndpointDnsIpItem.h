/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/RegionScopeType.h>

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
 * <p>A DNS IP address configuration returned for a core network endpoint. Each
 * item describes an IP address that the endpoint uses to receive DNS queries,
 * along with its DNS label and name, and the scope and Amazon Web Services Regions
 * in which the address applies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CoreNetworkEndpointDnsIpItem">AWS
 * API Reference</a></p>
 */
class CoreNetworkEndpointDnsIpItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API CoreNetworkEndpointDnsIpItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API CoreNetworkEndpointDnsIpItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API CoreNetworkEndpointDnsIpItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IPv4 address that the core network endpoint uses to receive DNS
   * queries.</p>
   */
  inline const Aws::String& GetIpv4Address() const { return m_ipv4Address; }
  inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
  template <typename Ipv4AddressT = Aws::String>
  void SetIpv4Address(Ipv4AddressT&& value) {
    m_ipv4AddressHasBeenSet = true;
    m_ipv4Address = std::forward<Ipv4AddressT>(value);
  }
  template <typename Ipv4AddressT = Aws::String>
  CoreNetworkEndpointDnsIpItem& WithIpv4Address(Ipv4AddressT&& value) {
    SetIpv4Address(std::forward<Ipv4AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv6 address that the core network endpoint uses to receive DNS
   * queries.</p>
   */
  inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
  inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
  template <typename Ipv6AddressT = Aws::String>
  void SetIpv6Address(Ipv6AddressT&& value) {
    m_ipv6AddressHasBeenSet = true;
    m_ipv6Address = std::forward<Ipv6AddressT>(value);
  }
  template <typename Ipv6AddressT = Aws::String>
  CoreNetworkEndpointDnsIpItem& WithIpv6Address(Ipv6AddressT&& value) {
    SetIpv6Address(std::forward<Ipv6AddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS label associated with the IP address.</p>
   */
  inline const Aws::String& GetDnsLabel() const { return m_dnsLabel; }
  inline bool DnsLabelHasBeenSet() const { return m_dnsLabelHasBeenSet; }
  template <typename DnsLabelT = Aws::String>
  void SetDnsLabel(DnsLabelT&& value) {
    m_dnsLabelHasBeenSet = true;
    m_dnsLabel = std::forward<DnsLabelT>(value);
  }
  template <typename DnsLabelT = Aws::String>
  CoreNetworkEndpointDnsIpItem& WithDnsLabel(DnsLabelT&& value) {
    SetDnsLabel(std::forward<DnsLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified DNS name associated with the IP address.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  CoreNetworkEndpointDnsIpItem& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the IP address applies to all Amazon Web Services Regions
   * or only to the specific Regions that you identify. When the value is
   * <code>REGIONAL</code>, the Regions are listed in the <code>regions</code>
   * field.</p>
   */
  inline RegionScopeType GetRegionScope() const { return m_regionScope; }
  inline bool RegionScopeHasBeenSet() const { return m_regionScopeHasBeenSet; }
  inline void SetRegionScope(RegionScopeType value) {
    m_regionScopeHasBeenSet = true;
    m_regionScope = value;
  }
  inline CoreNetworkEndpointDnsIpItem& WithRegionScope(RegionScopeType value) {
    SetRegionScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions in which the IP address applies when the
   * region scope is <code>REGIONAL</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  CoreNetworkEndpointDnsIpItem& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  CoreNetworkEndpointDnsIpItem& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipv4Address;

  Aws::String m_ipv6Address;

  Aws::String m_dnsLabel;

  Aws::String m_dnsName;

  RegionScopeType m_regionScope{RegionScopeType::NOT_SET};

  Aws::Vector<Aws::String> m_regions;
  bool m_ipv4AddressHasBeenSet = false;
  bool m_ipv6AddressHasBeenSet = false;
  bool m_dnsLabelHasBeenSet = false;
  bool m_dnsNameHasBeenSet = false;
  bool m_regionScopeHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
