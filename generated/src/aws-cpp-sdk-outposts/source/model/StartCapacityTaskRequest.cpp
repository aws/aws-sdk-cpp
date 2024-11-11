/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/StartCapacityTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartCapacityTaskRequest::StartCapacityTaskRequest() : 
    m_outpostIdentifierHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_instancePoolsHasBeenSet(false),
    m_instancesToExcludeHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_taskActionOnBlockingInstances(TaskActionOnBlockingInstances::NOT_SET),
    m_taskActionOnBlockingInstancesHasBeenSet(false)
{
}

Aws::String StartCapacityTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_orderIdHasBeenSet)
  {
   payload.WithString("OrderId", m_orderId);

  }

  if(m_instancePoolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancePoolsJsonList(m_instancePools.size());
   for(unsigned instancePoolsIndex = 0; instancePoolsIndex < instancePoolsJsonList.GetLength(); ++instancePoolsIndex)
   {
     instancePoolsJsonList[instancePoolsIndex].AsObject(m_instancePools[instancePoolsIndex].Jsonize());
   }
   payload.WithArray("InstancePools", std::move(instancePoolsJsonList));

  }

  if(m_instancesToExcludeHasBeenSet)
  {
   payload.WithObject("InstancesToExclude", m_instancesToExclude.Jsonize());

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_taskActionOnBlockingInstancesHasBeenSet)
  {
   payload.WithString("TaskActionOnBlockingInstances", TaskActionOnBlockingInstancesMapper::GetNameForTaskActionOnBlockingInstances(m_taskActionOnBlockingInstances));
  }

  return payload.View().WriteReadable();
}




