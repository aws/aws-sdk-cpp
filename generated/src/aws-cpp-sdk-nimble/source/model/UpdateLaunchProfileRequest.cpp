/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/UpdateLaunchProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLaunchProfileRequest::UpdateLaunchProfileRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_launchProfileProtocolVersionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_streamConfigurationHasBeenSet(false),
    m_studioComponentIdsHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String UpdateLaunchProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_launchProfileProtocolVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> launchProfileProtocolVersionsJsonList(m_launchProfileProtocolVersions.size());
   for(unsigned launchProfileProtocolVersionsIndex = 0; launchProfileProtocolVersionsIndex < launchProfileProtocolVersionsJsonList.GetLength(); ++launchProfileProtocolVersionsIndex)
   {
     launchProfileProtocolVersionsJsonList[launchProfileProtocolVersionsIndex].AsString(m_launchProfileProtocolVersions[launchProfileProtocolVersionsIndex]);
   }
   payload.WithArray("launchProfileProtocolVersions", std::move(launchProfileProtocolVersionsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_streamConfigurationHasBeenSet)
  {
   payload.WithObject("streamConfiguration", m_streamConfiguration.Jsonize());

  }

  if(m_studioComponentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> studioComponentIdsJsonList(m_studioComponentIds.size());
   for(unsigned studioComponentIdsIndex = 0; studioComponentIdsIndex < studioComponentIdsJsonList.GetLength(); ++studioComponentIdsIndex)
   {
     studioComponentIdsJsonList[studioComponentIdsIndex].AsString(m_studioComponentIds[studioComponentIdsIndex]);
   }
   payload.WithArray("studioComponentIds", std::move(studioComponentIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLaunchProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




