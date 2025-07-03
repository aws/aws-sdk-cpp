/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/CreateOriginEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOriginEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originEndpointNameHasBeenSet)
  {
   payload.WithString("OriginEndpointName", m_originEndpointName);

  }

  if(m_containerTypeHasBeenSet)
  {
   payload.WithString("ContainerType", ContainerTypeMapper::GetNameForContainerType(m_containerType));
  }

  if(m_segmentHasBeenSet)
  {
   payload.WithObject("Segment", m_segment.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_startoverWindowSecondsHasBeenSet)
  {
   payload.WithInteger("StartoverWindowSeconds", m_startoverWindowSeconds);

  }

  if(m_hlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hlsManifestsJsonList(m_hlsManifests.size());
   for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
   {
     hlsManifestsJsonList[hlsManifestsIndex].AsObject(m_hlsManifests[hlsManifestsIndex].Jsonize());
   }
   payload.WithArray("HlsManifests", std::move(hlsManifestsJsonList));

  }

  if(m_lowLatencyHlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lowLatencyHlsManifestsJsonList(m_lowLatencyHlsManifests.size());
   for(unsigned lowLatencyHlsManifestsIndex = 0; lowLatencyHlsManifestsIndex < lowLatencyHlsManifestsJsonList.GetLength(); ++lowLatencyHlsManifestsIndex)
   {
     lowLatencyHlsManifestsJsonList[lowLatencyHlsManifestsIndex].AsObject(m_lowLatencyHlsManifests[lowLatencyHlsManifestsIndex].Jsonize());
   }
   payload.WithArray("LowLatencyHlsManifests", std::move(lowLatencyHlsManifestsJsonList));

  }

  if(m_dashManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashManifestsJsonList(m_dashManifests.size());
   for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
   {
     dashManifestsJsonList[dashManifestsIndex].AsObject(m_dashManifests[dashManifestsIndex].Jsonize());
   }
   payload.WithArray("DashManifests", std::move(dashManifestsJsonList));

  }

  if(m_mssManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mssManifestsJsonList(m_mssManifests.size());
   for(unsigned mssManifestsIndex = 0; mssManifestsIndex < mssManifestsJsonList.GetLength(); ++mssManifestsIndex)
   {
     mssManifestsJsonList[mssManifestsIndex].AsObject(m_mssManifests[mssManifestsIndex].Jsonize());
   }
   payload.WithArray("MssManifests", std::move(mssManifestsJsonList));

  }

  if(m_forceEndpointErrorConfigurationHasBeenSet)
  {
   payload.WithObject("ForceEndpointErrorConfiguration", m_forceEndpointErrorConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOriginEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




