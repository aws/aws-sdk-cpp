/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRunResult::GetRunResult() : 
    m_logLevel(RunLogLevel::NOT_SET),
    m_priority(0),
    m_status(RunStatus::NOT_SET),
    m_storageCapacity(0),
    m_workflowType(WorkflowType::NOT_SET)
{
}

GetRunResult::GetRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_logLevel(RunLogLevel::NOT_SET),
    m_priority(0),
    m_status(RunStatus::NOT_SET),
    m_storageCapacity(0),
    m_workflowType(WorkflowType::NOT_SET)
{
  *this = result;
}

GetRunResult& GetRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");

  }

  if(jsonValue.ValueExists("digest"))
  {
    m_digest = jsonValue.GetString("digest");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = RunLogLevelMapper::GetRunLogLevelForName(jsonValue.GetString("logLevel"));

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("outputUri"))
  {
    m_outputUri = jsonValue.GetString("outputUri");

  }

  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetObject("parameters");

  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

  }

  if(jsonValue.ValueExists("resourceDigests"))
  {
    Aws::Map<Aws::String, JsonView> resourceDigestsJsonMap = jsonValue.GetObject("resourceDigests").GetAllObjects();
    for(auto& resourceDigestsItem : resourceDigestsJsonMap)
    {
      m_resourceDigests[resourceDigestsItem.first] = resourceDigestsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("runGroupId"))
  {
    m_runGroupId = jsonValue.GetString("runGroupId");

  }

  if(jsonValue.ValueExists("runId"))
  {
    m_runId = jsonValue.GetString("runId");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

  }

  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RunStatusMapper::GetRunStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("stopTime"))
  {
    m_stopTime = jsonValue.GetString("stopTime");

  }

  if(jsonValue.ValueExists("storageCapacity"))
  {
    m_storageCapacity = jsonValue.GetInteger("storageCapacity");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

  }

  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("workflowType"));

  }



  return *this;
}
