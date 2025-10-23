/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/CreateLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_peerGatewayIdHasBeenSet)
  {
   payload.WithString("peerGatewayId", m_peerGatewayId);

  }

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("attributes", m_attributes.Jsonize());

  }

  if(m_httpResponderAllowedHasBeenSet)
  {
   payload.WithBool("httpResponderAllowed", m_httpResponderAllowed);

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

  if(m_logSettingsHasBeenSet)
  {
   payload.WithObject("logSettings", m_logSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




