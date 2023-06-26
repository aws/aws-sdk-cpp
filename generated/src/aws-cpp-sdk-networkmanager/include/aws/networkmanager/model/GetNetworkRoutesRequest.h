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
    AWS_NETWORKMANAGER_API GetNetworkRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetworkRoutes"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetNetworkRoutesRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetNetworkRoutesRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetNetworkRoutesRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of the route table.</p>
     */
    inline const RouteTableIdentifier& GetRouteTableIdentifier() const{ return m_routeTableIdentifier; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline bool RouteTableIdentifierHasBeenSet() const { return m_routeTableIdentifierHasBeenSet; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableIdentifier(const RouteTableIdentifier& value) { m_routeTableIdentifierHasBeenSet = true; m_routeTableIdentifier = value; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableIdentifier(RouteTableIdentifier&& value) { m_routeTableIdentifierHasBeenSet = true; m_routeTableIdentifier = std::move(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline GetNetworkRoutesRequest& WithRouteTableIdentifier(const RouteTableIdentifier& value) { SetRouteTableIdentifier(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline GetNetworkRoutesRequest& WithRouteTableIdentifier(RouteTableIdentifier&& value) { SetRouteTableIdentifier(std::move(value)); return *this;}


    /**
     * <p>An exact CIDR block.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExactCidrMatches() const{ return m_exactCidrMatches; }

    /**
     * <p>An exact CIDR block.</p>
     */
    inline bool ExactCidrMatchesHasBeenSet() const { return m_exactCidrMatchesHasBeenSet; }

    /**
     * <p>An exact CIDR block.</p>
     */
    inline void SetExactCidrMatches(const Aws::Vector<Aws::String>& value) { m_exactCidrMatchesHasBeenSet = true; m_exactCidrMatches = value; }

    /**
     * <p>An exact CIDR block.</p>
     */
    inline void SetExactCidrMatches(Aws::Vector<Aws::String>&& value) { m_exactCidrMatchesHasBeenSet = true; m_exactCidrMatches = std::move(value); }

    /**
     * <p>An exact CIDR block.</p>
     */
    inline GetNetworkRoutesRequest& WithExactCidrMatches(const Aws::Vector<Aws::String>& value) { SetExactCidrMatches(value); return *this;}

    /**
     * <p>An exact CIDR block.</p>
     */
    inline GetNetworkRoutesRequest& WithExactCidrMatches(Aws::Vector<Aws::String>&& value) { SetExactCidrMatches(std::move(value)); return *this;}

    /**
     * <p>An exact CIDR block.</p>
     */
    inline GetNetworkRoutesRequest& AddExactCidrMatches(const Aws::String& value) { m_exactCidrMatchesHasBeenSet = true; m_exactCidrMatches.push_back(value); return *this; }

    /**
     * <p>An exact CIDR block.</p>
     */
    inline GetNetworkRoutesRequest& AddExactCidrMatches(Aws::String&& value) { m_exactCidrMatchesHasBeenSet = true; m_exactCidrMatches.push_back(std::move(value)); return *this; }

    /**
     * <p>An exact CIDR block.</p>
     */
    inline GetNetworkRoutesRequest& AddExactCidrMatches(const char* value) { m_exactCidrMatchesHasBeenSet = true; m_exactCidrMatches.push_back(value); return *this; }


    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline const Aws::Vector<Aws::String>& GetLongestPrefixMatches() const{ return m_longestPrefixMatches; }

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline bool LongestPrefixMatchesHasBeenSet() const { return m_longestPrefixMatchesHasBeenSet; }

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline void SetLongestPrefixMatches(const Aws::Vector<Aws::String>& value) { m_longestPrefixMatchesHasBeenSet = true; m_longestPrefixMatches = value; }

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline void SetLongestPrefixMatches(Aws::Vector<Aws::String>&& value) { m_longestPrefixMatchesHasBeenSet = true; m_longestPrefixMatches = std::move(value); }

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline GetNetworkRoutesRequest& WithLongestPrefixMatches(const Aws::Vector<Aws::String>& value) { SetLongestPrefixMatches(value); return *this;}

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline GetNetworkRoutesRequest& WithLongestPrefixMatches(Aws::Vector<Aws::String>&& value) { SetLongestPrefixMatches(std::move(value)); return *this;}

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline GetNetworkRoutesRequest& AddLongestPrefixMatches(const Aws::String& value) { m_longestPrefixMatchesHasBeenSet = true; m_longestPrefixMatches.push_back(value); return *this; }

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline GetNetworkRoutesRequest& AddLongestPrefixMatches(Aws::String&& value) { m_longestPrefixMatchesHasBeenSet = true; m_longestPrefixMatches.push_back(std::move(value)); return *this; }

    /**
     * <p>The most specific route that matches the traffic (longest prefix match).</p>
     */
    inline GetNetworkRoutesRequest& AddLongestPrefixMatches(const char* value) { m_longestPrefixMatchesHasBeenSet = true; m_longestPrefixMatches.push_back(value); return *this; }


    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetOfMatches() const{ return m_subnetOfMatches; }

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline bool SubnetOfMatchesHasBeenSet() const { return m_subnetOfMatchesHasBeenSet; }

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline void SetSubnetOfMatches(const Aws::Vector<Aws::String>& value) { m_subnetOfMatchesHasBeenSet = true; m_subnetOfMatches = value; }

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline void SetSubnetOfMatches(Aws::Vector<Aws::String>&& value) { m_subnetOfMatchesHasBeenSet = true; m_subnetOfMatches = std::move(value); }

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline GetNetworkRoutesRequest& WithSubnetOfMatches(const Aws::Vector<Aws::String>& value) { SetSubnetOfMatches(value); return *this;}

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline GetNetworkRoutesRequest& WithSubnetOfMatches(Aws::Vector<Aws::String>&& value) { SetSubnetOfMatches(std::move(value)); return *this;}

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline GetNetworkRoutesRequest& AddSubnetOfMatches(const Aws::String& value) { m_subnetOfMatchesHasBeenSet = true; m_subnetOfMatches.push_back(value); return *this; }

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline GetNetworkRoutesRequest& AddSubnetOfMatches(Aws::String&& value) { m_subnetOfMatchesHasBeenSet = true; m_subnetOfMatches.push_back(std::move(value)); return *this; }

    /**
     * <p>The routes with a subnet that match the specified CIDR filter.</p>
     */
    inline GetNetworkRoutesRequest& AddSubnetOfMatches(const char* value) { m_subnetOfMatchesHasBeenSet = true; m_subnetOfMatches.push_back(value); return *this; }


    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupernetOfMatches() const{ return m_supernetOfMatches; }

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline bool SupernetOfMatchesHasBeenSet() const { return m_supernetOfMatchesHasBeenSet; }

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline void SetSupernetOfMatches(const Aws::Vector<Aws::String>& value) { m_supernetOfMatchesHasBeenSet = true; m_supernetOfMatches = value; }

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline void SetSupernetOfMatches(Aws::Vector<Aws::String>&& value) { m_supernetOfMatchesHasBeenSet = true; m_supernetOfMatches = std::move(value); }

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline GetNetworkRoutesRequest& WithSupernetOfMatches(const Aws::Vector<Aws::String>& value) { SetSupernetOfMatches(value); return *this;}

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline GetNetworkRoutesRequest& WithSupernetOfMatches(Aws::Vector<Aws::String>&& value) { SetSupernetOfMatches(std::move(value)); return *this;}

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline GetNetworkRoutesRequest& AddSupernetOfMatches(const Aws::String& value) { m_supernetOfMatchesHasBeenSet = true; m_supernetOfMatches.push_back(value); return *this; }

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline GetNetworkRoutesRequest& AddSupernetOfMatches(Aws::String&& value) { m_supernetOfMatchesHasBeenSet = true; m_supernetOfMatches.push_back(std::move(value)); return *this; }

    /**
     * <p>The routes with a CIDR that encompasses the CIDR filter. Example: If you
     * specify 10.0.1.0/30, then the result returns 10.0.1.0/29.</p>
     */
    inline GetNetworkRoutesRequest& AddSupernetOfMatches(const char* value) { m_supernetOfMatchesHasBeenSet = true; m_supernetOfMatches.push_back(value); return *this; }


    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrefixListIds() const{ return m_prefixListIds; }

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline void SetPrefixListIds(const Aws::Vector<Aws::String>& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = value; }

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline void SetPrefixListIds(Aws::Vector<Aws::String>&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::move(value); }

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline GetNetworkRoutesRequest& WithPrefixListIds(const Aws::Vector<Aws::String>& value) { SetPrefixListIds(value); return *this;}

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline GetNetworkRoutesRequest& WithPrefixListIds(Aws::Vector<Aws::String>&& value) { SetPrefixListIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline GetNetworkRoutesRequest& AddPrefixListIds(const Aws::String& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline GetNetworkRoutesRequest& AddPrefixListIds(Aws::String&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the prefix lists.</p>
     */
    inline GetNetworkRoutesRequest& AddPrefixListIds(const char* value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }


    /**
     * <p>The route states.</p>
     */
    inline const Aws::Vector<RouteState>& GetStates() const{ return m_states; }

    /**
     * <p>The route states.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>The route states.</p>
     */
    inline void SetStates(const Aws::Vector<RouteState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>The route states.</p>
     */
    inline void SetStates(Aws::Vector<RouteState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>The route states.</p>
     */
    inline GetNetworkRoutesRequest& WithStates(const Aws::Vector<RouteState>& value) { SetStates(value); return *this;}

    /**
     * <p>The route states.</p>
     */
    inline GetNetworkRoutesRequest& WithStates(Aws::Vector<RouteState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>The route states.</p>
     */
    inline GetNetworkRoutesRequest& AddStates(const RouteState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>The route states.</p>
     */
    inline GetNetworkRoutesRequest& AddStates(RouteState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>The route types.</p>
     */
    inline const Aws::Vector<RouteType>& GetTypes() const{ return m_types; }

    /**
     * <p>The route types.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>The route types.</p>
     */
    inline void SetTypes(const Aws::Vector<RouteType>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>The route types.</p>
     */
    inline void SetTypes(Aws::Vector<RouteType>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>The route types.</p>
     */
    inline GetNetworkRoutesRequest& WithTypes(const Aws::Vector<RouteType>& value) { SetTypes(value); return *this;}

    /**
     * <p>The route types.</p>
     */
    inline GetNetworkRoutesRequest& WithTypes(Aws::Vector<RouteType>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>The route types.</p>
     */
    inline GetNetworkRoutesRequest& AddTypes(const RouteType& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>The route types.</p>
     */
    inline GetNetworkRoutesRequest& AddTypes(RouteType&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }


    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDestinationFilters() const{ return m_destinationFilters; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline bool DestinationFiltersHasBeenSet() const { return m_destinationFiltersHasBeenSet; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline void SetDestinationFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters = value; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline void SetDestinationFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters = std::move(value); }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& WithDestinationFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetDestinationFilters(value); return *this;}

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& WithDestinationFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetDestinationFilters(std::move(value)); return *this;}

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& AddDestinationFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters.emplace(key, value); return *this; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& AddDestinationFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& AddDestinationFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& AddDestinationFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& AddDestinationFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filter by route table destination. Possible Values:
     * TRANSIT_GATEWAY_ATTACHMENT_ID, RESOURCE_ID, or RESOURCE_TYPE.</p>
     */
    inline GetNetworkRoutesRequest& AddDestinationFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_destinationFiltersHasBeenSet = true; m_destinationFilters.emplace(key, value); return *this; }

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
