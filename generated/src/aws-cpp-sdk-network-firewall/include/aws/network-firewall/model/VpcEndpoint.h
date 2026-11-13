/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/SubnetMapping.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The VPC and subnets for the endpoints of a proxy mode firewall. You use this
 * in <code>CreateFirewall</code>. Network Firewall creates the firewall endpoints
 * and the firewall's NAT gateways in this VPC.</p> <p>This differs from
 * <code>VpcEndpointAssociation</code>, which defines additional endpoints for a
 * firewall in other VPCs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/VpcEndpoint">AWS
 * API Reference</a></p>
 */
class VpcEndpoint {
 public:
  AWS_NETWORKFIREWALL_API VpcEndpoint() = default;
  AWS_NETWORKFIREWALL_API VpcEndpoint(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API VpcEndpoint& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the VPC where Network Firewall creates the endpoints and NAT
   * gateways of a proxy mode firewall.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  VpcEndpoint& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnets where Network Firewall creates the firewall endpoints of a proxy
   * mode firewall. Specify one subnet for each Availability Zone, and a NAT gateway
   * mapping in each of those Availability Zones.</p>
   */
  inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const { return m_subnetMappings; }
  inline bool SubnetMappingsHasBeenSet() const { return m_subnetMappingsHasBeenSet; }
  template <typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
  void SetSubnetMappings(SubnetMappingsT&& value) {
    m_subnetMappingsHasBeenSet = true;
    m_subnetMappings = std::forward<SubnetMappingsT>(value);
  }
  template <typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
  VpcEndpoint& WithSubnetMappings(SubnetMappingsT&& value) {
    SetSubnetMappings(std::forward<SubnetMappingsT>(value));
    return *this;
  }
  template <typename SubnetMappingsT = SubnetMapping>
  VpcEndpoint& AddSubnetMappings(SubnetMappingsT&& value) {
    m_subnetMappingsHasBeenSet = true;
    m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::Vector<SubnetMapping> m_subnetMappings;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
