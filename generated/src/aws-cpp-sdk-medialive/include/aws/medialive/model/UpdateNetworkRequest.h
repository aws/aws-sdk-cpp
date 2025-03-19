/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/IpPoolUpdateRequest.h>
#include <aws/medialive/model/RouteUpdateRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update the network.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateNetworkRequest">AWS
   * API Reference</a></p>
   */
  class UpdateNetworkRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetwork"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Include this parameter only if you want to change the pool of IP addresses in
     * the network. An array of IpPoolCreateRequests that identify a collection of IP
     * addresses in this network that you want to reserve for use in MediaLive
     * Anywhere. MediaLive Anywhere uses these IP addresses for Push inputs (in both
     * Bridge and NAT networks) and for output destinations (only in Bridge networks).
     * Each IpPoolUpdateRequest specifies one CIDR block.
     */
    inline const Aws::Vector<IpPoolUpdateRequest>& GetIpPools() const { return m_ipPools; }
    inline bool IpPoolsHasBeenSet() const { return m_ipPoolsHasBeenSet; }
    template<typename IpPoolsT = Aws::Vector<IpPoolUpdateRequest>>
    void SetIpPools(IpPoolsT&& value) { m_ipPoolsHasBeenSet = true; m_ipPools = std::forward<IpPoolsT>(value); }
    template<typename IpPoolsT = Aws::Vector<IpPoolUpdateRequest>>
    UpdateNetworkRequest& WithIpPools(IpPoolsT&& value) { SetIpPools(std::forward<IpPoolsT>(value)); return *this;}
    template<typename IpPoolsT = IpPoolUpdateRequest>
    UpdateNetworkRequest& AddIpPools(IpPoolsT&& value) { m_ipPoolsHasBeenSet = true; m_ipPools.emplace_back(std::forward<IpPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the name of the Network.
     * Specify a name that is unique in the AWS account. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateNetworkRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the network
     */
    inline const Aws::String& GetNetworkId() const { return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    template<typename NetworkIdT = Aws::String>
    void SetNetworkId(NetworkIdT&& value) { m_networkIdHasBeenSet = true; m_networkId = std::forward<NetworkIdT>(value); }
    template<typename NetworkIdT = Aws::String>
    UpdateNetworkRequest& WithNetworkId(NetworkIdT&& value) { SetNetworkId(std::forward<NetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change or add routes in the Network.
     * An array of Routes that MediaLive Anywhere needs to know about in order to route
     * encoding traffic.
     */
    inline const Aws::Vector<RouteUpdateRequest>& GetRoutes() const { return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    template<typename RoutesT = Aws::Vector<RouteUpdateRequest>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<RouteUpdateRequest>>
    UpdateNetworkRequest& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = RouteUpdateRequest>
    UpdateNetworkRequest& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IpPoolUpdateRequest> m_ipPools;
    bool m_ipPoolsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::Vector<RouteUpdateRequest> m_routes;
    bool m_routesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
