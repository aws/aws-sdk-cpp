/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/TransitGatewayConnectPeerAssociation.h>
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
  class GetTransitGatewayConnectPeerAssociationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsResult() = default;
    AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline const Aws::Vector<TransitGatewayConnectPeerAssociation>& GetTransitGatewayConnectPeerAssociations() const { return m_transitGatewayConnectPeerAssociations; }
    template<typename TransitGatewayConnectPeerAssociationsT = Aws::Vector<TransitGatewayConnectPeerAssociation>>
    void SetTransitGatewayConnectPeerAssociations(TransitGatewayConnectPeerAssociationsT&& value) { m_transitGatewayConnectPeerAssociationsHasBeenSet = true; m_transitGatewayConnectPeerAssociations = std::forward<TransitGatewayConnectPeerAssociationsT>(value); }
    template<typename TransitGatewayConnectPeerAssociationsT = Aws::Vector<TransitGatewayConnectPeerAssociation>>
    GetTransitGatewayConnectPeerAssociationsResult& WithTransitGatewayConnectPeerAssociations(TransitGatewayConnectPeerAssociationsT&& value) { SetTransitGatewayConnectPeerAssociations(std::forward<TransitGatewayConnectPeerAssociationsT>(value)); return *this;}
    template<typename TransitGatewayConnectPeerAssociationsT = TransitGatewayConnectPeerAssociation>
    GetTransitGatewayConnectPeerAssociationsResult& AddTransitGatewayConnectPeerAssociations(TransitGatewayConnectPeerAssociationsT&& value) { m_transitGatewayConnectPeerAssociationsHasBeenSet = true; m_transitGatewayConnectPeerAssociations.emplace_back(std::forward<TransitGatewayConnectPeerAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTransitGatewayConnectPeerAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTransitGatewayConnectPeerAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayConnectPeerAssociation> m_transitGatewayConnectPeerAssociations;
    bool m_transitGatewayConnectPeerAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
