/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
 * <p>A NAT gateway that Network Firewall creates for a proxy mode firewall in one
 * Availability Zone. You use this in <code>CreateFirewall</code> and
 * <code>AssociateSubnets</code>.</p> <p>To create a public NAT gateway, specify
 * <code>AllocationIds</code>, and one <code>PrivateIps</code> address for each
 * Elastic IP address. To create a private NAT gateway, specify only
 * <code>PrivateIps</code>. You must specify at least one of them. Each Elastic IP
 * address and private IP address can appear only once in a request.</p> <p>The NAT
 * gateway is a resource in your account. To change its IP addresses, use Amazon
 * EC2 NAT gateway actions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/NatGatewayCreateMapping">AWS
 * API Reference</a></p>
 */
class NatGatewayCreateMapping {
 public:
  AWS_NETWORKFIREWALL_API NatGatewayCreateMapping() = default;
  AWS_NETWORKFIREWALL_API NatGatewayCreateMapping(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API NatGatewayCreateMapping& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the subnet where Network Firewall creates the NAT gateway. The
   * subnet must be in the firewall's VPC and can't be one of the firewall endpoint
   * subnets. Each mapping must be in a different Availability Zone.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  NatGatewayCreateMapping& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation IDs of the Elastic IP addresses for a public NAT gateway, from
   * 1 to 8. For each allocation ID, specify one address in <code>PrivateIps</code>.
   * If you don't specify this, Network Firewall creates a private NAT gateway.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllocationIds() const { return m_allocationIds; }
  inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }
  template <typename AllocationIdsT = Aws::Vector<Aws::String>>
  void SetAllocationIds(AllocationIdsT&& value) {
    m_allocationIdsHasBeenSet = true;
    m_allocationIds = std::forward<AllocationIdsT>(value);
  }
  template <typename AllocationIdsT = Aws::Vector<Aws::String>>
  NatGatewayCreateMapping& WithAllocationIds(AllocationIdsT&& value) {
    SetAllocationIds(std::forward<AllocationIdsT>(value));
    return *this;
  }
  template <typename AllocationIdsT = Aws::String>
  NatGatewayCreateMapping& AddAllocationIds(AllocationIdsT&& value) {
    m_allocationIdsHasBeenSet = true;
    m_allocationIds.emplace_back(std::forward<AllocationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IPv4 addresses of the NAT gateway. The addresses must be in the
   * subnet that you specify and can't be the subnet's reserved addresses.</p> <p>For
   * a public NAT gateway, you must specify exactly one address for each Elastic IP
   * address in <code>AllocationIds</code>, even if you specify only one. For a
   * private NAT gateway, specify from 1 to 8 addresses. The first address is the
   * primary address.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrivateIps() const { return m_privateIps; }
  inline bool PrivateIpsHasBeenSet() const { return m_privateIpsHasBeenSet; }
  template <typename PrivateIpsT = Aws::Vector<Aws::String>>
  void SetPrivateIps(PrivateIpsT&& value) {
    m_privateIpsHasBeenSet = true;
    m_privateIps = std::forward<PrivateIpsT>(value);
  }
  template <typename PrivateIpsT = Aws::Vector<Aws::String>>
  NatGatewayCreateMapping& WithPrivateIps(PrivateIpsT&& value) {
    SetPrivateIps(std::forward<PrivateIpsT>(value));
    return *this;
  }
  template <typename PrivateIpsT = Aws::String>
  NatGatewayCreateMapping& AddPrivateIps(PrivateIpsT&& value) {
    m_privateIpsHasBeenSet = true;
    m_privateIps.emplace_back(std::forward<PrivateIpsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subnetId;

  Aws::Vector<Aws::String> m_allocationIds;

  Aws::Vector<Aws::String> m_privateIps;
  bool m_subnetIdHasBeenSet = false;
  bool m_allocationIdsHasBeenSet = false;
  bool m_privateIpsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
