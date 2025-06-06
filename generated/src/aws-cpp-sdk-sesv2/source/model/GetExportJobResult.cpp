﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExportJobResult::GetExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetExportJobResult& GetExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportSourceType"))
  {
    m_exportSourceType = ExportSourceTypeMapper::GetExportSourceTypeForName(jsonValue.GetString("ExportSourceType"));
    m_exportSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportDestination"))
  {
    m_exportDestination = jsonValue.GetObject("ExportDestination");
    m_exportDestinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportDataSource"))
  {
    m_exportDataSource = jsonValue.GetObject("ExportDataSource");
    m_exportDataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedTimestamp"))
  {
    m_completedTimestamp = jsonValue.GetDouble("CompletedTimestamp");
    m_completedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureInfo"))
  {
    m_failureInfo = jsonValue.GetObject("FailureInfo");
    m_failureInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Statistics"))
  {
    m_statistics = jsonValue.GetObject("Statistics");
    m_statisticsHasBeenSet = true;
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
