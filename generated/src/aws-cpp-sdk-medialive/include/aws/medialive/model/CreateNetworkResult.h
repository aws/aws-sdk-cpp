/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/NetworkState.h>
#include <aws/medialive/model/IpPool.h>
#include <aws/medialive/model/Route.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for CreateNetworkResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNetworkResponse">AWS
   * API Reference</a></p>
   */
  class CreateNetworkResult
  {
  public:
    AWS_MEDIALIVE_API CreateNetworkResult();
    AWS_MEDIALIVE_API CreateNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of this Network. It is automatically assigned when the Network is
     * created.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateNetworkResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateNetworkResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateNetworkResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAssociatedClusterIds() const{ return m_associatedClusterIds; }
    inline void SetAssociatedClusterIds(const Aws::Vector<Aws::String>& value) { m_associatedClusterIds = value; }
    inline void SetAssociatedClusterIds(Aws::Vector<Aws::String>&& value) { m_associatedClusterIds = std::move(value); }
    inline CreateNetworkResult& WithAssociatedClusterIds(const Aws::Vector<Aws::String>& value) { SetAssociatedClusterIds(value); return *this;}
    inline CreateNetworkResult& WithAssociatedClusterIds(Aws::Vector<Aws::String>&& value) { SetAssociatedClusterIds(std::move(value)); return *this;}
    inline CreateNetworkResult& AddAssociatedClusterIds(const Aws::String& value) { m_associatedClusterIds.push_back(value); return *this; }
    inline CreateNetworkResult& AddAssociatedClusterIds(Aws::String&& value) { m_associatedClusterIds.push_back(std::move(value)); return *this; }
    inline CreateNetworkResult& AddAssociatedClusterIds(const char* value) { m_associatedClusterIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Network. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateNetworkResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateNetworkResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateNetworkResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of IpPools in your organization's network that identify a collection of
     * IP addresses in this network that are reserved for use in MediaLive Anywhere.
     * MediaLive Anywhere uses these IP addresses for Push inputs (in both Bridge and
     * NAT networks) and for output destinations (only in Bridge networks). Each IpPool
     * specifies one CIDR block.
     */
    inline const Aws::Vector<IpPool>& GetIpPools() const{ return m_ipPools; }
    inline void SetIpPools(const Aws::Vector<IpPool>& value) { m_ipPools = value; }
    inline void SetIpPools(Aws::Vector<IpPool>&& value) { m_ipPools = std::move(value); }
    inline CreateNetworkResult& WithIpPools(const Aws::Vector<IpPool>& value) { SetIpPools(value); return *this;}
    inline CreateNetworkResult& WithIpPools(Aws::Vector<IpPool>&& value) { SetIpPools(std::move(value)); return *this;}
    inline CreateNetworkResult& AddIpPools(const IpPool& value) { m_ipPools.push_back(value); return *this; }
    inline CreateNetworkResult& AddIpPools(IpPool&& value) { m_ipPools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name that you specified for the Network.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateNetworkResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNetworkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNetworkResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * An array of routes that MediaLive Anywhere needs to know about in order to route
     * encoding traffic.
     */
    inline const Aws::Vector<Route>& GetRoutes() const{ return m_routes; }
    inline void SetRoutes(const Aws::Vector<Route>& value) { m_routes = value; }
    inline void SetRoutes(Aws::Vector<Route>&& value) { m_routes = std::move(value); }
    inline CreateNetworkResult& WithRoutes(const Aws::Vector<Route>& value) { SetRoutes(value); return *this;}
    inline CreateNetworkResult& WithRoutes(Aws::Vector<Route>&& value) { SetRoutes(std::move(value)); return *this;}
    inline CreateNetworkResult& AddRoutes(const Route& value) { m_routes.push_back(value); return *this; }
    inline CreateNetworkResult& AddRoutes(Route&& value) { m_routes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the Network. Only MediaLive Anywhere can change the state.
     */
    inline const NetworkState& GetState() const{ return m_state; }
    inline void SetState(const NetworkState& value) { m_state = value; }
    inline void SetState(NetworkState&& value) { m_state = std::move(value); }
    inline CreateNetworkResult& WithState(const NetworkState& value) { SetState(value); return *this;}
    inline CreateNetworkResult& WithState(NetworkState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateNetworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNetworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNetworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_associatedClusterIds;

    Aws::String m_id;

    Aws::Vector<IpPool> m_ipPools;

    Aws::String m_name;

    Aws::Vector<Route> m_routes;

    NetworkState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
