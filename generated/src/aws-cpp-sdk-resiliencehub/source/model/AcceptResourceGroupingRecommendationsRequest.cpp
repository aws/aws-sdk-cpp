﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AcceptResourceGroupingRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcceptResourceGroupingRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_entriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
   for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
   {
     entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
   }
   payload.WithArray("entries", std::move(entriesJsonList));

  }

  return payload.View().WriteReadable();
}




