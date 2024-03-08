/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GetImportTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportTaskResult::GetImportTaskResult() : 
    m_format(Format::NOT_SET),
    m_status(ImportTaskStatus::NOT_SET),
    m_attemptNumber(0)
{
}

GetImportTaskResult::GetImportTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(Format::NOT_SET),
    m_status(ImportTaskStatus::NOT_SET),
    m_attemptNumber(0)
{
  *this = result;
}

GetImportTaskResult& GetImportTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("graphId"))
  {
    m_graphId = jsonValue.GetString("graphId");

  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ImportTaskStatusMapper::GetImportTaskStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("importOptions"))
  {
    m_importOptions = jsonValue.GetObject("importOptions");

  }

  if(jsonValue.ValueExists("importTaskDetails"))
  {
    m_importTaskDetails = jsonValue.GetObject("importTaskDetails");

  }

  if(jsonValue.ValueExists("attemptNumber"))
  {
    m_attemptNumber = jsonValue.GetInteger("attemptNumber");

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
