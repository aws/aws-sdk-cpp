/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/UpdateOriginEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOriginEndpointRequest::UpdateOriginEndpointRequest() : 
    m_channelGroupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_originEndpointNameHasBeenSet(false),
    m_containerType(ContainerType::NOT_SET),
    m_containerTypeHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startoverWindowSeconds(0),
    m_startoverWindowSecondsHasBeenSet(false),
    m_hlsManifestsHasBeenSet(false),
    m_lowLatencyHlsManifestsHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
}

Aws::String UpdateOriginEndpointRequest::SerializePayload() const
{
  JsonValue payload;

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOriginEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_eTagHasBeenSet)
  {
    ss << m_eTag;
    headers.emplace("x-amzn-update-if-match",  ss.str());
    ss.str("");
  }

  return headers;

}




