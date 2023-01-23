/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CancelSimulationJobBatchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelSimulationJobBatchRequest::CancelSimulationJobBatchRequest() : 
    m_batchHasBeenSet(false)
{
}

Aws::String CancelSimulationJobBatchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_batchHasBeenSet)
  {
   payload.WithString("batch", m_batch);

  }

  return payload.View().WriteReadable();
}




