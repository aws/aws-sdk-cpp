/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/BatchDescribeSimulationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDescribeSimulationJobRequest::BatchDescribeSimulationJobRequest() : 
    m_jobsHasBeenSet(false)
{
}

Aws::String BatchDescribeSimulationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobsJsonList(m_jobs.size());
   for(unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex)
   {
     jobsJsonList[jobsIndex].AsString(m_jobs[jobsIndex]);
   }
   payload.WithArray("jobs", std::move(jobsJsonList));

  }

  return payload.View().WriteReadable();
}




