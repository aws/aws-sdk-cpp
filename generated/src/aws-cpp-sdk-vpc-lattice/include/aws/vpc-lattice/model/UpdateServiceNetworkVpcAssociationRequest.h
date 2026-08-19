/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/DnsOptions.h>

#include <utility>

namespace Aws {
namespace VPCLattice {
namespace Model {

/**
 */
class UpdateServiceNetworkVpcAssociationRequest : public VPCLatticeRequest {
 public:
  AWS_VPCLATTICE_API UpdateServiceNetworkVpcAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceNetworkVpcAssociation"; }

  AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or ARN of the association.</p>
   */
  inline const Aws::String& GetServiceNetworkVpcAssociationIdentifier() const { return m_serviceNetworkVpcAssociationIdentifier; }
  inline bool ServiceNetworkVpcAssociationIdentifierHasBeenSet() const { return m_serviceNetworkVpcAssociationIdentifierHasBeenSet; }
  template <typename ServiceNetworkVpcAssociationIdentifierT = Aws::String>
  void SetServiceNetworkVpcAssociationIdentifier(ServiceNetworkVpcAssociationIdentifierT&& value) {
    m_serviceNetworkVpcAssociationIdentifierHasBeenSet = true;
    m_serviceNetworkVpcAssociationIdentifier = std::forward<ServiceNetworkVpcAssociationIdentifierT>(value);
  }
  template <typename ServiceNetworkVpcAssociationIdentifierT = Aws::String>
  UpdateServiceNetworkVpcAssociationRequest& WithServiceNetworkVpcAssociationIdentifier(ServiceNetworkVpcAssociationIdentifierT&& value) {
    SetServiceNetworkVpcAssociationIdentifier(std::forward<ServiceNetworkVpcAssociationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the security groups.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  UpdateServiceNetworkVpcAssociationRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  UpdateServiceNetworkVpcAssociationRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates if private DNS is enabled for the VPC association. </p>
   */
  inline bool GetPrivateDnsEnabled() const { return m_privateDnsEnabled; }
  inline bool PrivateDnsEnabledHasBeenSet() const { return m_privateDnsEnabledHasBeenSet; }
  inline void SetPrivateDnsEnabled(bool value) {
    m_privateDnsEnabledHasBeenSet = true;
    m_privateDnsEnabled = value;
  }
  inline UpdateServiceNetworkVpcAssociationRequest& WithPrivateDnsEnabled(bool value) {
    SetPrivateDnsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> DNS options for the service network VPC association. </p>
   */
  inline const DnsOptions& GetDnsOptions() const { return m_dnsOptions; }
  inline bool DnsOptionsHasBeenSet() const { return m_dnsOptionsHasBeenSet; }
  template <typename DnsOptionsT = DnsOptions>
  void SetDnsOptions(DnsOptionsT&& value) {
    m_dnsOptionsHasBeenSet = true;
    m_dnsOptions = std::forward<DnsOptionsT>(value);
  }
  template <typename DnsOptionsT = DnsOptions>
  UpdateServiceNetworkVpcAssociationRequest& WithDnsOptions(DnsOptionsT&& value) {
    SetDnsOptions(std::forward<DnsOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceNetworkVpcAssociationIdentifier;

  Aws::Vector<Aws::String> m_securityGroupIds;

  bool m_privateDnsEnabled{false};

  DnsOptions m_dnsOptions;
  bool m_serviceNetworkVpcAssociationIdentifierHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_privateDnsEnabledHasBeenSet = false;
  bool m_dnsOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
