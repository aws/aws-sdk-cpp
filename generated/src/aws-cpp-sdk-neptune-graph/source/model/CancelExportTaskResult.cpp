/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/CancelExportTaskResult.h>
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

CancelExportTaskResult::CancelExportTaskResult() : 
    m_status(ExportTaskStatus::NOT_SET),
    m_format(ExportFormat::NOT_SET),
    m_parquetType(ParquetType::NOT_SET)
{
}

CancelExportTaskResult::CancelExportTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CancelExportTaskResult()
{
  *this = result;
}

CancelExportTaskResult& CancelExportTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("graphId"))
  {
    m_graphId = jsonValue.GetString("graphId");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExportTaskStatusMapper::GetExportTaskStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = ExportFormatMapper::GetExportFormatForName(jsonValue.GetString("format"));

  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

  }

  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");

  }

  if(jsonValue.ValueExists("parquetType"))
  {
    m_parquetType = ParquetTypeMapper::GetParquetTypeForName(jsonValue.GetString("parquetType"));

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
