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
   * Placeholder documentation for UpdateNetworkResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateNetworkResponse">AWS
   * API Reference</a></p>
   */
  class UpdateNetworkSdkResult
  {
  public:
    AWS_MEDIALIVE_API UpdateNetworkSdkResult() = default;
    AWS_MEDIALIVE_API UpdateNetworkSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateNetworkSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of this Network. It is automatically assigned when the Network is
     * created.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateNetworkSdkResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAssociatedClusterIds() const { return m_associatedClusterIds; }
    template<typename AssociatedClusterIdsT = Aws::Vector<Aws::String>>
    void SetAssociatedClusterIds(AssociatedClusterIdsT&& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds = std::forward<AssociatedClusterIdsT>(value); }
    template<typename AssociatedClusterIdsT = Aws::Vector<Aws::String>>
    UpdateNetworkSdkResult& WithAssociatedClusterIds(AssociatedClusterIdsT&& value) { SetAssociatedClusterIds(std::forward<AssociatedClusterIdsT>(value)); return *this;}
    template<typename AssociatedClusterIdsT = Aws::String>
    UpdateNetworkSdkResult& AddAssociatedClusterIds(AssociatedClusterIdsT&& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds.emplace_back(std::forward<AssociatedClusterIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Network. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateNetworkSdkResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of IpPools in your organization's network that identify a collection of
     * IP addresses in this network that are reserved for use in MediaLive Anywhere.
     * MediaLive Anywhere uses these IP addresses for Push inputs (in both Bridge and
     * NAT networks) and for output destinations (only in Bridge networks). Each IpPool
     * specifies one CIDR block.
     */
    inline const Aws::Vector<IpPool>& GetIpPools() const { return m_ipPools; }
    template<typename IpPoolsT = Aws::Vector<IpPool>>
    void SetIpPools(IpPoolsT&& value) { m_ipPoolsHasBeenSet = true; m_ipPools = std::forward<IpPoolsT>(value); }
    template<typename IpPoolsT = Aws::Vector<IpPool>>
    UpdateNetworkSdkResult& WithIpPools(IpPoolsT&& value) { SetIpPools(std::forward<IpPoolsT>(value)); return *this;}
    template<typename IpPoolsT = IpPool>
    UpdateNetworkSdkResult& AddIpPools(IpPoolsT&& value) { m_ipPoolsHasBeenSet = true; m_ipPools.emplace_back(std::forward<IpPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name that you specified for the Network.
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateNetworkSdkResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of Routes that MediaLive Anywhere needs to know about in order to route
     * encoding traffic.
     */
    inline const Aws::Vector<Route>& GetRoutes() const { return m_routes; }
    template<typename RoutesT = Aws::Vector<Route>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<Route>>
    UpdateNetworkSdkResult& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = Route>
    UpdateNetworkSdkResult& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the Network. Only MediaLive Anywhere can change the state.
     */
    inline NetworkState GetState() const { return m_state; }
    inline void SetState(NetworkState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateNetworkSdkResult& WithState(NetworkState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateNetworkSdkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedClusterIds;
    bool m_associatedClusterIdsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<IpPool> m_ipPools;
    bool m_ipPoolsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Route> m_routes;
    bool m_routesHasBeenSet = false;

    NetworkState m_state{NetworkState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
