/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CreateCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_resolverTypeHasBeenSet)
  {
   payload.WithString("resolverType", ResolverTypeMapper::GetNameForResolverType(m_resolverType));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_engagementTypeHasBeenSet)
  {
   payload.WithString("engagementType", EngagementTypeMapper::GetNameForEngagementType(m_engagementType));
  }

  if(m_reportedIncidentStartDateHasBeenSet)
  {
   payload.WithDouble("reportedIncidentStartDate", m_reportedIncidentStartDate.SecondsWithMSPrecision());
  }

  if(m_impactedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedAccountsJsonList(m_impactedAccounts.size());
   for(unsigned impactedAccountsIndex = 0; impactedAccountsIndex < impactedAccountsJsonList.GetLength(); ++impactedAccountsIndex)
   {
     impactedAccountsJsonList[impactedAccountsIndex].AsString(m_impactedAccounts[impactedAccountsIndex]);
   }
   payload.WithArray("impactedAccounts", std::move(impactedAccountsJsonList));

  }

  if(m_watchersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> watchersJsonList(m_watchers.size());
   for(unsigned watchersIndex = 0; watchersIndex < watchersJsonList.GetLength(); ++watchersIndex)
   {
     watchersJsonList[watchersIndex].AsObject(m_watchers[watchersIndex].Jsonize());
   }
   payload.WithArray("watchers", std::move(watchersJsonList));

  }

  if(m_threatActorIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatActorIpAddressesJsonList(m_threatActorIpAddresses.size());
   for(unsigned threatActorIpAddressesIndex = 0; threatActorIpAddressesIndex < threatActorIpAddressesJsonList.GetLength(); ++threatActorIpAddressesIndex)
   {
     threatActorIpAddressesJsonList[threatActorIpAddressesIndex].AsObject(m_threatActorIpAddresses[threatActorIpAddressesIndex].Jsonize());
   }
   payload.WithArray("threatActorIpAddresses", std::move(threatActorIpAddressesJsonList));

  }

  if(m_impactedServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedServicesJsonList(m_impactedServices.size());
   for(unsigned impactedServicesIndex = 0; impactedServicesIndex < impactedServicesJsonList.GetLength(); ++impactedServicesIndex)
   {
     impactedServicesJsonList[impactedServicesIndex].AsString(m_impactedServices[impactedServicesIndex]);
   }
   payload.WithArray("impactedServices", std::move(impactedServicesJsonList));

  }

  if(m_impactedAwsRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedAwsRegionsJsonList(m_impactedAwsRegions.size());
   for(unsigned impactedAwsRegionsIndex = 0; impactedAwsRegionsIndex < impactedAwsRegionsJsonList.GetLength(); ++impactedAwsRegionsIndex)
   {
     impactedAwsRegionsJsonList[impactedAwsRegionsIndex].AsObject(m_impactedAwsRegions[impactedAwsRegionsIndex].Jsonize());
   }
   payload.WithArray("impactedAwsRegions", std::move(impactedAwsRegionsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




