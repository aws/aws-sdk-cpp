/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/ResourceConfigurationDefinition.h>

#include <utility>

namespace Aws {
namespace VPCLattice {
namespace Model {

/**
 */
class UpdateResourceConfigurationRequest : public VPCLatticeRequest {
 public:
  AWS_VPCLATTICE_API UpdateResourceConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceConfiguration"; }

  AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the resource configuration.</p>
   */
  inline const Aws::String& GetResourceConfigurationIdentifier() const { return m_resourceConfigurationIdentifier; }
  inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
  template <typename ResourceConfigurationIdentifierT = Aws::String>
  void SetResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) {
    m_resourceConfigurationIdentifierHasBeenSet = true;
    m_resourceConfigurationIdentifier = std::forward<ResourceConfigurationIdentifierT>(value);
  }
  template <typename ResourceConfigurationIdentifierT = Aws::String>
  UpdateResourceConfigurationRequest& WithResourceConfigurationIdentifier(ResourceConfigurationIdentifierT&& value) {
    SetResourceConfigurationIdentifier(std::forward<ResourceConfigurationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifies the resource configuration in one of the following ways:</p> <ul>
   * <li> <p> <b>Amazon Resource Name (ARN)</b> - Supported resource-types that are
   * provisioned by Amazon Web Services services, such as RDS databases, can be
   * identified by their ARN.</p> </li> <li> <p> <b>Domain name</b> - Any domain name
   * that is publicly resolvable.</p> </li> <li> <p> <b>IP address</b> - For IPv4 and
   * IPv6, only IP addresses in the VPC are supported.</p> </li> </ul>
   */
  inline const ResourceConfigurationDefinition& GetResourceConfigurationDefinition() const { return m_resourceConfigurationDefinition; }
  inline bool ResourceConfigurationDefinitionHasBeenSet() const { return m_resourceConfigurationDefinitionHasBeenSet; }
  template <typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
  void SetResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) {
    m_resourceConfigurationDefinitionHasBeenSet = true;
    m_resourceConfigurationDefinition = std::forward<ResourceConfigurationDefinitionT>(value);
  }
  template <typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
  UpdateResourceConfigurationRequest& WithResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) {
    SetResourceConfigurationDefinition(std::forward<ResourceConfigurationDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to add the resource configuration to service networks that
   * are shared with other accounts.</p>
   */
  inline bool GetAllowAssociationToShareableServiceNetwork() const { return m_allowAssociationToShareableServiceNetwork; }
  inline bool AllowAssociationToShareableServiceNetworkHasBeenSet() const { return m_allowAssociationToShareableServiceNetworkHasBeenSet; }
  inline void SetAllowAssociationToShareableServiceNetwork(bool value) {
    m_allowAssociationToShareableServiceNetworkHasBeenSet = true;
    m_allowAssociationToShareableServiceNetwork = value;
  }
  inline UpdateResourceConfigurationRequest& WithAllowAssociationToShareableServiceNetwork(bool value) {
    SetAllowAssociationToShareableServiceNetwork(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TCP port ranges that a consumer can use to access a resource
   * configuration. You can separate port ranges with a comma. Example: 1-65535 or
   * 1,2,22-30</p>
   */
  inline const Aws::Vector<Aws::String>& GetPortRanges() const { return m_portRanges; }
  inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
  template <typename PortRangesT = Aws::Vector<Aws::String>>
  void SetPortRanges(PortRangesT&& value) {
    m_portRangesHasBeenSet = true;
    m_portRanges = std::forward<PortRangesT>(value);
  }
  template <typename PortRangesT = Aws::Vector<Aws::String>>
  UpdateResourceConfigurationRequest& WithPortRanges(PortRangesT&& value) {
    SetPortRanges(std::forward<PortRangesT>(value));
    return *this;
  }
  template <typename PortRangesT = Aws::String>
  UpdateResourceConfigurationRequest& AddPortRanges(PortRangesT&& value) {
    m_portRangesHasBeenSet = true;
    m_portRanges.emplace_back(std::forward<PortRangesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceConfigurationIdentifier;

  ResourceConfigurationDefinition m_resourceConfigurationDefinition;

  bool m_allowAssociationToShareableServiceNetwork{false};

  Aws::Vector<Aws::String> m_portRanges;
  bool m_resourceConfigurationIdentifierHasBeenSet = false;
  bool m_resourceConfigurationDefinitionHasBeenSet = false;
  bool m_allowAssociationToShareableServiceNetworkHasBeenSet = false;
  bool m_portRangesHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
