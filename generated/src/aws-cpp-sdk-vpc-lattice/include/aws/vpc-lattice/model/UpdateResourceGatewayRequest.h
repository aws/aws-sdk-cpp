/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/ResourceConfigDnsResolution.h>

#include <utility>

namespace Aws {
namespace VPCLattice {
namespace Model {

/**
 */
class UpdateResourceGatewayRequest : public VPCLatticeRequest {
 public:
  AWS_VPCLATTICE_API UpdateResourceGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceGateway"; }

  AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or ARN of the resource gateway.</p>
   */
  inline const Aws::String& GetResourceGatewayIdentifier() const { return m_resourceGatewayIdentifier; }
  inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
  template <typename ResourceGatewayIdentifierT = Aws::String>
  void SetResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) {
    m_resourceGatewayIdentifierHasBeenSet = true;
    m_resourceGatewayIdentifier = std::forward<ResourceGatewayIdentifierT>(value);
  }
  template <typename ResourceGatewayIdentifierT = Aws::String>
  UpdateResourceGatewayRequest& WithResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) {
    SetResourceGatewayIdentifier(std::forward<ResourceGatewayIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the security groups associated with the resource gateway.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  UpdateResourceGatewayRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  UpdateResourceGatewayRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates how DNS is resolved for resource configurations associated with
   * this resource gateway.</p> <ul> <li> <p> <code>IN_VPC</code> - DNS resolution
   * occurs privately within the resource gateway's VPC. Use this when your resource
   * domain names are hosted in private Route 53 hosted zones or on-premises DNS
   * servers reachable from the VPC.</p> </li> <li> <p> <code>PUBLIC</code> - DNS
   * resolution occurs against public DNS resolvers. Use this when your resource
   * domain names are publicly resolvable.</p> </li> </ul>
   */
  inline ResourceConfigDnsResolution GetResourceConfigDnsResolution() const { return m_resourceConfigDnsResolution; }
  inline bool ResourceConfigDnsResolutionHasBeenSet() const { return m_resourceConfigDnsResolutionHasBeenSet; }
  inline void SetResourceConfigDnsResolution(ResourceConfigDnsResolution value) {
    m_resourceConfigDnsResolutionHasBeenSet = true;
    m_resourceConfigDnsResolution = value;
  }
  inline UpdateResourceGatewayRequest& WithResourceConfigDnsResolution(ResourceConfigDnsResolution value) {
    SetResourceConfigDnsResolution(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceGatewayIdentifier;

  Aws::Vector<Aws::String> m_securityGroupIds;

  ResourceConfigDnsResolution m_resourceConfigDnsResolution{ResourceConfigDnsResolution::NOT_SET};
  bool m_resourceGatewayIdentifierHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_resourceConfigDnsResolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
