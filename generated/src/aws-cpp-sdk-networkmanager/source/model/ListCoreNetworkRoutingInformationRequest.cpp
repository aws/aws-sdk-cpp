/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/ListCoreNetworkRoutingInformationRequest.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListCoreNetworkRoutingInformationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_segmentNameHasBeenSet) {
    payload.WithString("SegmentName", m_segmentName);
  }

  if (m_edgeLocationHasBeenSet) {
    payload.WithString("EdgeLocation", m_edgeLocation);
  }

  if (m_nextHopFiltersHasBeenSet) {
    JsonValue nextHopFiltersJsonMap;
    for (auto& nextHopFiltersItem : m_nextHopFilters) {
      Aws::Utils::Array<JsonValue> filterValuesJsonList(nextHopFiltersItem.second.size());
      for (unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex) {
        filterValuesJsonList[filterValuesIndex].AsString(nextHopFiltersItem.second[filterValuesIndex]);
      }
      nextHopFiltersJsonMap.WithArray(nextHopFiltersItem.first, std::move(filterValuesJsonList));
    }
    payload.WithObject("NextHopFilters", std::move(nextHopFiltersJsonMap));
  }

  if (m_localPreferenceMatchesHasBeenSet) {
    Aws::Utils::Array<JsonValue> localPreferenceMatchesJsonList(m_localPreferenceMatches.size());
    for (unsigned localPreferenceMatchesIndex = 0; localPreferenceMatchesIndex < localPreferenceMatchesJsonList.GetLength();
         ++localPreferenceMatchesIndex) {
      localPreferenceMatchesJsonList[localPreferenceMatchesIndex].AsString(m_localPreferenceMatches[localPreferenceMatchesIndex]);
    }
    payload.WithArray("LocalPreferenceMatches", std::move(localPreferenceMatchesJsonList));
  }

  if (m_exactAsPathMatchesHasBeenSet) {
    Aws::Utils::Array<JsonValue> exactAsPathMatchesJsonList(m_exactAsPathMatches.size());
    for (unsigned exactAsPathMatchesIndex = 0; exactAsPathMatchesIndex < exactAsPathMatchesJsonList.GetLength();
         ++exactAsPathMatchesIndex) {
      exactAsPathMatchesJsonList[exactAsPathMatchesIndex].AsString(m_exactAsPathMatches[exactAsPathMatchesIndex]);
    }
    payload.WithArray("ExactAsPathMatches", std::move(exactAsPathMatchesJsonList));
  }

  if (m_medMatchesHasBeenSet) {
    Aws::Utils::Array<JsonValue> medMatchesJsonList(m_medMatches.size());
    for (unsigned medMatchesIndex = 0; medMatchesIndex < medMatchesJsonList.GetLength(); ++medMatchesIndex) {
      medMatchesJsonList[medMatchesIndex].AsString(m_medMatches[medMatchesIndex]);
    }
    payload.WithArray("MedMatches", std::move(medMatchesJsonList));
  }

  if (m_communityMatchesHasBeenSet) {
    Aws::Utils::Array<JsonValue> communityMatchesJsonList(m_communityMatches.size());
    for (unsigned communityMatchesIndex = 0; communityMatchesIndex < communityMatchesJsonList.GetLength(); ++communityMatchesIndex) {
      communityMatchesJsonList[communityMatchesIndex].AsString(m_communityMatches[communityMatchesIndex]);
    }
    payload.WithArray("CommunityMatches", std::move(communityMatchesJsonList));
  }

  return payload.View().WriteReadable();
}

void ListCoreNetworkRoutingInformationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }
}
