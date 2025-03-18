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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Used in ListNetworksResult.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeNetworkSummary">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkSummary
  {
  public:
    AWS_MEDIALIVE_API DescribeNetworkSummary() = default;
    AWS_MEDIALIVE_API DescribeNetworkSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DescribeNetworkSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of this Network. It is automatically assigned when the Network is
     * created.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeNetworkSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAssociatedClusterIds() const { return m_associatedClusterIds; }
    inline bool AssociatedClusterIdsHasBeenSet() const { return m_associatedClusterIdsHasBeenSet; }
    template<typename AssociatedClusterIdsT = Aws::Vector<Aws::String>>
    void SetAssociatedClusterIds(AssociatedClusterIdsT&& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds = std::forward<AssociatedClusterIdsT>(value); }
    template<typename AssociatedClusterIdsT = Aws::Vector<Aws::String>>
    DescribeNetworkSummary& WithAssociatedClusterIds(AssociatedClusterIdsT&& value) { SetAssociatedClusterIds(std::forward<AssociatedClusterIdsT>(value)); return *this;}
    template<typename AssociatedClusterIdsT = Aws::String>
    DescribeNetworkSummary& AddAssociatedClusterIds(AssociatedClusterIdsT&& value) { m_associatedClusterIdsHasBeenSet = true; m_associatedClusterIds.emplace_back(std::forward<AssociatedClusterIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The ID of the Network. Unique in the AWS account. The ID is the resource-id
     * portion of the ARN.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeNetworkSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of IpPools in your organization's network that identify a collection of
     * IP addresses in your organization's network that are reserved for use in
     * MediaLive Anywhere. MediaLive Anywhere uses these IP addresses for Push inputs
     * (in both Bridge and NAT networks) and for output destinations (only in Bridge
     * networks). Each IpPool specifies one CIDR block.
     */
    inline const Aws::Vector<IpPool>& GetIpPools() const { return m_ipPools; }
    inline bool IpPoolsHasBeenSet() const { return m_ipPoolsHasBeenSet; }
    template<typename IpPoolsT = Aws::Vector<IpPool>>
    void SetIpPools(IpPoolsT&& value) { m_ipPoolsHasBeenSet = true; m_ipPools = std::forward<IpPoolsT>(value); }
    template<typename IpPoolsT = Aws::Vector<IpPool>>
    DescribeNetworkSummary& WithIpPools(IpPoolsT&& value) { SetIpPools(std::forward<IpPoolsT>(value)); return *this;}
    template<typename IpPoolsT = IpPool>
    DescribeNetworkSummary& AddIpPools(IpPoolsT&& value) { m_ipPoolsHasBeenSet = true; m_ipPools.emplace_back(std::forward<IpPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name that you specified for this Network.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeNetworkSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An array of routes that MediaLive Anywhere needs to know about in order to route
     * encoding traffic.
     */
    inline const Aws::Vector<Route>& GetRoutes() const { return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    template<typename RoutesT = Aws::Vector<Route>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<Route>>
    DescribeNetworkSummary& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = Route>
    DescribeNetworkSummary& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The current state of the Network. Only MediaLive Anywhere can change the state.
     */
    inline NetworkState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(NetworkState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeNetworkSummary& WithState(NetworkState value) { SetState(value); return *this;}
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
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
