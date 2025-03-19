/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/UpdateCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityIR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCaseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_reportedIncidentStartDateHasBeenSet)
  {
   payload.WithDouble("reportedIncidentStartDate", m_reportedIncidentStartDate.SecondsWithMSPrecision());
  }

  if(m_actualIncidentStartDateHasBeenSet)
  {
   payload.WithDouble("actualIncidentStartDate", m_actualIncidentStartDate.SecondsWithMSPrecision());
  }

  if(m_engagementTypeHasBeenSet)
  {
   payload.WithString("engagementType", EngagementTypeMapper::GetNameForEngagementType(m_engagementType));
  }

  if(m_watchersToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> watchersToAddJsonList(m_watchersToAdd.size());
   for(unsigned watchersToAddIndex = 0; watchersToAddIndex < watchersToAddJsonList.GetLength(); ++watchersToAddIndex)
   {
     watchersToAddJsonList[watchersToAddIndex].AsObject(m_watchersToAdd[watchersToAddIndex].Jsonize());
   }
   payload.WithArray("watchersToAdd", std::move(watchersToAddJsonList));

  }

  if(m_watchersToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> watchersToDeleteJsonList(m_watchersToDelete.size());
   for(unsigned watchersToDeleteIndex = 0; watchersToDeleteIndex < watchersToDeleteJsonList.GetLength(); ++watchersToDeleteIndex)
   {
     watchersToDeleteJsonList[watchersToDeleteIndex].AsObject(m_watchersToDelete[watchersToDeleteIndex].Jsonize());
   }
   payload.WithArray("watchersToDelete", std::move(watchersToDeleteJsonList));

  }

  if(m_threatActorIpAddressesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatActorIpAddressesToAddJsonList(m_threatActorIpAddressesToAdd.size());
   for(unsigned threatActorIpAddressesToAddIndex = 0; threatActorIpAddressesToAddIndex < threatActorIpAddressesToAddJsonList.GetLength(); ++threatActorIpAddressesToAddIndex)
   {
     threatActorIpAddressesToAddJsonList[threatActorIpAddressesToAddIndex].AsObject(m_threatActorIpAddressesToAdd[threatActorIpAddressesToAddIndex].Jsonize());
   }
   payload.WithArray("threatActorIpAddressesToAdd", std::move(threatActorIpAddressesToAddJsonList));

  }

  if(m_threatActorIpAddressesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> threatActorIpAddressesToDeleteJsonList(m_threatActorIpAddressesToDelete.size());
   for(unsigned threatActorIpAddressesToDeleteIndex = 0; threatActorIpAddressesToDeleteIndex < threatActorIpAddressesToDeleteJsonList.GetLength(); ++threatActorIpAddressesToDeleteIndex)
   {
     threatActorIpAddressesToDeleteJsonList[threatActorIpAddressesToDeleteIndex].AsObject(m_threatActorIpAddressesToDelete[threatActorIpAddressesToDeleteIndex].Jsonize());
   }
   payload.WithArray("threatActorIpAddressesToDelete", std::move(threatActorIpAddressesToDeleteJsonList));

  }

  if(m_impactedServicesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedServicesToAddJsonList(m_impactedServicesToAdd.size());
   for(unsigned impactedServicesToAddIndex = 0; impactedServicesToAddIndex < impactedServicesToAddJsonList.GetLength(); ++impactedServicesToAddIndex)
   {
     impactedServicesToAddJsonList[impactedServicesToAddIndex].AsString(m_impactedServicesToAdd[impactedServicesToAddIndex]);
   }
   payload.WithArray("impactedServicesToAdd", std::move(impactedServicesToAddJsonList));

  }

  if(m_impactedServicesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedServicesToDeleteJsonList(m_impactedServicesToDelete.size());
   for(unsigned impactedServicesToDeleteIndex = 0; impactedServicesToDeleteIndex < impactedServicesToDeleteJsonList.GetLength(); ++impactedServicesToDeleteIndex)
   {
     impactedServicesToDeleteJsonList[impactedServicesToDeleteIndex].AsString(m_impactedServicesToDelete[impactedServicesToDeleteIndex]);
   }
   payload.WithArray("impactedServicesToDelete", std::move(impactedServicesToDeleteJsonList));

  }

  if(m_impactedAwsRegionsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedAwsRegionsToAddJsonList(m_impactedAwsRegionsToAdd.size());
   for(unsigned impactedAwsRegionsToAddIndex = 0; impactedAwsRegionsToAddIndex < impactedAwsRegionsToAddJsonList.GetLength(); ++impactedAwsRegionsToAddIndex)
   {
     impactedAwsRegionsToAddJsonList[impactedAwsRegionsToAddIndex].AsObject(m_impactedAwsRegionsToAdd[impactedAwsRegionsToAddIndex].Jsonize());
   }
   payload.WithArray("impactedAwsRegionsToAdd", std::move(impactedAwsRegionsToAddJsonList));

  }

  if(m_impactedAwsRegionsToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedAwsRegionsToDeleteJsonList(m_impactedAwsRegionsToDelete.size());
   for(unsigned impactedAwsRegionsToDeleteIndex = 0; impactedAwsRegionsToDeleteIndex < impactedAwsRegionsToDeleteJsonList.GetLength(); ++impactedAwsRegionsToDeleteIndex)
   {
     impactedAwsRegionsToDeleteJsonList[impactedAwsRegionsToDeleteIndex].AsObject(m_impactedAwsRegionsToDelete[impactedAwsRegionsToDeleteIndex].Jsonize());
   }
   payload.WithArray("impactedAwsRegionsToDelete", std::move(impactedAwsRegionsToDeleteJsonList));

  }

  if(m_impactedAccountsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedAccountsToAddJsonList(m_impactedAccountsToAdd.size());
   for(unsigned impactedAccountsToAddIndex = 0; impactedAccountsToAddIndex < impactedAccountsToAddJsonList.GetLength(); ++impactedAccountsToAddIndex)
   {
     impactedAccountsToAddJsonList[impactedAccountsToAddIndex].AsString(m_impactedAccountsToAdd[impactedAccountsToAddIndex]);
   }
   payload.WithArray("impactedAccountsToAdd", std::move(impactedAccountsToAddJsonList));

  }

  if(m_impactedAccountsToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> impactedAccountsToDeleteJsonList(m_impactedAccountsToDelete.size());
   for(unsigned impactedAccountsToDeleteIndex = 0; impactedAccountsToDeleteIndex < impactedAccountsToDeleteJsonList.GetLength(); ++impactedAccountsToDeleteIndex)
   {
     impactedAccountsToDeleteJsonList[impactedAccountsToDeleteIndex].AsString(m_impactedAccountsToDelete[impactedAccountsToDeleteIndex]);
   }
   payload.WithArray("impactedAccountsToDelete", std::move(impactedAccountsToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}




