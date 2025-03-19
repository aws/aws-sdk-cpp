/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/ProtocolType.h>
#include <aws/vpc-lattice/model/ResourceConfigurationDefinition.h>
#include <aws/vpc-lattice/model/ResourceConfigurationStatus.h>
#include <aws/vpc-lattice/model/ResourceConfigurationType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VPCLattice
{
namespace Model
{
  class UpdateResourceConfigurationResult
  {
  public:
    AWS_VPCLATTICE_API UpdateResourceConfigurationResult() = default;
    AWS_VPCLATTICE_API UpdateResourceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API UpdateResourceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether to add the resource configuration to service networks that
     * are shared with other accounts.</p>
     */
    inline bool GetAllowAssociationToShareableServiceNetwork() const { return m_allowAssociationToShareableServiceNetwork; }
    inline void SetAllowAssociationToShareableServiceNetwork(bool value) { m_allowAssociationToShareableServiceNetworkHasBeenSet = true; m_allowAssociationToShareableServiceNetwork = value; }
    inline UpdateResourceConfigurationResult& WithAllowAssociationToShareableServiceNetwork(bool value) { SetAllowAssociationToShareableServiceNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateResourceConfigurationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateResourceConfigurationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateResourceConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TCP port ranges that a consumer can use to access a resource
     * configuration. You can separate port ranges with a comma. Example: 1-65535 or
     * 1,2,22-30</p>
     */
    inline const Aws::Vector<Aws::String>& GetPortRanges() const { return m_portRanges; }
    template<typename PortRangesT = Aws::Vector<Aws::String>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<Aws::String>>
    UpdateResourceConfigurationResult& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = Aws::String>
    UpdateResourceConfigurationResult& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The TCP protocol accepted by the specified resource configuration.</p>
     */
    inline ProtocolType GetProtocol() const { return m_protocol; }
    inline void SetProtocol(ProtocolType value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline UpdateResourceConfigurationResult& WithProtocol(ProtocolType value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource configuration.</p>
     */
    inline const ResourceConfigurationDefinition& GetResourceConfigurationDefinition() const { return m_resourceConfigurationDefinition; }
    template<typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
    void SetResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) { m_resourceConfigurationDefinitionHasBeenSet = true; m_resourceConfigurationDefinition = std::forward<ResourceConfigurationDefinitionT>(value); }
    template<typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
    UpdateResourceConfigurationResult& WithResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) { SetResourceConfigurationDefinition(std::forward<ResourceConfigurationDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the group resource configuration.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupId() const { return m_resourceConfigurationGroupId; }
    template<typename ResourceConfigurationGroupIdT = Aws::String>
    void SetResourceConfigurationGroupId(ResourceConfigurationGroupIdT&& value) { m_resourceConfigurationGroupIdHasBeenSet = true; m_resourceConfigurationGroupId = std::forward<ResourceConfigurationGroupIdT>(value); }
    template<typename ResourceConfigurationGroupIdT = Aws::String>
    UpdateResourceConfigurationResult& WithResourceConfigurationGroupId(ResourceConfigurationGroupIdT&& value) { SetResourceConfigurationGroupId(std::forward<ResourceConfigurationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource gateway associated with the resource
     * configuration.</p>
     */
    inline const Aws::String& GetResourceGatewayId() const { return m_resourceGatewayId; }
    template<typename ResourceGatewayIdT = Aws::String>
    void SetResourceGatewayId(ResourceGatewayIdT&& value) { m_resourceGatewayIdHasBeenSet = true; m_resourceGatewayId = std::forward<ResourceGatewayIdT>(value); }
    template<typename ResourceGatewayIdT = Aws::String>
    UpdateResourceConfigurationResult& WithResourceGatewayId(ResourceGatewayIdT&& value) { SetResourceGatewayId(std::forward<ResourceGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource configuration.</p>
     */
    inline ResourceConfigurationStatus GetStatus() const { return m_status; }
    inline void SetStatus(ResourceConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateResourceConfigurationResult& WithStatus(ResourceConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource configuration.</p> <ul> <li> <p> <code>SINGLE</code> - A
     * single resource.</p> </li> <li> <p> <code>GROUP</code> - A group of
     * resources.</p> </li> <li> <p> <code>CHILD</code> - A single resource that is
     * part of a group resource configuration.</p> </li> <li> <p> <code>ARN</code> - An
     * Amazon Web Services resource.</p> </li> </ul>
     */
    inline ResourceConfigurationType GetType() const { return m_type; }
    inline void SetType(ResourceConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateResourceConfigurationResult& WithType(ResourceConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateResourceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_allowAssociationToShareableServiceNetwork{false};
    bool m_allowAssociationToShareableServiceNetworkHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    ProtocolType m_protocol{ProtocolType::NOT_SET};
    bool m_protocolHasBeenSet = false;

    ResourceConfigurationDefinition m_resourceConfigurationDefinition;
    bool m_resourceConfigurationDefinitionHasBeenSet = false;

    Aws::String m_resourceConfigurationGroupId;
    bool m_resourceConfigurationGroupIdHasBeenSet = false;

    Aws::String m_resourceGatewayId;
    bool m_resourceGatewayIdHasBeenSet = false;

    ResourceConfigurationStatus m_status{ResourceConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ResourceConfigurationType m_type{ResourceConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
