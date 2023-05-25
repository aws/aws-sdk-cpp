/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DescribeSimulationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSimulationJobRequest::DescribeSimulationJobRequest() : 
    m_jobHasBeenSet(false)
{
}

Aws::String DescribeSimulationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobHasBeenSet)
  {
   payload.WithString("job", m_job);

  }

  return payload.View().WriteReadable();
}




