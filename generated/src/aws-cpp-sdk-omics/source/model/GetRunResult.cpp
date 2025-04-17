/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRunResult::GetRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRunResult& GetRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheId"))
  {
    m_cacheId = jsonValue.GetString("cacheId");
    m_cacheIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheBehavior"))
  {
    m_cacheBehavior = CacheBehaviorMapper::GetCacheBehaviorForName(jsonValue.GetString("cacheBehavior"));
    m_cacheBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = RunStatusMapper::GetRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");
    m_workflowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("workflowType"));
    m_workflowTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runId"))
  {
    m_runId = jsonValue.GetString("runId");
    m_runIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runGroupId"))
  {
    m_runGroupId = jsonValue.GetString("runGroupId");
    m_runGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");
    m_priorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("digest"))
  {
    m_digest = jsonValue.GetString("digest");
    m_digestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetObject("parameters");
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCapacity"))
  {
    m_storageCapacity = jsonValue.GetInteger("storageCapacity");
    m_storageCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputUri"))
  {
    m_outputUri = jsonValue.GetString("outputUri");
    m_outputUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = RunLogLevelMapper::GetRunLogLevelForName(jsonValue.GetString("logLevel"));
    m_logLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceDigests"))
  {
    Aws::Map<Aws::String, JsonView> resourceDigestsJsonMap = jsonValue.GetObject("resourceDigests").GetAllObjects();
    for(auto& resourceDigestsItem : resourceDigestsJsonMap)
    {
      m_resourceDigests[resourceDigestsItem.first] = resourceDigestsItem.second.AsString();
    }
    m_resourceDigestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");
    m_startedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stopTime"))
  {
    m_stopTime = jsonValue.GetString("stopTime");
    m_stopTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accelerators"))
  {
    m_accelerators = AcceleratorsMapper::GetAcceleratorsForName(jsonValue.GetString("accelerators"));
    m_acceleratorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("retentionMode"))
  {
    m_retentionMode = RunRetentionModeMapper::GetRunRetentionModeForName(jsonValue.GetString("retentionMode"));
    m_retentionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logLocation"))
  {
    m_logLocation = jsonValue.GetObject("logLocation");
    m_logLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uuid"))
  {
    m_uuid = jsonValue.GetString("uuid");
    m_uuidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runOutputUri"))
  {
    m_runOutputUri = jsonValue.GetString("runOutputUri");
    m_runOutputUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowOwnerId"))
  {
    m_workflowOwnerId = jsonValue.GetString("workflowOwnerId");
    m_workflowOwnerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowVersionName"))
  {
    m_workflowVersionName = jsonValue.GetString("workflowVersionName");
    m_workflowVersionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowUuid"))
  {
    m_workflowUuid = jsonValue.GetString("workflowUuid");
    m_workflowUuidHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
