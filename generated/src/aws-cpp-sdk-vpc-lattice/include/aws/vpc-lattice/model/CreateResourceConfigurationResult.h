/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateResourceConfigurationResult
  {
  public:
    AWS_VPCLATTICE_API CreateResourceConfigurationResult() = default;
    AWS_VPCLATTICE_API CreateResourceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateResourceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether the resource configuration can be associated with a
     * sharable service network.</p>
     */
    inline bool GetAllowAssociationToShareableServiceNetwork() const { return m_allowAssociationToShareableServiceNetwork; }
    inline void SetAllowAssociationToShareableServiceNetwork(bool value) { m_allowAssociationToShareableServiceNetworkHasBeenSet = true; m_allowAssociationToShareableServiceNetwork = value; }
    inline CreateResourceConfigurationResult& WithAllowAssociationToShareableServiceNetwork(bool value) { SetAllowAssociationToShareableServiceNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateResourceConfigurationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the resource configuration was created, in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateResourceConfigurationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the request failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    CreateResourceConfigurationResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateResourceConfigurationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateResourceConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPortRanges() const { return m_portRanges; }
    template<typename PortRangesT = Aws::Vector<Aws::String>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<Aws::String>>
    CreateResourceConfigurationResult& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = Aws::String>
    CreateResourceConfigurationResult& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline ProtocolType GetProtocol() const { return m_protocol; }
    inline void SetProtocol(ProtocolType value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateResourceConfigurationResult& WithProtocol(ProtocolType value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource configuration.</p>
     */
    inline const ResourceConfigurationDefinition& GetResourceConfigurationDefinition() const { return m_resourceConfigurationDefinition; }
    template<typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
    void SetResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) { m_resourceConfigurationDefinitionHasBeenSet = true; m_resourceConfigurationDefinition = std::forward<ResourceConfigurationDefinitionT>(value); }
    template<typename ResourceConfigurationDefinitionT = ResourceConfigurationDefinition>
    CreateResourceConfigurationResult& WithResourceConfigurationDefinition(ResourceConfigurationDefinitionT&& value) { SetResourceConfigurationDefinition(std::forward<ResourceConfigurationDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent resource configuration (type is GROUP).</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupId() const { return m_resourceConfigurationGroupId; }
    template<typename ResourceConfigurationGroupIdT = Aws::String>
    void SetResourceConfigurationGroupId(ResourceConfigurationGroupIdT&& value) { m_resourceConfigurationGroupIdHasBeenSet = true; m_resourceConfigurationGroupId = std::forward<ResourceConfigurationGroupIdT>(value); }
    template<typename ResourceConfigurationGroupIdT = Aws::String>
    CreateResourceConfigurationResult& WithResourceConfigurationGroupId(ResourceConfigurationGroupIdT&& value) { SetResourceConfigurationGroupId(std::forward<ResourceConfigurationGroupIdT>(value)); return *this;}
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
    CreateResourceConfigurationResult& WithResourceGatewayId(ResourceGatewayIdT&& value) { SetResourceGatewayId(std::forward<ResourceGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the resource configuration.</p>
     */
    inline ResourceConfigurationStatus GetStatus() const { return m_status; }
    inline void SetStatus(ResourceConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateResourceConfigurationResult& WithStatus(ResourceConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource configuration.</p>
     */
    inline ResourceConfigurationType GetType() const { return m_type; }
    inline void SetType(ResourceConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateResourceConfigurationResult& WithType(ResourceConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateResourceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_allowAssociationToShareableServiceNetwork{false};
    bool m_allowAssociationToShareableServiceNetworkHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

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
