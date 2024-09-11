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
    AWS_MEDIALIVE_API UpdateNetworkRequest();

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
    inline const Aws::Vector<IpPoolUpdateRequest>& GetIpPools() const{ return m_ipPools; }
    inline bool IpPoolsHasBeenSet() const { return m_ipPoolsHasBeenSet; }
    inline void SetIpPools(const Aws::Vector<IpPoolUpdateRequest>& value) { m_ipPoolsHasBeenSet = true; m_ipPools = value; }
    inline void SetIpPools(Aws::Vector<IpPoolUpdateRequest>&& value) { m_ipPoolsHasBeenSet = true; m_ipPools = std::move(value); }
    inline UpdateNetworkRequest& WithIpPools(const Aws::Vector<IpPoolUpdateRequest>& value) { SetIpPools(value); return *this;}
    inline UpdateNetworkRequest& WithIpPools(Aws::Vector<IpPoolUpdateRequest>&& value) { SetIpPools(std::move(value)); return *this;}
    inline UpdateNetworkRequest& AddIpPools(const IpPoolUpdateRequest& value) { m_ipPoolsHasBeenSet = true; m_ipPools.push_back(value); return *this; }
    inline UpdateNetworkRequest& AddIpPools(IpPoolUpdateRequest&& value) { m_ipPoolsHasBeenSet = true; m_ipPools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the name of the Network.
     * Specify a name that is unique in the AWS account. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateNetworkRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateNetworkRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateNetworkRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the network
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }
    inline UpdateNetworkRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}
    inline UpdateNetworkRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}
    inline UpdateNetworkRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change or add routes in the Network.
     * An array of Routes that MediaLive Anywhere needs to know about in order to route
     * encoding traffic.
     */
    inline const Aws::Vector<RouteUpdateRequest>& GetRoutes() const{ return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    inline void SetRoutes(const Aws::Vector<RouteUpdateRequest>& value) { m_routesHasBeenSet = true; m_routes = value; }
    inline void SetRoutes(Aws::Vector<RouteUpdateRequest>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }
    inline UpdateNetworkRequest& WithRoutes(const Aws::Vector<RouteUpdateRequest>& value) { SetRoutes(value); return *this;}
    inline UpdateNetworkRequest& WithRoutes(Aws::Vector<RouteUpdateRequest>&& value) { SetRoutes(std::move(value)); return *this;}
    inline UpdateNetworkRequest& AddRoutes(const RouteUpdateRequest& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }
    inline UpdateNetworkRequest& AddRoutes(RouteUpdateRequest&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }
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
