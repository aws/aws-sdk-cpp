/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace NetworkManager {
namespace Model {

/**
 */
class ListCoreNetworkRoutingInformationRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API ListCoreNetworkRoutingInformationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListCoreNetworkRoutingInformation"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the core network to retrieve routing information for.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the segment to filter routing information by.</p>
   */
  inline const Aws::String& GetSegmentName() const { return m_segmentName; }
  inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
  template <typename SegmentNameT = Aws::String>
  void SetSegmentName(SegmentNameT&& value) {
    m_segmentNameHasBeenSet = true;
    m_segmentName = std::forward<SegmentNameT>(value);
  }
  template <typename SegmentNameT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& WithSegmentName(SegmentNameT&& value) {
    SetSegmentName(std::forward<SegmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The edge location to filter routing information by.</p>
   */
  inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
  inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
  template <typename EdgeLocationT = Aws::String>
  void SetEdgeLocation(EdgeLocationT&& value) {
    m_edgeLocationHasBeenSet = true;
    m_edgeLocation = std::forward<EdgeLocationT>(value);
  }
  template <typename EdgeLocationT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& WithEdgeLocation(EdgeLocationT&& value) {
    SetEdgeLocation(std::forward<EdgeLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters to apply based on next hop information. Each filter value must
   * exactly match the corresponding next hop value. Values for the same filter are
   * joined with OR, and different filters are joined with AND. The following filters
   * are supported:</p> <ul> <li> <p> <code>core-network-attachment-id</code>: The ID
   * of the core network attachment for the next hop, for example
   * <code>attachment-0123456789abcdef0</code>.</p> </li> <li> <p>
   * <code>segment-name</code>: The name of the segment for the next hop.</p> </li>
   * <li> <p> <code>edge-location</code>: The edge location for the next hop, for
   * example <code>us-east-1</code>.</p> </li> <li> <p> <code>resource-id</code>: The
   * ID of the resource for the next hop.</p> </li> <li> <p>
   * <code>resource-type</code>: The type of resource for the next hop. The possible
   * values are <code>vpc</code>, <code>vpn</code>, <code>connect-peer</code>,
   * <code>direct-connect-gateway</code>, <code>transit-gateway-route-table</code>,
   * <code>attachment</code>, and <code>blackhole</code>.</p> </li> <li> <p>
   * <code>ip-address</code>: The IP address of the next hop. For a Site-to-Site VPN
   * next hop, this is the outside IP address of the AWS side of the VPN tunnel. For
   * a Connect peer next hop, this is the core network BGP address of the Connect
   * peer. The value must be a single IPv4 or IPv6 address.</p> </li> </ul> <p>You
   * can specify up to 10 filter values in total across <code>NextHopFilters</code>
   * and the other match parameters in the request. Each filter value can be up to
   * 256 characters.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetNextHopFilters() const { return m_nextHopFilters; }
  inline bool NextHopFiltersHasBeenSet() const { return m_nextHopFiltersHasBeenSet; }
  template <typename NextHopFiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetNextHopFilters(NextHopFiltersT&& value) {
    m_nextHopFiltersHasBeenSet = true;
    m_nextHopFilters = std::forward<NextHopFiltersT>(value);
  }
  template <typename NextHopFiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  ListCoreNetworkRoutingInformationRequest& WithNextHopFilters(NextHopFiltersT&& value) {
    SetNextHopFilters(std::forward<NextHopFiltersT>(value));
    return *this;
  }
  template <typename NextHopFiltersKeyT = Aws::String, typename NextHopFiltersValueT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& AddNextHopFilters(NextHopFiltersKeyT&& key, NextHopFiltersValueT&& value) {
    m_nextHopFiltersHasBeenSet = true;
    m_nextHopFilters.emplace(std::forward<NextHopFiltersKeyT>(key), std::forward<NextHopFiltersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exact prefix values to match when filtering routing information.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExactPrefixMatches() const { return m_exactPrefixMatches; }
  inline bool ExactPrefixMatchesHasBeenSet() const { return m_exactPrefixMatchesHasBeenSet; }
  template <typename ExactPrefixMatchesT = Aws::Vector<Aws::String>>
  void SetExactPrefixMatches(ExactPrefixMatchesT&& value) {
    m_exactPrefixMatchesHasBeenSet = true;
    m_exactPrefixMatches = std::forward<ExactPrefixMatchesT>(value);
  }
  template <typename ExactPrefixMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithExactPrefixMatches(ExactPrefixMatchesT&& value) {
    SetExactPrefixMatches(std::forward<ExactPrefixMatchesT>(value));
    return *this;
  }
  template <typename ExactPrefixMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddExactPrefixMatches(ExactPrefixMatchesT&& value) {
    m_exactPrefixMatchesHasBeenSet = true;
    m_exactPrefixMatches.emplace_back(std::forward<ExactPrefixMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters routing information based on the longest prefix that matches each
   * provided IP address.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLongestPrefixMatches() const { return m_longestPrefixMatches; }
  inline bool LongestPrefixMatchesHasBeenSet() const { return m_longestPrefixMatchesHasBeenSet; }
  template <typename LongestPrefixMatchesT = Aws::Vector<Aws::String>>
  void SetLongestPrefixMatches(LongestPrefixMatchesT&& value) {
    m_longestPrefixMatchesHasBeenSet = true;
    m_longestPrefixMatches = std::forward<LongestPrefixMatchesT>(value);
  }
  template <typename LongestPrefixMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithLongestPrefixMatches(LongestPrefixMatchesT&& value) {
    SetLongestPrefixMatches(std::forward<LongestPrefixMatchesT>(value));
    return *this;
  }
  template <typename LongestPrefixMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddLongestPrefixMatches(LongestPrefixMatchesT&& value) {
    m_longestPrefixMatchesHasBeenSet = true;
    m_longestPrefixMatches.emplace_back(std::forward<LongestPrefixMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prefix values to filter routing information whose prefix is a subnet of the
   * prefixes provided.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetOfMatches() const { return m_subnetOfMatches; }
  inline bool SubnetOfMatchesHasBeenSet() const { return m_subnetOfMatchesHasBeenSet; }
  template <typename SubnetOfMatchesT = Aws::Vector<Aws::String>>
  void SetSubnetOfMatches(SubnetOfMatchesT&& value) {
    m_subnetOfMatchesHasBeenSet = true;
    m_subnetOfMatches = std::forward<SubnetOfMatchesT>(value);
  }
  template <typename SubnetOfMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithSubnetOfMatches(SubnetOfMatchesT&& value) {
    SetSubnetOfMatches(std::forward<SubnetOfMatchesT>(value));
    return *this;
  }
  template <typename SubnetOfMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddSubnetOfMatches(SubnetOfMatchesT&& value) {
    m_subnetOfMatchesHasBeenSet = true;
    m_subnetOfMatches.emplace_back(std::forward<SubnetOfMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prefix values to filter routing information whose prefix is a supernet of the
   * prefixes provided.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSupernetOfMatches() const { return m_supernetOfMatches; }
  inline bool SupernetOfMatchesHasBeenSet() const { return m_supernetOfMatchesHasBeenSet; }
  template <typename SupernetOfMatchesT = Aws::Vector<Aws::String>>
  void SetSupernetOfMatches(SupernetOfMatchesT&& value) {
    m_supernetOfMatchesHasBeenSet = true;
    m_supernetOfMatches = std::forward<SupernetOfMatchesT>(value);
  }
  template <typename SupernetOfMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithSupernetOfMatches(SupernetOfMatchesT&& value) {
    SetSupernetOfMatches(std::forward<SupernetOfMatchesT>(value));
    return *this;
  }
  template <typename SupernetOfMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddSupernetOfMatches(SupernetOfMatchesT&& value) {
    m_supernetOfMatchesHasBeenSet = true;
    m_supernetOfMatches.emplace_back(std::forward<SupernetOfMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Local preference values to match when filtering routing information.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLocalPreferenceMatches() const { return m_localPreferenceMatches; }
  inline bool LocalPreferenceMatchesHasBeenSet() const { return m_localPreferenceMatchesHasBeenSet; }
  template <typename LocalPreferenceMatchesT = Aws::Vector<Aws::String>>
  void SetLocalPreferenceMatches(LocalPreferenceMatchesT&& value) {
    m_localPreferenceMatchesHasBeenSet = true;
    m_localPreferenceMatches = std::forward<LocalPreferenceMatchesT>(value);
  }
  template <typename LocalPreferenceMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithLocalPreferenceMatches(LocalPreferenceMatchesT&& value) {
    SetLocalPreferenceMatches(std::forward<LocalPreferenceMatchesT>(value));
    return *this;
  }
  template <typename LocalPreferenceMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddLocalPreferenceMatches(LocalPreferenceMatchesT&& value) {
    m_localPreferenceMatchesHasBeenSet = true;
    m_localPreferenceMatches.emplace_back(std::forward<LocalPreferenceMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exact AS path values to match when filtering routing information.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExactAsPathMatches() const { return m_exactAsPathMatches; }
  inline bool ExactAsPathMatchesHasBeenSet() const { return m_exactAsPathMatchesHasBeenSet; }
  template <typename ExactAsPathMatchesT = Aws::Vector<Aws::String>>
  void SetExactAsPathMatches(ExactAsPathMatchesT&& value) {
    m_exactAsPathMatchesHasBeenSet = true;
    m_exactAsPathMatches = std::forward<ExactAsPathMatchesT>(value);
  }
  template <typename ExactAsPathMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithExactAsPathMatches(ExactAsPathMatchesT&& value) {
    SetExactAsPathMatches(std::forward<ExactAsPathMatchesT>(value));
    return *this;
  }
  template <typename ExactAsPathMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddExactAsPathMatches(ExactAsPathMatchesT&& value) {
    m_exactAsPathMatchesHasBeenSet = true;
    m_exactAsPathMatches.emplace_back(std::forward<ExactAsPathMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Multi-Exit Discriminator (MED) values to match when filtering routing
   * information.</p>
   */
  inline const Aws::Vector<Aws::String>& GetMedMatches() const { return m_medMatches; }
  inline bool MedMatchesHasBeenSet() const { return m_medMatchesHasBeenSet; }
  template <typename MedMatchesT = Aws::Vector<Aws::String>>
  void SetMedMatches(MedMatchesT&& value) {
    m_medMatchesHasBeenSet = true;
    m_medMatches = std::forward<MedMatchesT>(value);
  }
  template <typename MedMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithMedMatches(MedMatchesT&& value) {
    SetMedMatches(std::forward<MedMatchesT>(value));
    return *this;
  }
  template <typename MedMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddMedMatches(MedMatchesT&& value) {
    m_medMatchesHasBeenSet = true;
    m_medMatches.emplace_back(std::forward<MedMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>BGP community values to match when filtering routing information.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCommunityMatches() const { return m_communityMatches; }
  inline bool CommunityMatchesHasBeenSet() const { return m_communityMatchesHasBeenSet; }
  template <typename CommunityMatchesT = Aws::Vector<Aws::String>>
  void SetCommunityMatches(CommunityMatchesT&& value) {
    m_communityMatchesHasBeenSet = true;
    m_communityMatches = std::forward<CommunityMatchesT>(value);
  }
  template <typename CommunityMatchesT = Aws::Vector<Aws::String>>
  ListCoreNetworkRoutingInformationRequest& WithCommunityMatches(CommunityMatchesT&& value) {
    SetCommunityMatches(std::forward<CommunityMatchesT>(value));
    return *this;
  }
  template <typename CommunityMatchesT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& AddCommunityMatches(CommunityMatchesT&& value) {
    m_communityMatchesHasBeenSet = true;
    m_communityMatches.emplace_back(std::forward<CommunityMatchesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of routing information entries to return in a single
   * page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListCoreNetworkRoutingInformationRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCoreNetworkRoutingInformationRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkId;

  Aws::String m_segmentName;

  Aws::String m_edgeLocation;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_nextHopFilters;

  Aws::Vector<Aws::String> m_exactPrefixMatches;

  Aws::Vector<Aws::String> m_longestPrefixMatches;

  Aws::Vector<Aws::String> m_subnetOfMatches;

  Aws::Vector<Aws::String> m_supernetOfMatches;

  Aws::Vector<Aws::String> m_localPreferenceMatches;

  Aws::Vector<Aws::String> m_exactAsPathMatches;

  Aws::Vector<Aws::String> m_medMatches;

  Aws::Vector<Aws::String> m_communityMatches;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_coreNetworkIdHasBeenSet = false;
  bool m_segmentNameHasBeenSet = false;
  bool m_edgeLocationHasBeenSet = false;
  bool m_nextHopFiltersHasBeenSet = false;
  bool m_exactPrefixMatchesHasBeenSet = false;
  bool m_longestPrefixMatchesHasBeenSet = false;
  bool m_subnetOfMatchesHasBeenSet = false;
  bool m_supernetOfMatchesHasBeenSet = false;
  bool m_localPreferenceMatchesHasBeenSet = false;
  bool m_exactAsPathMatchesHasBeenSet = false;
  bool m_medMatchesHasBeenSet = false;
  bool m_communityMatchesHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
