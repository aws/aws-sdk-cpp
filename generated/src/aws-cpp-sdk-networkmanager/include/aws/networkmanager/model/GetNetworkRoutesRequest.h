/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/RouteTableIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/networkmanager/model/RouteState.h>
#include <aws/networkmanager/model/RouteType.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetNetworkRoutesRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkRoutesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetworkRoutes"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    GetNetworkRoutesRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route table.</p>
     */
    inline const RouteTableIdentifier& GetRouteTableIdentifier() const { return m_routeTableIdentifier; }
    inline bool RouteTableIdentifierHasBeenSet() const { return m_routeTableIdentifierHasBeenSet; }
    template<typename RouteTableIdentifierT = RouteTableIdentifier>
    void SetRouteTableIdentifier(RouteTableIdentifierT&& value) { m_routeTableIdentifierHasBeenSet = true; m_routeTableIdentifier = std::forward<RouteTableIdentifierT>(value); }
    template<typename RouteTableIdentifierT = RouteTableIdentifier>
    GetNetworkRoutesRequest& WithRouteTableIdentifier(RouteTableIdentifierT&& value) { SetRouteTableIdentifier(std::forward<RouteTableIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An exact CIDR block.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExactCidrMatches() const { return m_exactCidrMatches; }
    inline bool ExactCidrMatchesHasBeenSet() const { return m_exactCidrMatchesHasBeenSet; }
    template<typename ExactCidrMatchesT = Aws::Vector<Aws::String>>
    void SetExactCidrMatches(ExactCidrMatchesT&& value) { m_exactCidrMatchesHasBeenSet = true; m_exactCidrMatches = std::forward<ExactCidrMatchesT>(value); }
    template<typename ExactCidrMatchesT = Aws::Vector<Aws::String>>
    GetNetworkRoutesRequest& WithExactCidrMatches(ExactCidrMatchesT&& value) { SetExactCidrMatches(std::forward<ExactCidrMatchesT>(value)); return *this;}
    template<typename ExactCidrMatchesT = Aws::String>
    GetNetworkRoutesRequest& AddExactCidrMatches(ExactCidrMatchesT&& value) { m_exactCidrMatchesHasBeenSet = true; m_exactCidrMatches.emplace_back(std::forward<ExactCidrMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline const Aws::Vector<Aws::String>& GetLongestPrefixMatches() const { return m_longestPrefixMatches; }
    inline bool LongestPrefixMatchesHasBeenSet() const { return m_longestPrefixMatchesHasBeenSet; }
    template<typename LongestPrefixMatchesT = Aws::Vector<Aws::String>>
    void SetLongestPrefixMatches(LongestPrefixMatchesT&& value) { m_longestPrefixMatchesHasBeenSet = true; m_longestPrefixMatches = std::forward<LongestPrefixMatchesT>(value); }
    template<typename LongestPrefixMatchesT = Aws::Vector<Aws::String>>
    GetNetworkRoutesRequest& WithLongestPrefixMatches(LongestPrefixMatchesT&& value) { SetLongestPrefixMatches(std::forward<LongestPrefixMatchesT>(value)); return *this;}
    template<typename LongestPrefixMatchesT = Aws::String>
    GetNetworkRoutesRequest& AddLongestPrefixMatches(LongestPrefixMatchesT&& value) { m_longestPrefixMatchesHasBeenSet = true; m_longestPrefixMatches.emplace_back(std::forward<LongestPrefixMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetOfMatches() const { return m_subnetOfMatches; }
    inline bool SubnetOfMatchesHasBeenSet() const { return m_subnetOfMatchesHasBeenSet; }
    template<typename SubnetOfMatchesT = Aws::Vector<Aws::String>>
    void SetSubnetOfMatches(SubnetOfMatchesT&& value) { m_subnetOfMatchesHasBeenSet = true; m_subnetOfMatches = std::forward<SubnetOfMatchesT>(value); }
    template<typename SubnetOfMatchesT = Aws::Vector<Aws::String>>
    GetNetworkRoutesRequest& WithSubnetOfMatches(SubnetOfMatchesT&& value) { SetSubnetOfMatches(std::forward<SubnetOfMatchesT>(value)); return *this;}
    template<typename SubnetOfMatchesT = Aws::String>
    GetNetworkRoutesRequest& AddSubnetOfMatches(SubnetOfMatchesT&& value) { m_subnetOfMatchesHasBeenSet = true; m_subnetOfMatches.emplace_back(std::forward<SubnetOfMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupernetOfMatches() const { return m_supernetOfMatches; }
    inline bool SupernetOfMatchesHasBeenSet() const { return m_supernetOfMatchesHasBeenSet; }
    template<typename SupernetOfMatchesT = Aws::Vector<Aws::String>>
    void SetSupernetOfMatches(SupernetOfMatchesT&& value) { m_supernetOfMatchesHasBeenSet = true; m_supernetOfMatches = std::forward<SupernetOfMatchesT>(value); }
    template<typename SupernetOfMatchesT = Aws::Vector<Aws::String>>
    GetNetworkRoutesRequest& WithSupernetOfMatches(SupernetOfMatchesT&& value) { SetSupernetOfMatches(std::forward<SupernetOfMatchesT>(value)); return *this;}
    template<typename SupernetOfMatchesT = Aws::String>
    GetNetworkRoutesRequest& AddSupernetOfMatches(SupernetOfMatchesT&& value) { m_supernetOfMatchesHasBeenSet = true; m_supernetOfMatches.emplace_back(std::forward<SupernetOfMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrefixListIds() const { return m_prefixListIds; }
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }
    template<typename PrefixListIdsT = Aws::Vector<Aws::String>>
    void SetPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::forward<PrefixListIdsT>(value); }
    template<typename PrefixListIdsT = Aws::Vector<Aws::String>>
    GetNetworkRoutesRequest& WithPrefixListIds(PrefixListIdsT&& value) { SetPrefixListIds(std::forward<PrefixListIdsT>(value)); return *this;}
    template<typename PrefixListIdsT = Aws::String>
    GetNetworkRoutesRequest& AddPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.emplace_back(std::forward<PrefixListIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route states.</p>
     */
    inline const Aws::Vector<RouteState>& GetStates() const { return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    template<typename StatesT = Aws::Vector<RouteState>>
    void SetStates(StatesT&& value) { m_statesHasBeenSet = true; m_states = std::forward<StatesT>(value); }
    template<typename StatesT = Aws::Vector<RouteState>>
    GetNetworkRoutesRequest& WithStates(StatesT&& value) { SetStates(std::forward<StatesT>(value)); return *this;}
    inline GetNetworkRoutesRequest& AddStates(RouteState value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route types.</p>
     */
    inline const Aws::Vector<RouteType>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<RouteType>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<RouteType>>
    GetNetworkRoutesRequest& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    inline GetNetworkRoutesRequest& AddTypes(RouteType value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDestinationFilters() const { return m_destinationFilters; }
    inline bool DestinationFiltersHasBeenSet() const { return m_destinationFiltersHasBeenSet; }
    template<typename DestinationFiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetDestinationFilters(DestinationFiltersT&& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters = std::forward<DestinationFiltersT>(value); }
    template<typename DestinationFiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    GetNetworkRoutesRequest& WithDestinationFilters(DestinationFiltersT&& value) { SetDestinationFilters(std::forward<DestinationFiltersT>(value)); return *this;}
    template<typename DestinationFiltersKeyT = Aws::String, typename DestinationFiltersValueT = Aws::Vector<Aws::String>>
    GetNetworkRoutesRequest& AddDestinationFilters(DestinationFiltersKeyT&& key, DestinationFiltersValueT&& value) {
      m_destinationFiltersHasBeenSet = true; m_destinationFilters.emplace(std::forward<DestinationFiltersKeyT>(key), std::forward<DestinationFiltersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    RouteTableIdentifier m_routeTableIdentifier;
    bool m_routeTableIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_exactCidrMatches;
    bool m_exactCidrMatchesHasBeenSet = false;

    Aws::Vector<Aws::String> m_longestPrefixMatches;
    bool m_longestPrefixMatchesHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetOfMatches;
    bool m_subnetOfMatchesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supernetOfMatches;
    bool m_supernetOfMatchesHasBeenSet = false;

    Aws::Vector<Aws::String> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet = false;

    Aws::Vector<RouteState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::Vector<RouteType> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_destinationFilters;
    bool m_destinationFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
