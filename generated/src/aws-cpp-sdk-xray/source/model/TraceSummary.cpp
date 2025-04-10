﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TraceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

TraceSummary::TraceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TraceSummary& TraceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetDouble("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseTime"))
  {
    m_responseTime = jsonValue.GetDouble("ResponseTime");
    m_responseTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasFault"))
  {
    m_hasFault = jsonValue.GetBool("HasFault");
    m_hasFaultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasError"))
  {
    m_hasError = jsonValue.GetBool("HasError");
    m_hasErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasThrottle"))
  {
    m_hasThrottle = jsonValue.GetBool("HasThrottle");
    m_hasThrottleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsPartial"))
  {
    m_isPartial = jsonValue.GetBool("IsPartial");
    m_isPartialHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Http"))
  {
    m_http = jsonValue.GetObject("Http");
    m_httpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Annotations"))
  {
    Aws::Map<Aws::String, JsonView> annotationsJsonMap = jsonValue.GetObject("Annotations").GetAllObjects();
    for(auto& annotationsItem : annotationsJsonMap)
    {
      Aws::Utils::Array<JsonView> valuesWithServiceIdsJsonList = annotationsItem.second.AsArray();
      Aws::Vector<ValueWithServiceIds> valuesWithServiceIdsList;
      valuesWithServiceIdsList.reserve((size_t)valuesWithServiceIdsJsonList.GetLength());
      for(unsigned valuesWithServiceIdsIndex = 0; valuesWithServiceIdsIndex < valuesWithServiceIdsJsonList.GetLength(); ++valuesWithServiceIdsIndex)
      {
        valuesWithServiceIdsList.push_back(valuesWithServiceIdsJsonList[valuesWithServiceIdsIndex].AsObject());
      }
      m_annotations[annotationsItem.first] = std::move(valuesWithServiceIdsList);
    }
    m_annotationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Users"))
  {
    Aws::Utils::Array<JsonView> usersJsonList = jsonValue.GetArray("Users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
    m_usersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceIds"))
  {
    Aws::Utils::Array<JsonView> serviceIdsJsonList = jsonValue.GetArray("ServiceIds");
    for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
    {
      m_serviceIds.push_back(serviceIdsJsonList[serviceIdsIndex].AsObject());
    }
    m_serviceIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceARNs"))
  {
    Aws::Utils::Array<JsonView> resourceARNsJsonList = jsonValue.GetArray("ResourceARNs");
    for(unsigned resourceARNsIndex = 0; resourceARNsIndex < resourceARNsJsonList.GetLength(); ++resourceARNsIndex)
    {
      m_resourceARNs.push_back(resourceARNsJsonList[resourceARNsIndex].AsObject());
    }
    m_resourceARNsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceIds"))
  {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("InstanceIds");
    for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
    {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsObject());
    }
    m_instanceIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsObject());
    }
    m_availabilityZonesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EntryPoint"))
  {
    m_entryPoint = jsonValue.GetObject("EntryPoint");
    m_entryPointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FaultRootCauses"))
  {
    Aws::Utils::Array<JsonView> faultRootCausesJsonList = jsonValue.GetArray("FaultRootCauses");
    for(unsigned faultRootCausesIndex = 0; faultRootCausesIndex < faultRootCausesJsonList.GetLength(); ++faultRootCausesIndex)
    {
      m_faultRootCauses.push_back(faultRootCausesJsonList[faultRootCausesIndex].AsObject());
    }
    m_faultRootCausesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorRootCauses"))
  {
    Aws::Utils::Array<JsonView> errorRootCausesJsonList = jsonValue.GetArray("ErrorRootCauses");
    for(unsigned errorRootCausesIndex = 0; errorRootCausesIndex < errorRootCausesJsonList.GetLength(); ++errorRootCausesIndex)
    {
      m_errorRootCauses.push_back(errorRootCausesJsonList[errorRootCausesIndex].AsObject());
    }
    m_errorRootCausesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseTimeRootCauses"))
  {
    Aws::Utils::Array<JsonView> responseTimeRootCausesJsonList = jsonValue.GetArray("ResponseTimeRootCauses");
    for(unsigned responseTimeRootCausesIndex = 0; responseTimeRootCausesIndex < responseTimeRootCausesJsonList.GetLength(); ++responseTimeRootCausesIndex)
    {
      m_responseTimeRootCauses.push_back(responseTimeRootCausesJsonList[responseTimeRootCausesIndex].AsObject());
    }
    m_responseTimeRootCausesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Revision"))
  {
    m_revision = jsonValue.GetInteger("Revision");
    m_revisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchedEventTime"))
  {
    m_matchedEventTime = jsonValue.GetDouble("MatchedEventTime");
    m_matchedEventTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TraceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_durationHasBeenSet)
  {
   payload.WithDouble("Duration", m_duration);

  }

  if(m_responseTimeHasBeenSet)
  {
   payload.WithDouble("ResponseTime", m_responseTime);

  }

  if(m_hasFaultHasBeenSet)
  {
   payload.WithBool("HasFault", m_hasFault);

  }

  if(m_hasErrorHasBeenSet)
  {
   payload.WithBool("HasError", m_hasError);

  }

  if(m_hasThrottleHasBeenSet)
  {
   payload.WithBool("HasThrottle", m_hasThrottle);

  }

  if(m_isPartialHasBeenSet)
  {
   payload.WithBool("IsPartial", m_isPartial);

  }

  if(m_httpHasBeenSet)
  {
   payload.WithObject("Http", m_http.Jsonize());

  }

  if(m_annotationsHasBeenSet)
  {
   JsonValue annotationsJsonMap;
   for(auto& annotationsItem : m_annotations)
   {
     Aws::Utils::Array<JsonValue> valuesWithServiceIdsJsonList(annotationsItem.second.size());
     for(unsigned valuesWithServiceIdsIndex = 0; valuesWithServiceIdsIndex < valuesWithServiceIdsJsonList.GetLength(); ++valuesWithServiceIdsIndex)
     {
       valuesWithServiceIdsJsonList[valuesWithServiceIdsIndex].AsObject(annotationsItem.second[valuesWithServiceIdsIndex].Jsonize());
     }
     annotationsJsonMap.WithArray(annotationsItem.first, std::move(valuesWithServiceIdsJsonList));
   }
   payload.WithObject("Annotations", std::move(annotationsJsonMap));

  }

  if(m_usersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
   for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
   {
     usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
   }
   payload.WithArray("Users", std::move(usersJsonList));

  }

  if(m_serviceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceIdsJsonList(m_serviceIds.size());
   for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
   {
     serviceIdsJsonList[serviceIdsIndex].AsObject(m_serviceIds[serviceIdsIndex].Jsonize());
   }
   payload.WithArray("ServiceIds", std::move(serviceIdsJsonList));

  }

  if(m_resourceARNsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceARNsJsonList(m_resourceARNs.size());
   for(unsigned resourceARNsIndex = 0; resourceARNsIndex < resourceARNsJsonList.GetLength(); ++resourceARNsIndex)
   {
     resourceARNsJsonList[resourceARNsIndex].AsObject(m_resourceARNs[resourceARNsIndex].Jsonize());
   }
   payload.WithArray("ResourceARNs", std::move(resourceARNsJsonList));

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsObject(m_instanceIds[instanceIdsIndex].Jsonize());
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsObject(m_availabilityZones[availabilityZonesIndex].Jsonize());
   }
   payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_entryPointHasBeenSet)
  {
   payload.WithObject("EntryPoint", m_entryPoint.Jsonize());

  }

  if(m_faultRootCausesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> faultRootCausesJsonList(m_faultRootCauses.size());
   for(unsigned faultRootCausesIndex = 0; faultRootCausesIndex < faultRootCausesJsonList.GetLength(); ++faultRootCausesIndex)
   {
     faultRootCausesJsonList[faultRootCausesIndex].AsObject(m_faultRootCauses[faultRootCausesIndex].Jsonize());
   }
   payload.WithArray("FaultRootCauses", std::move(faultRootCausesJsonList));

  }

  if(m_errorRootCausesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorRootCausesJsonList(m_errorRootCauses.size());
   for(unsigned errorRootCausesIndex = 0; errorRootCausesIndex < errorRootCausesJsonList.GetLength(); ++errorRootCausesIndex)
   {
     errorRootCausesJsonList[errorRootCausesIndex].AsObject(m_errorRootCauses[errorRootCausesIndex].Jsonize());
   }
   payload.WithArray("ErrorRootCauses", std::move(errorRootCausesJsonList));

  }

  if(m_responseTimeRootCausesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> responseTimeRootCausesJsonList(m_responseTimeRootCauses.size());
   for(unsigned responseTimeRootCausesIndex = 0; responseTimeRootCausesIndex < responseTimeRootCausesJsonList.GetLength(); ++responseTimeRootCausesIndex)
   {
     responseTimeRootCausesJsonList[responseTimeRootCausesIndex].AsObject(m_responseTimeRootCauses[responseTimeRootCausesIndex].Jsonize());
   }
   payload.WithArray("ResponseTimeRootCauses", std::move(responseTimeRootCausesJsonList));

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInteger("Revision", m_revision);

  }

  if(m_matchedEventTimeHasBeenSet)
  {
   payload.WithDouble("MatchedEventTime", m_matchedEventTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
