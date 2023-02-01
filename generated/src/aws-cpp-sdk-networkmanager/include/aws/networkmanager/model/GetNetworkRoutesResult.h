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
    AWS_NETWORKMANAGER_API GetNetworkRoutesResult();
    AWS_NETWORKMANAGER_API GetNetworkRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the route table.</p>
     */
    inline const Aws::String& GetRouteTableArn() const{ return m_routeTableArn; }

    /**
     * <p>The ARN of the route table.</p>
     */
    inline void SetRouteTableArn(const Aws::String& value) { m_routeTableArn = value; }

    /**
     * <p>The ARN of the route table.</p>
     */
    inline void SetRouteTableArn(Aws::String&& value) { m_routeTableArn = std::move(value); }

    /**
     * <p>The ARN of the route table.</p>
     */
    inline void SetRouteTableArn(const char* value) { m_routeTableArn.assign(value); }

    /**
     * <p>The ARN of the route table.</p>
     */
    inline GetNetworkRoutesResult& WithRouteTableArn(const Aws::String& value) { SetRouteTableArn(value); return *this;}

    /**
     * <p>The ARN of the route table.</p>
     */
    inline GetNetworkRoutesResult& WithRouteTableArn(Aws::String&& value) { SetRouteTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the route table.</p>
     */
    inline GetNetworkRoutesResult& WithRouteTableArn(const char* value) { SetRouteTableArn(value); return *this;}


    /**
     * <p>Describes a core network segment edge.</p>
     */
    inline const CoreNetworkSegmentEdgeIdentifier& GetCoreNetworkSegmentEdge() const{ return m_coreNetworkSegmentEdge; }

    /**
     * <p>Describes a core network segment edge.</p>
     */
    inline void SetCoreNetworkSegmentEdge(const CoreNetworkSegmentEdgeIdentifier& value) { m_coreNetworkSegmentEdge = value; }

    /**
     * <p>Describes a core network segment edge.</p>
     */
    inline void SetCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeIdentifier&& value) { m_coreNetworkSegmentEdge = std::move(value); }

    /**
     * <p>Describes a core network segment edge.</p>
     */
    inline GetNetworkRoutesResult& WithCoreNetworkSegmentEdge(const CoreNetworkSegmentEdgeIdentifier& value) { SetCoreNetworkSegmentEdge(value); return *this;}

    /**
     * <p>Describes a core network segment edge.</p>
     */
    inline GetNetworkRoutesResult& WithCoreNetworkSegmentEdge(CoreNetworkSegmentEdgeIdentifier&& value) { SetCoreNetworkSegmentEdge(std::move(value)); return *this;}


    /**
     * <p>The route table type.</p>
     */
    inline const RouteTableType& GetRouteTableType() const{ return m_routeTableType; }

    /**
     * <p>The route table type.</p>
     */
    inline void SetRouteTableType(const RouteTableType& value) { m_routeTableType = value; }

    /**
     * <p>The route table type.</p>
     */
    inline void SetRouteTableType(RouteTableType&& value) { m_routeTableType = std::move(value); }

    /**
     * <p>The route table type.</p>
     */
    inline GetNetworkRoutesResult& WithRouteTableType(const RouteTableType& value) { SetRouteTableType(value); return *this;}

    /**
     * <p>The route table type.</p>
     */
    inline GetNetworkRoutesResult& WithRouteTableType(RouteTableType&& value) { SetRouteTableType(std::move(value)); return *this;}


    /**
     * <p>The route table creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetRouteTableTimestamp() const{ return m_routeTableTimestamp; }

    /**
     * <p>The route table creation time.</p>
     */
    inline void SetRouteTableTimestamp(const Aws::Utils::DateTime& value) { m_routeTableTimestamp = value; }

    /**
     * <p>The route table creation time.</p>
     */
    inline void SetRouteTableTimestamp(Aws::Utils::DateTime&& value) { m_routeTableTimestamp = std::move(value); }

    /**
     * <p>The route table creation time.</p>
     */
    inline GetNetworkRoutesResult& WithRouteTableTimestamp(const Aws::Utils::DateTime& value) { SetRouteTableTimestamp(value); return *this;}

    /**
     * <p>The route table creation time.</p>
     */
    inline GetNetworkRoutesResult& WithRouteTableTimestamp(Aws::Utils::DateTime&& value) { SetRouteTableTimestamp(std::move(value)); return *this;}


    /**
     * <p>The network routes.</p>
     */
    inline const Aws::Vector<NetworkRoute>& GetNetworkRoutes() const{ return m_networkRoutes; }

    /**
     * <p>The network routes.</p>
     */
    inline void SetNetworkRoutes(const Aws::Vector<NetworkRoute>& value) { m_networkRoutes = value; }

    /**
     * <p>The network routes.</p>
     */
    inline void SetNetworkRoutes(Aws::Vector<NetworkRoute>&& value) { m_networkRoutes = std::move(value); }

    /**
     * <p>The network routes.</p>
     */
    inline GetNetworkRoutesResult& WithNetworkRoutes(const Aws::Vector<NetworkRoute>& value) { SetNetworkRoutes(value); return *this;}

    /**
     * <p>The network routes.</p>
     */
    inline GetNetworkRoutesResult& WithNetworkRoutes(Aws::Vector<NetworkRoute>&& value) { SetNetworkRoutes(std::move(value)); return *this;}

    /**
     * <p>The network routes.</p>
     */
    inline GetNetworkRoutesResult& AddNetworkRoutes(const NetworkRoute& value) { m_networkRoutes.push_back(value); return *this; }

    /**
     * <p>The network routes.</p>
     */
    inline GetNetworkRoutesResult& AddNetworkRoutes(NetworkRoute&& value) { m_networkRoutes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_routeTableArn;

    CoreNetworkSegmentEdgeIdentifier m_coreNetworkSegmentEdge;

    RouteTableType m_routeTableType;

    Aws::Utils::DateTime m_routeTableTimestamp;

    Aws::Vector<NetworkRoute> m_networkRoutes;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
