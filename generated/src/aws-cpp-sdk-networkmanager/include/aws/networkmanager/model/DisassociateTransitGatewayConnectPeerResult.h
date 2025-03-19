/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayConnectPeerAssociation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{
  class DisassociateTransitGatewayConnectPeerResult
  {
  public:
    AWS_NETWORKMANAGER_API DisassociateTransitGatewayConnectPeerResult() = default;
    AWS_NETWORKMANAGER_API DisassociateTransitGatewayConnectPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API DisassociateTransitGatewayConnectPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The transit gateway Connect peer association.</p>
     */
    inline const TransitGatewayConnectPeerAssociation& GetTransitGatewayConnectPeerAssociation() const { return m_transitGatewayConnectPeerAssociation; }
    template<typename TransitGatewayConnectPeerAssociationT = TransitGatewayConnectPeerAssociation>
    void SetTransitGatewayConnectPeerAssociation(TransitGatewayConnectPeerAssociationT&& value) { m_transitGatewayConnectPeerAssociationHasBeenSet = true; m_transitGatewayConnectPeerAssociation = std::forward<TransitGatewayConnectPeerAssociationT>(value); }
    template<typename TransitGatewayConnectPeerAssociationT = TransitGatewayConnectPeerAssociation>
    DisassociateTransitGatewayConnectPeerResult& WithTransitGatewayConnectPeerAssociation(TransitGatewayConnectPeerAssociationT&& value) { SetTransitGatewayConnectPeerAssociation(std::forward<TransitGatewayConnectPeerAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateTransitGatewayConnectPeerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayConnectPeerAssociation m_transitGatewayConnectPeerAssociation;
    bool m_transitGatewayConnectPeerAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
