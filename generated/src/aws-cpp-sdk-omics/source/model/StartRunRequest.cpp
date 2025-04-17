/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StartRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("workflowId", m_workflowId);

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithString("workflowType", WorkflowTypeMapper::GetNameForWorkflowType(m_workflowType));
  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("runId", m_runId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_cacheIdHasBeenSet)
  {
   payload.WithString("cacheId", m_cacheId);

  }

  if(m_cacheBehaviorHasBeenSet)
  {
   payload.WithString("cacheBehavior", CacheBehaviorMapper::GetNameForCacheBehavior(m_cacheBehavior));
  }

  if(m_runGroupIdHasBeenSet)
  {
   payload.WithString("runGroupId", m_runGroupId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_parametersHasBeenSet)
  {
    if(!m_parameters.View().IsNull())
    {
       payload.WithObject("parameters", JsonValue(m_parameters.View()));
    }
  }

  if(m_storageCapacityHasBeenSet)
  {
   payload.WithInteger("storageCapacity", m_storageCapacity);

  }

  if(m_outputUriHasBeenSet)
  {
   payload.WithString("outputUri", m_outputUri);

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", RunLogLevelMapper::GetNameForRunLogLevel(m_logLevel));
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

  if(m_retentionModeHasBeenSet)
  {
   payload.WithString("retentionMode", RunRetentionModeMapper::GetNameForRunRetentionMode(m_retentionMode));
  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if(m_workflowOwnerIdHasBeenSet)
  {
   payload.WithString("workflowOwnerId", m_workflowOwnerId);

  }

  if(m_workflowVersionNameHasBeenSet)
  {
   payload.WithString("workflowVersionName", m_workflowVersionName);

  }

  return payload.View().WriteReadable();
}




