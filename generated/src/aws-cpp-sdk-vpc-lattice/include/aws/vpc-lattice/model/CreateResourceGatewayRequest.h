/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/ResourceConfigDnsResolution.h>
#include <aws/vpc-lattice/model/ResourceGatewayIpAddressType.h>

#include <utility>

namespace Aws {
namespace VPCLattice {
namespace Model {

/**
 */
class CreateResourceGatewayRequest : public VPCLatticeRequest {
 public:
  AWS_VPCLATTICE_API CreateResourceGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateResourceGateway"; }

  AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you retry a request that completed successfully
   * using the same client token and parameters, the retry succeeds without
   * performing any actions. If the parameters aren't identical, the retry fails.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateResourceGatewayRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource gateway.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateResourceGatewayRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC for the resource gateway.</p>
   */
  inline const Aws::String& GetVpcIdentifier() const { return m_vpcIdentifier; }
  inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }
  template <typename VpcIdentifierT = Aws::String>
  void SetVpcIdentifier(VpcIdentifierT&& value) {
    m_vpcIdentifierHasBeenSet = true;
    m_vpcIdentifier = std::forward<VpcIdentifierT>(value);
  }
  template <typename VpcIdentifierT = Aws::String>
  CreateResourceGatewayRequest& WithVpcIdentifier(VpcIdentifierT&& value) {
    SetVpcIdentifier(std::forward<VpcIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the VPC subnets in which to create the resource gateway.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  CreateResourceGatewayRequest& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  CreateResourceGatewayRequest& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the security groups to apply to the resource gateway. The security
   * groups must be in the same VPC.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  CreateResourceGatewayRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  CreateResourceGatewayRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A resource gateway can have IPv4, IPv6 or dualstack addresses. The IP address
   * type of a resource gateway must be compatible with the subnets of the resource
   * gateway and the IP address type of the resource, as described here: </p> <ul>
   * <li> <p> <b>IPv4</b>Assign IPv4 addresses to your resource gateway network
   * interfaces. This option is supported only if all selected subnets have IPv4
   * address ranges, and the resource also has an IPv4 address.</p> </li> <li> <p>
   * <b>IPv6</b>Assign IPv6 addresses to your resource gateway network interfaces.
   * This option is supported only if all selected subnets are IPv6 only subnets, and
   * the resource also has an IPv6 address.</p> </li> <li> <p> <b>Dualstack</b>Assign
   * both IPv4 and IPv6 addresses to your resource gateway network interfaces. This
   * option is supported only if all selected subnets have both IPv4 and IPv6 address
   * ranges, and the resource either has an IPv4 or IPv6 address.</p> </li> </ul>
   * <p>The IP address type of the resource gateway is independent of the IP address
   * type of the client or the VPC endpoint through which the resource is
   * accessed.</p>
   */
  inline ResourceGatewayIpAddressType GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(ResourceGatewayIpAddressType value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline CreateResourceGatewayRequest& WithIpAddressType(ResourceGatewayIpAddressType value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of IPv4 addresses in each ENI for the resource gateway.</p>
   */
  inline int GetIpv4AddressesPerEni() const { return m_ipv4AddressesPerEni; }
  inline bool Ipv4AddressesPerEniHasBeenSet() const { return m_ipv4AddressesPerEniHasBeenSet; }
  inline void SetIpv4AddressesPerEni(int value) {
    m_ipv4AddressesPerEniHasBeenSet = true;
    m_ipv4AddressesPerEni = value;
  }
  inline CreateResourceGatewayRequest& WithIpv4AddressesPerEni(int value) {
    SetIpv4AddressesPerEni(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates how DNS is resolved for resource configurations associated with
   * this resource gateway. This value is set when you create the resource gateway
   * and can't be changed afterward. The default is <code>PUBLIC</code>.</p> <ul>
   * <li> <p> <code>IN_VPC</code> - DNS resolution occurs privately within the
   * resource gateway's VPC. DNS queries for resources behind this resource gateway
   * resolve using the DNS resolvers defined in the VPC's DHCP option sets. Use this
   * when your resource domain names are hosted in private Route 53 hosted zones or
   * on-premises DNS servers reachable from the VPC. A CIDR resource configuration
   * requires a resource gateway that uses <code>IN_VPC</code>, and an
   * <code>IN_VPC</code> resource gateway can't be used for ARN resource
   * configurations, so a single resource gateway can't serve both ARN and CIDR
   * resource configurations.</p> </li> <li> <p> <code>PUBLIC</code> - DNS resolution
   * occurs against public DNS resolvers. DNS queries for resources behind this
   * resource gateway resolve using standard public DNS. Use this when your resource
   * domain names are publicly resolvable.</p> </li> </ul>
   */
  inline ResourceConfigDnsResolution GetResourceConfigDnsResolution() const { return m_resourceConfigDnsResolution; }
  inline bool ResourceConfigDnsResolutionHasBeenSet() const { return m_resourceConfigDnsResolutionHasBeenSet; }
  inline void SetResourceConfigDnsResolution(ResourceConfigDnsResolution value) {
    m_resourceConfigDnsResolutionHasBeenSet = true;
    m_resourceConfigDnsResolution = value;
  }
  inline CreateResourceGatewayRequest& WithResourceConfigDnsResolution(ResourceConfigDnsResolution value) {
    SetResourceConfigDnsResolution(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for the resource gateway.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateResourceGatewayRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateResourceGatewayRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_name;

  Aws::String m_vpcIdentifier;

  Aws::Vector<Aws::String> m_subnetIds;

  Aws::Vector<Aws::String> m_securityGroupIds;

  ResourceGatewayIpAddressType m_ipAddressType{ResourceGatewayIpAddressType::NOT_SET};

  int m_ipv4AddressesPerEni{0};

  ResourceConfigDnsResolution m_resourceConfigDnsResolution{ResourceConfigDnsResolution::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_nameHasBeenSet = false;
  bool m_vpcIdentifierHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
  bool m_ipv4AddressesPerEniHasBeenSet = false;
  bool m_resourceConfigDnsResolutionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
