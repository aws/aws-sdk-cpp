/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/SignalApplicationInstanceNodeInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SignalApplicationInstanceNodeInstancesRequest::SignalApplicationInstanceNodeInstancesRequest() : 
    m_applicationInstanceIdHasBeenSet(false),
    m_nodeSignalsHasBeenSet(false)
{
}

Aws::String SignalApplicationInstanceNodeInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nodeSignalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeSignalsJsonList(m_nodeSignals.size());
   for(unsigned nodeSignalsIndex = 0; nodeSignalsIndex < nodeSignalsJsonList.GetLength(); ++nodeSignalsIndex)
   {
     nodeSignalsJsonList[nodeSignalsIndex].AsObject(m_nodeSignals[nodeSignalsIndex].Jsonize());
   }
   payload.WithArray("NodeSignals", std::move(nodeSignalsJsonList));

  }

  return payload.View().WriteReadable();
}




