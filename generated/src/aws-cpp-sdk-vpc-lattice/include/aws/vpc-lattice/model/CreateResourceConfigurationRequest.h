/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/ProtocolType.h>
#include <aws/vpc-lattice/model/ResourceConfigurationDefinition.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/vpc-lattice/model/ResourceConfigurationType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class CreateResourceConfigurationRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API CreateResourceConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceConfiguration"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>(SINGLE, GROUP, ARN) Specifies whether the resource configuration can be
     * associated with a sharable service network. The default is false.</p>
     */
    inline bool GetAllowAssociationToShareableServiceNetwork() const { return m_allowAssociationToShareableServiceNetwork; }
    inline bool AllowAssociationToShareableServiceNetworkHasBeenSet() const { return m_allowAssociationToShareableServiceNetworkHasBeenSet; }
    inline void SetAllowAssociationToShareableServiceNetwork(bool value) { m_allowAssociationToShareableServiceNetworkHasBeenSet = true; m_allowAssociationToShareableServiceNetwork = value; }
    inline CreateResourceConfigurationRequest& WithAllowAssociationToShareableServiceNetwork(bool value) { SetAllowAssociationToShareableServiceNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you retry a request that completed successfully
     * using the same client token and parameters, the retry succeeds without
     * performing any actions. If the parameters aren't identical, the retry fails.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateResourceConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration. The name must be unique within the
     * account. The valid characters are a-z, 0-9, and hyphens (-). You can't use a
     * hyphen as the first or last character, or immediately after another hyphen.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateResourceConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(SINGLE, GROUP, CHILD) The TCP port ranges that a consumer can use to access
     * a resource configuration (for example: 1-65535). You can separate port ranges
     * using commas (for example: 1,2,22-30).</p>
     */
    inline const Aws::Vector<Aws::String>& GetPortRanges() const { return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    template<typename PortRangesT = Aws::Vector<Aws::String>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<Aws::String>>
    CreateResourceConfigurationRequest& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = Aws::String>
    CreateResourceConfigurationRequest& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(SINGLE, GROUP) The protocol accepted by the resource configuration.</p>
     */
    inline ProtocolType GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ProtocolType value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateResourceConfigurationRequest& WithProtocol(ProtocolType value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(SINGLE, CHILD, ARN) The resource configuration.</p>
     */
    inline const ResourceConfigurationDefinition& GetResourceConfigurationDefinition() const { return m_resourceConfigurationDefinition; }
    inline bool ResourceConfigurationDefinitionHasBeenSet() const { return m_resourceConfigurationDefinitionHasBeenSet; }
    template<typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
    void SetResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) { m_resourceConfigurationDefinitionHasBeenSet = true; m_resourceConfigurationDefinition = std::forward<ResourceConfigurationDefinitionT>(value); }
    template<typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
    CreateResourceConfigurationRequest& WithResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) { SetResourceConfigurationDefinition(std::forward<ResourceConfigurationDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(CHILD) The ID or ARN of the parent resource configuration (type is
     * <code>GROUP</code>). This is used to associate a child resource configuration
     * with a group resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupIdentifier() const { return m_resourceConfigurationGroupIdentifier; }
    inline bool ResourceConfigurationGroupIdentifierHasBeenSet() const { return m_resourceConfigurationGroupIdentifierHasBeenSet; }
    template<typename ResourceConfigurationGroupIdentifierT = Aws::String>
    void SetResourceConfigurationGroupIdentifier(ResourceConfigurationGroupIdentifierT&& value) { m_resourceConfigurationGroupIdentifierHasBeenSet = true; m_resourceConfigurationGroupIdentifier = std::forward<ResourceConfigurationGroupIdentifierT>(value); }
    template<typename ResourceConfigurationGroupIdentifierT = Aws::String>
    CreateResourceConfigurationRequest& WithResourceConfigurationGroupIdentifier(ResourceConfigurationGroupIdentifierT&& value) { SetResourceConfigurationGroupIdentifier(std::forward<ResourceConfigurationGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(SINGLE, GROUP, ARN) The ID or ARN of the resource gateway used to connect to
     * the resource configuration. For a child resource configuration, this value is
     * inherited from the parent resource configuration.</p>
     */
    inline const Aws::String& GetResourceGatewayIdentifier() const { return m_resourceGatewayIdentifier; }
    inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
    template<typename ResourceGatewayIdentifierT = Aws::String>
    void SetResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = std::forward<ResourceGatewayIdentifierT>(value); }
    template<typename ResourceGatewayIdentifierT = Aws::String>
    CreateResourceConfigurationRequest& WithResourceGatewayIdentifier(ResourceGatewayIdentifierT&& value) { SetResourceGatewayIdentifier(std::forward<ResourceGatewayIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the resource configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateResourceConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateResourceConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of resource configuration.</p> <ul> <li> <p> <code>SINGLE</code> - A
     * single resource.</p> </li> <li> <p> <code>GROUP</code> - A group of resources.
     * You must create a group resource configuration before you create a child
     * resource configuration.</p> </li> <li> <p> <code>CHILD</code> - A single
     * resource that is part of a group resource configuration.</p> </li> <li> <p>
     * <code>ARN</code> - An Amazon Web Services resource.</p> </li> </ul>
     */
    inline ResourceConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ResourceConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateResourceConfigurationRequest& WithType(ResourceConfigurationType value) { SetType(value); return *this;}
    ///@}
  private:

    bool m_allowAssociationToShareableServiceNetwork{false};
    bool m_allowAssociationToShareableServiceNetworkHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    ProtocolType m_protocol{ProtocolType::NOT_SET};
    bool m_protocolHasBeenSet = false;

    ResourceConfigurationDefinition m_resourceConfigurationDefinition;
    bool m_resourceConfigurationDefinitionHasBeenSet = false;

    Aws::String m_resourceConfigurationGroupIdentifier;
    bool m_resourceConfigurationGroupIdentifierHasBeenSet = false;

    Aws::String m_resourceGatewayIdentifier;
    bool m_resourceGatewayIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceConfigurationType m_type{ResourceConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
