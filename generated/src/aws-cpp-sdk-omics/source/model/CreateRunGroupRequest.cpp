﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateRunGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRunGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_maxCpusHasBeenSet)
  {
   payload.WithInteger("maxCpus", m_maxCpus);

  }

  if(m_maxRunsHasBeenSet)
  {
   payload.WithInteger("maxRuns", m_maxRuns);

  }

  if(m_maxDurationHasBeenSet)
  {
   payload.WithInteger("maxDuration", m_maxDuration);

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

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_maxGpusHasBeenSet)
  {
   payload.WithInteger("maxGpus", m_maxGpus);

  }

  return payload.View().WriteReadable();
}




