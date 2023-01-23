/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportJobResult::GetImportJobResult() : 
    m_jobStatus(JobStatus::NOT_SET),
    m_processedRecordsCount(0),
    m_failedRecordsCount(0)
{
}

GetImportJobResult::GetImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(JobStatus::NOT_SET),
    m_processedRecordsCount(0),
    m_failedRecordsCount(0)
{
  *this = result;
}

GetImportJobResult& GetImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("ImportDestination"))
  {
    m_importDestination = jsonValue.GetObject("ImportDestination");

  }

  if(jsonValue.ValueExists("ImportDataSource"))
  {
    m_importDataSource = jsonValue.GetObject("ImportDataSource");

  }

  if(jsonValue.ValueExists("FailureInfo"))
  {
    m_failureInfo = jsonValue.GetObject("FailureInfo");

  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("JobStatus"));

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("CompletedTimestamp"))
  {
    m_completedTimestamp = jsonValue.GetDouble("CompletedTimestamp");

  }

  if(jsonValue.ValueExists("ProcessedRecordsCount"))
  {
    m_processedRecordsCount = jsonValue.GetInteger("ProcessedRecordsCount");

  }

  if(jsonValue.ValueExists("FailedRecordsCount"))
  {
    m_failedRecordsCount = jsonValue.GetInteger("FailedRecordsCount");

  }



  return *this;
}
