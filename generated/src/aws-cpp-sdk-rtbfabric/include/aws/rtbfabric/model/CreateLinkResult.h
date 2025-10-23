﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/model/LinkStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rtbfabric/model/LinkDirection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/model/LinkAttributes.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>
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
namespace RTBFabric
{
namespace Model
{
  class CreateLinkResult
  {
  public:
    AWS_RTBFABRIC_API CreateLinkResult() = default;
    AWS_RTBFABRIC_API CreateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RTBFABRIC_API CreateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    CreateLinkResult& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the peer gateway.</p>
     */
    inline const Aws::String& GetPeerGatewayId() const { return m_peerGatewayId; }
    template<typename PeerGatewayIdT = Aws::String>
    void SetPeerGatewayId(PeerGatewayIdT&& value) { m_peerGatewayIdHasBeenSet = true; m_peerGatewayId = std::forward<PeerGatewayIdT>(value); }
    template<typename PeerGatewayIdT = Aws::String>
    CreateLinkResult& WithPeerGatewayId(PeerGatewayIdT&& value) { SetPeerGatewayId(std::forward<PeerGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the request.</p>
     */
    inline LinkStatus GetStatus() const { return m_status; }
    inline void SetStatus(LinkStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateLinkResult& WithStatus(LinkStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the link was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateLinkResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the link was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CreateLinkResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction of the link.</p>
     */
    inline LinkDirection GetDirection() const { return m_direction; }
    inline void SetDirection(LinkDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline CreateLinkResult& WithDirection(LinkDirection value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of flow modules.</p>
     */
    inline const Aws::Vector<ModuleConfiguration>& GetFlowModules() const { return m_flowModules; }
    template<typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
    void SetFlowModules(FlowModulesT&& value) { m_flowModulesHasBeenSet = true; m_flowModules = std::forward<FlowModulesT>(value); }
    template<typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
    CreateLinkResult& WithFlowModules(FlowModulesT&& value) { SetFlowModules(std::forward<FlowModulesT>(value)); return *this;}
    template<typename FlowModulesT = ModuleConfiguration>
    CreateLinkResult& AddFlowModules(FlowModulesT&& value) { m_flowModulesHasBeenSet = true; m_flowModules.emplace_back(std::forward<FlowModulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of pending flow modules.</p>
     */
    inline const Aws::Vector<ModuleConfiguration>& GetPendingFlowModules() const { return m_pendingFlowModules; }
    template<typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
    void SetPendingFlowModules(PendingFlowModulesT&& value) { m_pendingFlowModulesHasBeenSet = true; m_pendingFlowModules = std::forward<PendingFlowModulesT>(value); }
    template<typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
    CreateLinkResult& WithPendingFlowModules(PendingFlowModulesT&& value) { SetPendingFlowModules(std::forward<PendingFlowModulesT>(value)); return *this;}
    template<typename PendingFlowModulesT = ModuleConfiguration>
    CreateLinkResult& AddPendingFlowModules(PendingFlowModulesT&& value) { m_pendingFlowModulesHasBeenSet = true; m_pendingFlowModules.emplace_back(std::forward<PendingFlowModulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes of the link.</p>
     */
    inline const LinkAttributes& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = LinkAttributes>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = LinkAttributes>
    CreateLinkResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the link.</p>
     */
    inline const Aws::String& GetLinkId() const { return m_linkId; }
    template<typename LinkIdT = Aws::String>
    void SetLinkId(LinkIdT&& value) { m_linkIdHasBeenSet = true; m_linkId = std::forward<LinkIdT>(value); }
    template<typename LinkIdT = Aws::String>
    CreateLinkResult& WithLinkId(LinkIdT&& value) { SetLinkId(std::forward<LinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-provided unique identifier of the link.</p>
     */
    inline const Aws::String& GetCustomerProvidedId() const { return m_customerProvidedId; }
    template<typename CustomerProvidedIdT = Aws::String>
    void SetCustomerProvidedId(CustomerProvidedIdT&& value) { m_customerProvidedIdHasBeenSet = true; m_customerProvidedId = std::forward<CustomerProvidedIdT>(value); }
    template<typename CustomerProvidedIdT = Aws::String>
    CreateLinkResult& WithCustomerProvidedId(CustomerProvidedIdT&& value) { SetCustomerProvidedId(std::forward<CustomerProvidedIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLinkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_peerGatewayId;
    bool m_peerGatewayIdHasBeenSet = false;

    LinkStatus m_status{LinkStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    LinkDirection m_direction{LinkDirection::NOT_SET};
    bool m_directionHasBeenSet = false;

    Aws::Vector<ModuleConfiguration> m_flowModules;
    bool m_flowModulesHasBeenSet = false;

    Aws::Vector<ModuleConfiguration> m_pendingFlowModules;
    bool m_pendingFlowModulesHasBeenSet = false;

    LinkAttributes m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    Aws::String m_customerProvidedId;
    bool m_customerProvidedIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
