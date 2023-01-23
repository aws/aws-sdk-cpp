/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetNetworkRoutesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNetworkRoutesRequest::GetNetworkRoutesRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_routeTableIdentifierHasBeenSet(false),
    m_exactCidrMatchesHasBeenSet(false),
    m_longestPrefixMatchesHasBeenSet(false),
    m_subnetOfMatchesHasBeenSet(false),
    m_supernetOfMatchesHasBeenSet(false),
    m_prefixListIdsHasBeenSet(false),
    m_statesHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_destinationFiltersHasBeenSet(false)
{
}

Aws::String GetNetworkRoutesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_routeTableIdentifierHasBeenSet)
  {
   payload.WithObject("RouteTableIdentifier", m_routeTableIdentifier.Jsonize());

  }

  if(m_exactCidrMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exactCidrMatchesJsonList(m_exactCidrMatches.size());
   for(unsigned exactCidrMatchesIndex = 0; exactCidrMatchesIndex < exactCidrMatchesJsonList.GetLength(); ++exactCidrMatchesIndex)
   {
     exactCidrMatchesJsonList[exactCidrMatchesIndex].AsString(m_exactCidrMatches[exactCidrMatchesIndex]);
   }
   payload.WithArray("ExactCidrMatches", std::move(exactCidrMatchesJsonList));

  }

  if(m_longestPrefixMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> longestPrefixMatchesJsonList(m_longestPrefixMatches.size());
   for(unsigned longestPrefixMatchesIndex = 0; longestPrefixMatchesIndex < longestPrefixMatchesJsonList.GetLength(); ++longestPrefixMatchesIndex)
   {
     longestPrefixMatchesJsonList[longestPrefixMatchesIndex].AsString(m_longestPrefixMatches[longestPrefixMatchesIndex]);
   }
   payload.WithArray("LongestPrefixMatches", std::move(longestPrefixMatchesJsonList));

  }

  if(m_subnetOfMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetOfMatchesJsonList(m_subnetOfMatches.size());
   for(unsigned subnetOfMatchesIndex = 0; subnetOfMatchesIndex < subnetOfMatchesJsonList.GetLength(); ++subnetOfMatchesIndex)
   {
     subnetOfMatchesJsonList[subnetOfMatchesIndex].AsString(m_subnetOfMatches[subnetOfMatchesIndex]);
   }
   payload.WithArray("SubnetOfMatches", std::move(subnetOfMatchesJsonList));

  }

  if(m_supernetOfMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supernetOfMatchesJsonList(m_supernetOfMatches.size());
   for(unsigned supernetOfMatchesIndex = 0; supernetOfMatchesIndex < supernetOfMatchesJsonList.GetLength(); ++supernetOfMatchesIndex)
   {
     supernetOfMatchesJsonList[supernetOfMatchesIndex].AsString(m_supernetOfMatches[supernetOfMatchesIndex]);
   }
   payload.WithArray("SupernetOfMatches", std::move(supernetOfMatchesJsonList));

  }

  if(m_prefixListIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> prefixListIdsJsonList(m_prefixListIds.size());
   for(unsigned prefixListIdsIndex = 0; prefixListIdsIndex < prefixListIdsJsonList.GetLength(); ++prefixListIdsIndex)
   {
     prefixListIdsJsonList[prefixListIdsIndex].AsString(m_prefixListIds[prefixListIdsIndex]);
   }
   payload.WithArray("PrefixListIds", std::move(prefixListIdsJsonList));

  }

  if(m_statesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statesJsonList(m_states.size());
   for(unsigned statesIndex = 0; statesIndex < statesJsonList.GetLength(); ++statesIndex)
   {
     statesJsonList[statesIndex].AsString(RouteStateMapper::GetNameForRouteState(m_states[statesIndex]));
   }
   payload.WithArray("States", std::move(statesJsonList));

  }

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(RouteTypeMapper::GetNameForRouteType(m_types[typesIndex]));
   }
   payload.WithArray("Types", std::move(typesJsonList));

  }

  if(m_destinationFiltersHasBeenSet)
  {
   JsonValue destinationFiltersJsonMap;
   for(auto& destinationFiltersItem : m_destinationFilters)
   {
     Aws::Utils::Array<JsonValue> filterValuesJsonList(destinationFiltersItem.second.size());
     for(unsigned filterValuesIndex = 0; filterValuesIndex < filterValuesJsonList.GetLength(); ++filterValuesIndex)
     {
       filterValuesJsonList[filterValuesIndex].AsString(destinationFiltersItem.second[filterValuesIndex]);
     }
     destinationFiltersJsonMap.WithArray(destinationFiltersItem.first, std::move(filterValuesJsonList));
   }
   payload.WithObject("DestinationFilters", std::move(destinationFiltersJsonMap));

  }

  return payload.View().WriteReadable();
}




