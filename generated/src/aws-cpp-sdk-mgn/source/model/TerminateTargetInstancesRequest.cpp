/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/TerminateTargetInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TerminateTargetInstancesRequest::TerminateTargetInstancesRequest() : 
    m_sourceServerIDsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String TerminateTargetInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceServerIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceServerIDsJsonList(m_sourceServerIDs.size());
   for(unsigned sourceServerIDsIndex = 0; sourceServerIDsIndex < sourceServerIDsJsonList.GetLength(); ++sourceServerIDsIndex)
   {
     sourceServerIDsJsonList[sourceServerIDsIndex].AsString(m_sourceServerIDs[sourceServerIDsIndex]);
   }
   payload.WithArray("sourceServerIDs", std::move(sourceServerIDsJsonList));

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




