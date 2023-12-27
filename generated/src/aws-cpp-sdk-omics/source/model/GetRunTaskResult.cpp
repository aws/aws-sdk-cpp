﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetRunTaskResult.h>
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

GetRunTaskResult::GetRunTaskResult() : 
    m_status(TaskStatus::NOT_SET),
    m_cpus(0),
    m_memory(0),
    m_gpus(0)
{
}

GetRunTaskResult::GetRunTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(TaskStatus::NOT_SET),
    m_cpus(0),
    m_memory(0),
    m_gpus(0)
{
  *this = result;
}

GetRunTaskResult& GetRunTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TaskStatusMapper::GetTaskStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("cpus"))
  {
    m_cpus = jsonValue.GetInteger("cpus");

  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

  }

  if(jsonValue.ValueExists("stopTime"))
  {
    m_stopTime = jsonValue.GetString("stopTime");

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("logStream"))
  {
    m_logStream = jsonValue.GetString("logStream");

  }

  if(jsonValue.ValueExists("gpus"))
  {
    m_gpus = jsonValue.GetInteger("gpus");

  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
