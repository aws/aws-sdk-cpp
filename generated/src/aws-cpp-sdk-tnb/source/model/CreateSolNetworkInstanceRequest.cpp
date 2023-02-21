/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/CreateSolNetworkInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSolNetworkInstanceRequest::CreateSolNetworkInstanceRequest() : 
    m_nsDescriptionHasBeenSet(false),
    m_nsNameHasBeenSet(false),
    m_nsdInfoIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSolNetworkInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nsDescriptionHasBeenSet)
  {
   payload.WithString("nsDescription", m_nsDescription);

  }

  if(m_nsNameHasBeenSet)
  {
   payload.WithString("nsName", m_nsName);

  }

  if(m_nsdInfoIdHasBeenSet)
  {
   payload.WithString("nsdInfoId", m_nsdInfoId);

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




