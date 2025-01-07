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
    AWS_VPCLATTICE_API CreateResourceConfigurationRequest();

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
    inline bool GetAllowAssociationToShareableServiceNetwork() const{ return m_allowAssociationToShareableServiceNetwork; }
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateResourceConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateResourceConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateResourceConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration. The name must be unique within the
     * account. The valid characters are a-z, 0-9, and hyphens (-). You can't use a
     * hyphen as the first or last character, or immediately after another hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateResourceConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateResourceConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateResourceConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(SINGLE, GROUP, CHILD) The TCP port ranges that a consumer can use to access
     * a resource configuration (for example: 1-65535). You can separate port ranges
     * using commas (for example: 1,2,22-30).</p>
     */
    inline const Aws::Vector<Aws::String>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<Aws::String>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<Aws::String>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline CreateResourceConfigurationRequest& WithPortRanges(const Aws::Vector<Aws::String>& value) { SetPortRanges(value); return *this;}
    inline CreateResourceConfigurationRequest& WithPortRanges(Aws::Vector<Aws::String>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline CreateResourceConfigurationRequest& AddPortRanges(const Aws::String& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline CreateResourceConfigurationRequest& AddPortRanges(Aws::String&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
    inline CreateResourceConfigurationRequest& AddPortRanges(const char* value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>(SINGLE, GROUP) The protocol accepted by the resource configuration.</p>
     */
    inline const ProtocolType& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const ProtocolType& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(ProtocolType&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline CreateResourceConfigurationRequest& WithProtocol(const ProtocolType& value) { SetProtocol(value); return *this;}
    inline CreateResourceConfigurationRequest& WithProtocol(ProtocolType&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(SINGLE, CHILD, ARN) The resource configuration.</p>
     */
    inline const ResourceConfigurationDefinition& GetResourceConfigurationDefinition() const{ return m_resourceConfigurationDefinition; }
    inline bool ResourceConfigurationDefinitionHasBeenSet() const { return m_resourceConfigurationDefinitionHasBeenSet; }
    inline void SetResourceConfigurationDefinition(const ResourceConfigurationDefinition& value) { m_resourceConfigurationDefinitionHasBeenSet = true; m_resourceConfigurationDefinition = value; }
    inline void SetResourceConfigurationDefinition(ResourceConfigurationDefinition&& value) { m_resourceConfigurationDefinitionHasBeenSet = true; m_resourceConfigurationDefinition = std::move(value); }
    inline CreateResourceConfigurationRequest& WithResourceConfigurationDefinition(const ResourceConfigurationDefinition& value) { SetResourceConfigurationDefinition(value); return *this;}
    inline CreateResourceConfigurationRequest& WithResourceConfigurationDefinition(ResourceConfigurationDefinition&& value) { SetResourceConfigurationDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(CHILD) The ID or ARN of the parent resource configuration (type is
     * <code>GROUP</code>). This is used to associate a child resource configuration
     * with a group resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupIdentifier() const{ return m_resourceConfigurationGroupIdentifier; }
    inline bool ResourceConfigurationGroupIdentifierHasBeenSet() const { return m_resourceConfigurationGroupIdentifierHasBeenSet; }
    inline void SetResourceConfigurationGroupIdentifier(const Aws::String& value) { m_resourceConfigurationGroupIdentifierHasBeenSet = true; m_resourceConfigurationGroupIdentifier = value; }
    inline void SetResourceConfigurationGroupIdentifier(Aws::String&& value) { m_resourceConfigurationGroupIdentifierHasBeenSet = true; m_resourceConfigurationGroupIdentifier = std::move(value); }
    inline void SetResourceConfigurationGroupIdentifier(const char* value) { m_resourceConfigurationGroupIdentifierHasBeenSet = true; m_resourceConfigurationGroupIdentifier.assign(value); }
    inline CreateResourceConfigurationRequest& WithResourceConfigurationGroupIdentifier(const Aws::String& value) { SetResourceConfigurationGroupIdentifier(value); return *this;}
    inline CreateResourceConfigurationRequest& WithResourceConfigurationGroupIdentifier(Aws::String&& value) { SetResourceConfigurationGroupIdentifier(std::move(value)); return *this;}
    inline CreateResourceConfigurationRequest& WithResourceConfigurationGroupIdentifier(const char* value) { SetResourceConfigurationGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(SINGLE, GROUP, ARN) The ID or ARN of the resource gateway used to connect to
     * the resource configuration. For a child resource configuration, this value is
     * inherited from the parent resource configuration.</p>
     */
    inline const Aws::String& GetResourceGatewayIdentifier() const{ return m_resourceGatewayIdentifier; }
    inline bool ResourceGatewayIdentifierHasBeenSet() const { return m_resourceGatewayIdentifierHasBeenSet; }
    inline void SetResourceGatewayIdentifier(const Aws::String& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = value; }
    inline void SetResourceGatewayIdentifier(Aws::String&& value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier = std::move(value); }
    inline void SetResourceGatewayIdentifier(const char* value) { m_resourceGatewayIdentifierHasBeenSet = true; m_resourceGatewayIdentifier.assign(value); }
    inline CreateResourceConfigurationRequest& WithResourceGatewayIdentifier(const Aws::String& value) { SetResourceGatewayIdentifier(value); return *this;}
    inline CreateResourceConfigurationRequest& WithResourceGatewayIdentifier(Aws::String&& value) { SetResourceGatewayIdentifier(std::move(value)); return *this;}
    inline CreateResourceConfigurationRequest& WithResourceGatewayIdentifier(const char* value) { SetResourceGatewayIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the resource configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateResourceConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateResourceConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateResourceConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateResourceConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateResourceConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateResourceConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateResourceConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateResourceConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateResourceConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
    inline const ResourceConfigurationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ResourceConfigurationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ResourceConfigurationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateResourceConfigurationRequest& WithType(const ResourceConfigurationType& value) { SetType(value); return *this;}
    inline CreateResourceConfigurationRequest& WithType(ResourceConfigurationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    bool m_allowAssociationToShareableServiceNetwork;
    bool m_allowAssociationToShareableServiceNetworkHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    ProtocolType m_protocol;
    bool m_protocolHasBeenSet = false;

    ResourceConfigurationDefinition m_resourceConfigurationDefinition;
    bool m_resourceConfigurationDefinitionHasBeenSet = false;

    Aws::String m_resourceConfigurationGroupIdentifier;
    bool m_resourceConfigurationGroupIdentifierHasBeenSet = false;

    Aws::String m_resourceGatewayIdentifier;
    bool m_resourceGatewayIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ResourceConfigurationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
