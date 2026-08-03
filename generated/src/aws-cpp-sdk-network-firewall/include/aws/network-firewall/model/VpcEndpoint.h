/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/SubnetMapping.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The VPC and subnets for a proxy mode firewall endpoint. This is used in
 * <a>CreateFirewall</a> when <code>NoSourcePreservation</code> is
 * <code>TRUE</code>, to specify where Network Firewall creates the firewall
 * endpoint. </p> <p>This differs from <a>VpcEndpointAssociation</a>, which defines
 * additional secondary endpoints for a firewall in other VPCs. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/VpcEndpoint">AWS
 * API Reference</a></p>
 */
class VpcEndpoint {
 public:
  AWS_NETWORKFIREWALL_API VpcEndpoint() = default;
  AWS_NETWORKFIREWALL_API VpcEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API VpcEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the VPC where Network Firewall creates the proxy
   * mode firewall endpoint. </p>
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
   * <p>The subnets in which Network Firewall creates the firewall endpoint for a
   * proxy mode firewall. Each subnet must belong to a different Availability Zone in
   * the VPC. </p>
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
