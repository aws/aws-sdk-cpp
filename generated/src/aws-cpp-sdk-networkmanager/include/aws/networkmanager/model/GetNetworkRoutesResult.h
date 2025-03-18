/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkSegmentEdgeIdentifier.h>
#include <aws/networkmanager/model/RouteTableType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/NetworkRoute.h>
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
  class GetNetworkRoutesResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkRoutesResult() = default;
    AWS_NETWORKMANAGER_API GetNetworkRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the route table.</p>
     */
    inline const Aws::String& GetRouteTableArn() const { return m_routeTableArn; }
    template<typename RouteTableArnT = Aws::String>
    void SetRouteTableArn(RouteTableArnT&& value) { m_routeTableArnHasBeenSet = true; m_routeTableArn = std::forward<RouteTableArnT>(value); }
    template<typename RouteTableArnT = Aws::String>
    GetNetworkRoutesResult& WithRouteTableArn(RouteTableArnT&& value) { SetRouteTableArn(std::forward<RouteTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a core network segment edge.</p>
     */
    inline const CoreNetworkSegmentEdgeIdentifier& GetCoreNetworkSegmentEdge() const { return m_coreNetworkSegmentEdge; }
    template<typename CoreNetworkSegmentEdgeT = CoreNetworkSegmentEdgeIdentifier>
    void SetCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeT&& value) { m_coreNetworkSegmentEdgeHasBeenSet = true; m_coreNetworkSegmentEdge = std::forward<CoreNetworkSegmentEdgeT>(value); }
    template<typename CoreNetworkSegmentEdgeT = CoreNetworkSegmentEdgeIdentifier>
    GetNetworkRoutesResult& WithCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeT&& value) { SetCoreNetworkSegmentEdge(std::forward<CoreNetworkSegmentEdgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table type.</p>
     */
    inline RouteTableType GetRouteTableType() const { return m_routeTableType; }
    inline void SetRouteTableType(RouteTableType value) { m_routeTableTypeHasBeenSet = true; m_routeTableType = value; }
    inline GetNetworkRoutesResult& WithRouteTableType(RouteTableType value) { SetRouteTableType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route table creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetRouteTableTimestamp() const { return m_routeTableTimestamp; }
    template<typename RouteTableTimestampT = Aws::Utils::DateTime>
    void SetRouteTableTimestamp(RouteTableTimestampT&& value) { m_routeTableTimestampHasBeenSet = true; m_routeTableTimestamp = std::forward<RouteTableTimestampT>(value); }
    template<typename RouteTableTimestampT = Aws::Utils::DateTime>
    GetNetworkRoutesResult& WithRouteTableTimestamp(RouteTableTimestampT&& value) { SetRouteTableTimestamp(std::forward<RouteTableTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network routes.</p>
     */
    inline const Aws::Vector<NetworkRoute>& GetNetworkRoutes() const { return m_networkRoutes; }
    template<typename NetworkRoutesT = Aws::Vector<NetworkRoute>>
    void SetNetworkRoutes(NetworkRoutesT&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes = std::forward<NetworkRoutesT>(value); }
    template<typename NetworkRoutesT = Aws::Vector<NetworkRoute>>
    GetNetworkRoutesResult& WithNetworkRoutes(NetworkRoutesT&& value) { SetNetworkRoutes(std::forward<NetworkRoutesT>(value)); return *this;}
    template<typename NetworkRoutesT = NetworkRoute>
    GetNetworkRoutesResult& AddNetworkRoutes(NetworkRoutesT&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes.emplace_back(std::forward<NetworkRoutesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNetworkRoutesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_routeTableArn;
    bool m_routeTableArnHasBeenSet = false;

    CoreNetworkSegmentEdgeIdentifier m_coreNetworkSegmentEdge;
    bool m_coreNetworkSegmentEdgeHasBeenSet = false;

    RouteTableType m_routeTableType{RouteTableType::NOT_SET};
    bool m_routeTableTypeHasBeenSet = false;

    Aws::Utils::DateTime m_routeTableTimestamp{};
    bool m_routeTableTimestampHasBeenSet = false;

    Aws::Vector<NetworkRoute> m_networkRoutes;
    bool m_networkRoutesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
