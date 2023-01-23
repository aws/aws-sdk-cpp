/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/CreateFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFlowRequest::CreateFlowRequest() : 
    m_availabilityZoneHasBeenSet(false),
    m_entitlementsHasBeenSet(false),
    m_mediaStreamsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceFailoverConfigHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_vpcInterfacesHasBeenSet(false),
    m_maintenanceHasBeenSet(false)
{
}

Aws::String CreateFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_entitlementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitlementsJsonList(m_entitlements.size());
   for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
   {
     entitlementsJsonList[entitlementsIndex].AsObject(m_entitlements[entitlementsIndex].Jsonize());
   }
   payload.WithArray("entitlements", std::move(entitlementsJsonList));

  }

  if(m_mediaStreamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaStreamsJsonList(m_mediaStreams.size());
   for(unsigned mediaStreamsIndex = 0; mediaStreamsIndex < mediaStreamsJsonList.GetLength(); ++mediaStreamsIndex)
   {
     mediaStreamsJsonList[mediaStreamsIndex].AsObject(m_mediaStreams[mediaStreamsIndex].Jsonize());
   }
   payload.WithArray("mediaStreams", std::move(mediaStreamsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_sourceFailoverConfigHasBeenSet)
  {
   payload.WithObject("sourceFailoverConfig", m_sourceFailoverConfig.Jsonize());

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_vpcInterfacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcInterfacesJsonList(m_vpcInterfaces.size());
   for(unsigned vpcInterfacesIndex = 0; vpcInterfacesIndex < vpcInterfacesJsonList.GetLength(); ++vpcInterfacesIndex)
   {
     vpcInterfacesJsonList[vpcInterfacesIndex].AsObject(m_vpcInterfaces[vpcInterfacesIndex].Jsonize());
   }
   payload.WithArray("vpcInterfaces", std::move(vpcInterfacesJsonList));

  }

  if(m_maintenanceHasBeenSet)
  {
   payload.WithObject("maintenance", m_maintenance.Jsonize());

  }

  return payload.View().WriteReadable();
}




