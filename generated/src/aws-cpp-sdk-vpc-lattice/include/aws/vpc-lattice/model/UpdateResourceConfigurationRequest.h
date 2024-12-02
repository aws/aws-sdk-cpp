/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/ResourceConfigurationDefinition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class UpdateResourceConfigurationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateResourceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceConfiguration"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Indicates whether to add the resource configuration to service networks that
     * are shared with other accounts.</p>
     */
    inline bool GetAllowAssociationToShareableServiceNetwork() const{ return m_allowAssociationToShareableServiceNetwork; }
    inline bool AllowAssociationToShareableServiceNetworkHasBeenSet() const { return m_allowAssociationToShareableServiceNetworkHasBeenSet; }
    inline void SetAllowAssociationToShareableServiceNetwork(bool value) { m_allowAssociationToShareableServiceNetworkHasBeenSet = true; m_allowAssociationToShareableServiceNetwork = value; }
    inline UpdateResourceConfigurationRequest& WithAllowAssociationToShareableServiceNetwork(bool value) { SetAllowAssociationToShareableServiceNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TCP port ranges that a consumer can use to access a resource
     * configuration. You can separate port ranges with a comma. Example: 1-65535 or
     * 1,2,22-30</p>
     */
    inline const Aws::Vector<Aws::String>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<Aws::String>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<Aws::String>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline UpdateResourceConfigurationRequest& WithPortRanges(const Aws::Vector<Aws::String>& value) { SetPortRanges(value); return *this;}
    inline UpdateResourceConfigurationRequest& WithPortRanges(Aws::Vector<Aws::String>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline UpdateResourceConfigurationRequest& AddPortRanges(const Aws::String& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline UpdateResourceConfigurationRequest& AddPortRanges(Aws::String&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
    inline UpdateResourceConfigurationRequest& AddPortRanges(const char* value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource configuration.</p>
     */
    inline const ResourceConfigurationDefinition& GetResourceConfigurationDefinition() const{ return m_resourceConfigurationDefinition; }
    inline bool ResourceConfigurationDefinitionHasBeenSet() const { return m_resourceConfigurationDefinitionHasBeenSet; }
    inline void SetResourceConfigurationDefinition(const ResourceConfigurationDefinition& value) { m_resourceConfigurationDefinitionHasBeenSet = true; m_resourceConfigurationDefinition = value; }
    inline void SetResourceConfigurationDefinition(ResourceConfigurationDefinition&& value) { m_resourceConfigurationDefinitionHasBeenSet = true; m_resourceConfigurationDefinition = std::move(value); }
    inline UpdateResourceConfigurationRequest& WithResourceConfigurationDefinition(const ResourceConfigurationDefinition& value) { SetResourceConfigurationDefinition(value); return *this;}
    inline UpdateResourceConfigurationRequest& WithResourceConfigurationDefinition(ResourceConfigurationDefinition&& value) { SetResourceConfigurationDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationIdentifier() const{ return m_resourceConfigurationIdentifier; }
    inline bool ResourceConfigurationIdentifierHasBeenSet() const { return m_resourceConfigurationIdentifierHasBeenSet; }
    inline void SetResourceConfigurationIdentifier(const Aws::String& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = value; }
    inline void SetResourceConfigurationIdentifier(Aws::String&& value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier = std::move(value); }
    inline void SetResourceConfigurationIdentifier(const char* value) { m_resourceConfigurationIdentifierHasBeenSet = true; m_resourceConfigurationIdentifier.assign(value); }
    inline UpdateResourceConfigurationRequest& WithResourceConfigurationIdentifier(const Aws::String& value) { SetResourceConfigurationIdentifier(value); return *this;}
    inline UpdateResourceConfigurationRequest& WithResourceConfigurationIdentifier(Aws::String&& value) { SetResourceConfigurationIdentifier(std::move(value)); return *this;}
    inline UpdateResourceConfigurationRequest& WithResourceConfigurationIdentifier(const char* value) { SetResourceConfigurationIdentifier(value); return *this;}
    ///@}
  private:

    bool m_allowAssociationToShareableServiceNetwork;
    bool m_allowAssociationToShareableServiceNetworkHasBeenSet = false;

    Aws::Vector<Aws::String> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    ResourceConfigurationDefinition m_resourceConfigurationDefinition;
    bool m_resourceConfigurationDefinitionHasBeenSet = false;

    Aws::String m_resourceConfigurationIdentifier;
    bool m_resourceConfigurationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
