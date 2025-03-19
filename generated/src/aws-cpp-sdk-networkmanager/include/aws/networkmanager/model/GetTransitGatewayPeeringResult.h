/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/TransitGatewayPeering.h>
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
  class GetTransitGatewayPeeringResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayPeeringResult() = default;
    AWS_NETWORKMANAGER_API GetTransitGatewayPeeringResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayPeeringResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns information about a transit gateway peering. </p>
     */
    inline const TransitGatewayPeering& GetTransitGatewayPeering() const { return m_transitGatewayPeering; }
    template<typename TransitGatewayPeeringT = TransitGatewayPeering>
    void SetTransitGatewayPeering(TransitGatewayPeeringT&& value) { m_transitGatewayPeeringHasBeenSet = true; m_transitGatewayPeering = std::forward<TransitGatewayPeeringT>(value); }
    template<typename TransitGatewayPeeringT = TransitGatewayPeering>
    GetTransitGatewayPeeringResult& WithTransitGatewayPeering(TransitGatewayPeeringT&& value) { SetTransitGatewayPeering(std::forward<TransitGatewayPeeringT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTransitGatewayPeeringResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayPeering m_transitGatewayPeering;
    bool m_transitGatewayPeeringHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
