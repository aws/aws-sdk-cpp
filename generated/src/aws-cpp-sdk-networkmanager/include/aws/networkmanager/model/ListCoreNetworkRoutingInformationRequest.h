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
   * <p>Filters to apply based on next hop information.</p>
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
  bool m_coreNetworkIdHasBeenSet = false;

  Aws::String m_segmentName;
  bool m_segmentNameHasBeenSet = false;

  Aws::String m_edgeLocation;
  bool m_edgeLocationHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_nextHopFilters;
  bool m_nextHopFiltersHasBeenSet = false;

  Aws::Vector<Aws::String> m_localPreferenceMatches;
  bool m_localPreferenceMatchesHasBeenSet = false;

  Aws::Vector<Aws::String> m_exactAsPathMatches;
  bool m_exactAsPathMatchesHasBeenSet = false;

  Aws::Vector<Aws::String> m_medMatches;
  bool m_medMatchesHasBeenSet = false;

  Aws::Vector<Aws::String> m_communityMatches;
  bool m_communityMatchesHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
