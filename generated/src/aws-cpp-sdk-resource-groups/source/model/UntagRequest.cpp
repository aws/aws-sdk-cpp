/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/UntagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UntagRequest::UntagRequest() : 
    m_arnHasBeenSet(false),
    m_keysHasBeenSet(false)
{
}

Aws::String UntagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsString(m_keys[keysIndex]);
   }
   payload.WithArray("Keys", std::move(keysJsonList));

  }

  return payload.View().WriteReadable();
}




